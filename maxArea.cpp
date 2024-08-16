#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int max = 0;
        int area = 0;

        while (l < r){
            area = std::min(height[l],height[r]) * (r-l);
            if(area > max){
                max = area;
            }
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max;
    }
};