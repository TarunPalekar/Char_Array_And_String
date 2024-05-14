#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n=str.size();
         vector<vector<string>> result;
         unordered_map<string, vector<string>> mp;
         for(int i=0;i<n;i++){
             string temp=str[i];
             sort(begin(temp), end(temp));
             mp[temp].push_back(str[i]);
         }
         for(auto &s: mp){
             result.push_back(s.second);
         }

        return result;
    }
};