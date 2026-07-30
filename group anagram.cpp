#include<vector>
using namespace std;
#include <algorithm>
#include <string>
#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>> a;
        for (string x:strs){
            string key=x;
            sort(key.begin(),key.end());
            a[key].push_back(x);
        }
        for (auto& x:a){
            ans.push_back(x.second);
        }
        return ans;
          
    }
};