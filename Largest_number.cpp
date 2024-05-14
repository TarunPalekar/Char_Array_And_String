#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static bool customsort(string a, string b){
    string combi1=a+b;
string combi2=b+a;
return combi1>combi2;
}
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(auto i:nums){
            ans.push_back(to_string(i));
        }
        sort(ans.begin(), ans.end(), customsort);
        if(ans[0]=="0")return "0";
        string finalAns="";
        for(int i=0;i<ans.size();i++){
            finalAns=finalAns+ans[i];
        }
        return finalAns;
    }
};