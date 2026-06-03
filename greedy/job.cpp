class Solution {
  public:
    // DSU 'find' function with path compression
    // This finds the greatest available free slot
    int findSlot(int s, vector<int>& parent) {
        if (s == parent[s]) {
            return s;
        }
        // Path compression: make the current node point directly to the root
        return parent[s] = findSlot(parent[s], parent);
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();
        
        // 1. Store as {profit, deadline} for easy sorting
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({profit[i], deadline[i]});
        }
        
        // 2. Sort in descending order of profit
        sort(arr.rbegin(), arr.rend());
        
        // 3. Find the maximum deadline
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, deadline[i]);
        }
        
        // 4. Initialize DSU parent array
        // parent[i] represents the latest available free slot <= i
        vector<int> parent(maxDeadline + 1);
        for (int i = 0; i <= maxDeadline; i++) {
            parent[i] = i; 
        }
        
        int countJobs = 0;
        int totalProfit = 0;
        
        // 5. Iterate through the sorted jobs
        for (int i = 0; i < n; i++) {
            int currProfit = arr[i].first;
            int currDeadline = arr[i].second;
            
            // Find the latest available slot for this job using DSU
            int availableSlot = findSlot(currDeadline, parent);
            
            // If a valid slot is found (greater than 0)
            if (availableSlot > 0) {
                countJobs++;
                totalProfit += currProfit;
                
                // Mark this slot as occupied by unioning it with the slot before it
                // We find the parent of availableSlot - 1 to ensure it connects properly
                parent[availableSlot] = findSlot(availableSlot - 1, parent);
            }
        }
        
        return {countJobs, totalProfit};
    }
};