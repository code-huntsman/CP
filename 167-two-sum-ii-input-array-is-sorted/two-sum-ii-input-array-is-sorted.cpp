class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        if(n < 2) NULL;
        int low = 0, high = n-1;
        while(low < high) {
            int sum = numbers[low] + numbers[high];
            if(sum == target) {
                return {low+1, high+1};
            }
            else if(sum > target) high--;
            else low++;
        }
        return {};
    }
};