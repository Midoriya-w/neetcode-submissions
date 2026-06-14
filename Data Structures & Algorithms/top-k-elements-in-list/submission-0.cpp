class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
          // Step 1: Store frequency of each number
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Create a max heap
        // Pair format: {frequency, number}
        priority_queue<pair<int, int>> maxHeap;

        for (auto entry : freq) {
            int number = entry.first;
            int frequency = entry.second;

            maxHeap.push({frequency, number});
        }

        // Step 3: Extract the top k frequent elements
        vector<int> result;

        while (k--) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    
    }
};
