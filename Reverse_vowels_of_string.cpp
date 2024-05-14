#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        string word = s;
        while (start < end) {
            if(vowels.find(word[start])!=string::npos&&vowels.find(word[end])!=string::npos){
                swap(word[start], word[end]);
                start++;
                end--;
            }
            else if(vowels.find(word[start])==string::npos){
                start++;
            }
             else if(vowels.find(word[end])==string::npos){
                end--;
            }
           
        }
        return word;
    }
};