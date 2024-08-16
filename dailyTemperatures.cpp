#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::stack<int> mStack;
        std::vector<int> result(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++){
            while(!mStack.empty() && temperatures[mStack.top()] < temperatures[i]){
                result[mStack.top()] = i - mStack.top();
                mStack.pop();
            }
            mStack.push(i);
        }
        return result;
    }
};