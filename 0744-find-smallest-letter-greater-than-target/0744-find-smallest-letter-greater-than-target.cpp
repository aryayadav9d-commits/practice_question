class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (auto&a : letters){
            if(a>target) return a;
        }
        return letters[0];
    }
};