class Solution {
public:
    int trap(vector<int>& height) {
        int totalWater = 0;

        //apply 2 pointer approach
        int left = 0;
        int right = height.size() - 1;

        int lmax = height[left];
        int rmax = height[right];

        while(left < right){
            if(lmax <= rmax){
                totalWater += lmax - height[left];
                left++;
                lmax = std::max(lmax, height[left]);
            }
            else{
                totalWater += rmax - height[right];
                right--;
                rmax = std::max(rmax, height[right]);
            }
        }

        return totalWater;
    }
};