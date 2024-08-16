#include <queue>
#include <vector>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        //declare priority queue
        std::priority_queue<int> pq;

        //put all elements into priority queue
        for (int i = 0; i < stones.size(); i++){
            pq.push(stones[i]);
        }

        int x;
        int y;
        int temp;

        while(pq.size() > 1){
            y = pq.top();
            pq.pop();
            x = pq.top();
            pq.pop();
            if(x == y){
                x = 0;
                y = 0;
            }
            else{
                temp = y-x;
                pq.push(temp);
            }
        }
        if(pq.size() == 1){
            return pq.top();
        }
        return 0;
    }
};