class Solution {
   public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long finishTime = customers[0][0] + customers[0][1];
        long long totalWaitingTime = finishTime - customers[0][0];    
        for (int i = 1; i < customers.size(); i++) {
            if (customers[i][0] > finishTime) {
                finishTime = customers[i][0] + customers[i][1];
                totalWaitingTime += finishTime - customers[i][0];
            } else {
                finishTime += customers[i][1];
                totalWaitingTime += finishTime - customers[i][0];
            }
        }
        return (double)totalWaitingTime / customers.size();
    }
};