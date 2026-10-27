class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate=0;
        int count=0;
        for(int i=0; i<n; i++){
           if(count==0){
            candidate=nums[i];
           } 
           if(nums[i]==candidate){
            count++;
           }else{
            count--;
           }
        }   
    return candidate;
    }
};

/* nums = [5,5,1,1,5] n=5
i=0;0<5
if(count==0) candidate=5 count++
i=1;1<5
if(5==5) true count++
i=2;2<5
if(1==5) false count--
i=3;3<5
if(1==5) false count--
i=4;4<5
if(5==5) true count++
return 5*/
