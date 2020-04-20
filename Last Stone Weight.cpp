class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        int res = 0;
        for(int i = 0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size() > 1){
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            if(top1 != top2){
                pq.push(top1 - top2);
            }
        }
        if(pq.size() != 0){
            return pq.top();
        }
        else{
            return 0;
        }
    }
};
