class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());

        return min(candyType.size()/2, uniqueTypes.size());
    }
};