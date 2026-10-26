class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

/*nums = [1, 2, 3, 3]; n=4
i=0
j=1;1<4 --if(1==2) false
j=2;2<4 --if(1==3) false
j=3;3<4 --if(1==3) false

i=1
j=2;2<4 --if(2==3) false
j=3;3<4 --if(2==3) false

i=2
j=3;3<4 --if(3==3) true
return true*/