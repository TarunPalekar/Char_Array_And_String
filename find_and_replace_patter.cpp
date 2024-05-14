#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void createMapping(string &str){
    char start='a';
    int mapping[300]={0};
    for(auto ch:str){
        if(mapping[ch]==0){
            mapping[ch]=start;
            start++;
        }
    }

    for(int i=0;i<str.length();i++){
        int ch=str[i];
        str[i]=mapping[ch];
    }

}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       createMapping(pattern);
       vector<string> ans;
       for(auto &s:words){
        string tempString=s;
        createMapping(tempString);
        if(tempString==pattern){
            ans.push_back(s);
        }

       }
return ans;
        
    }
};