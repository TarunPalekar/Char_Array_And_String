#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if((s[start]>='a'&&s[start]<='z'||s[start]>='A'&&s[start]<='Z')&&(s[end]>='a'&&s[end]<='z'||s[end]>='A'&&s[end]<='Z')){
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(!(s[start]>='a'&&s[start]<='z'||s[start]>='A'&&s[start]<='Z')){
                start++;
            }
             else if(!(s[end]>='a'&&s[end]<='z'||s[end]>='A'&&s[end]<='Z')){
                end--;
            }

        }
        return s;
        
    }
};