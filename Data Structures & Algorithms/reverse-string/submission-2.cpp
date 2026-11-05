class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left++], s[right--]);
        }
    }
};

/*['h','e','l','l','o']
left=0; right=4
while(0<4)
swap(h,o) o,e,l,l,h
swap(e,l) o,l,l,e,h
swap(l,l) o,l,l,e,h
*/
