#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        if(numRows==1) return s;
        int i=0;
        int direction=1;
        int row=0;
        while(i<s.size()){
            if(direction==1){
                while(row<numRows&&i<s.size()){
                    ans[row].push_back(s[i]);
                    row++;
                    i++;
                }
                direction=-1;
                row=numRows-2;
            }
            else{
                while(row>=0&&i<s.size()){
                    ans[row].push_back(s[i]);
                    row--;
                    i++;
                }
                direction=1;
                row=1;
            }
        }
string ansstr="";
for(int i=0;i<numRows;i++){
    ansstr=ansstr+ans[i];
}
        return ansstr;
    }
};