class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
    return k;    
    }
};

/*nums = [3,2,2,3], val = 3
i=0;i<4
if(3!=3) false out of if statement
i=1;1<4
if(2!=3) true [2] k++
i=2;2<4
if(2!=3) true [2,2]
i=3;3<4
if(3!=3) false out of if statement
out of for loop i=4;4<4 false

return k*/