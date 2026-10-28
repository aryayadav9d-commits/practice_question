class Solution {
public:
double findMaxAverage(vector<int>& nums, int k) {
int sum = 0;
 // Calculate the sum of the first k elements
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    int maxSum = sum;

    // Slide the window
    for (int i = k; i < nums.size(); i++) {
        sum = sum + nums[i] - nums[i - k];
        maxSum = max(maxSum, sum);
    }

    return (double)maxSum / k;
}
};
