class Solution {
public:
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
vector<vector<int>> answer(2);
  // Find distinct elements in nums1 not present in nums2
    for (int i = 0; i < nums1.size(); i++) {
        bool found = false;

        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            bool duplicate = false;

            for (int j = 0; j < answer[0].size(); j++) {
                if (nums1[i] == answer[0][j]) {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate) {
                answer[0].push_back(nums1[i]);
            }
        }
    }

    // Find distinct elements in nums2 not present in nums1
    for (int i = 0; i < nums2.size(); i++) {
        bool found = false;

        for (int j = 0; j < nums1.size(); j++) {
            if (nums2[i] == nums1[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            bool duplicate = false;

            for (int j = 0; j < answer[1].size(); j++) {
                if (nums2[i] == answer[1][j]) {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate) {
                answer[1].push_back(nums2[i]);
            }
        }
    }

    return answer;
}
};
