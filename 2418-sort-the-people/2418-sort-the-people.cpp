#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }
        
        sort(people.rbegin(), people.rend());
        
        vector<string> result;
        for (auto& person : people) {
            result.push_back(person.second);
        }
        
        return result;
    }
};
