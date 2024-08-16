#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int b = 2;
        int n = nums.size();
        if(n<=2){
            return n;
        }
        for(int f = 2; f < nums.size(); f++){
            if(nums[f] != nums[b-2]){
                nums[b] = nums[f];
                b++;
            }
        }
        return b;
    }

};