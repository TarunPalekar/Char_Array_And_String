// 680. Valid Palindrome II
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int start, int end){
  
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;

    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                bool ans1=checkPalindrome(s, i+1, j);
                bool ans2=checkPalindrome(s, i, j-1);
                return ans1||ans2;
            }
        }
        return true;
    }
