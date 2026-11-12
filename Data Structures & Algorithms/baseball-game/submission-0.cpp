class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> bs; //create a stack
        for(string op : operations){
            if(op == "+"){
                int topVal=bs.top();
                bs.pop(); //remove item
                int secondVal=bs.top();
                bs.push(topVal);
                bs.push(topVal + secondVal);
            }
            else if(op == "C"){
                bs.pop(); //delete the previous item
            }
            else if(op == "D"){
                bs.push(2*bs.top()); //double of previous 
            }
            else{
                int num=stoi(op); //string to integer
                bs.push(num);
            }
        }
        int totalSum=0;
        while(!bs.empty()){ //if the stack is not empty
            totalSum += bs.top();
            bs.pop();
        }
        return totalSum;
    }
};