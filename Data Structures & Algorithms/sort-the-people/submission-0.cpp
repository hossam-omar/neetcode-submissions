class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int , string>> people;
        for(int i =0; i < heights.size(); i++){
            people.push_back({heights[i],names[i]});
        }
        sort(people.begin(), people.end(), greater<>());
        vector<string> result;
        for(auto pair : people){
            result.push_back(pair.second);
        }
        return result;
    }
};