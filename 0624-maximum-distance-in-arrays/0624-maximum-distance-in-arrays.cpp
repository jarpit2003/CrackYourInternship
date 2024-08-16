class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // Initialize the minimum and maximum values using the first array
        int min_value = arrays[0][0];
        int max_value = arrays[0].back();
        
        int max_distance = 0;
        
        // Iterate through the rest of the arrays
        for (int i = 1; i < arrays.size(); ++i) {
            // Update the maximum distance using the current array's first and last elements
            max_distance = max(max_distance, abs(arrays[i].back() - min_value));
            max_distance = max(max_distance, abs(max_value - arrays[i][0]));
            
            // Update the global min_value and max_value
            min_value = min(min_value, arrays[i][0]);
            max_value = max(max_value, arrays[i].back());
        }
        
        return max_distance;
    }
};
