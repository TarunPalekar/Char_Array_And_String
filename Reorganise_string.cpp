#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for (auto ch : s) {
            int position = ch - 'a';
            hash[position] = hash[position] + 1;
        }
        int max_freq = INT_MIN;
        char max_freq_char;
        for (int i = 0; i < 26; i++) {
            if (hash[i] > max_freq) {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }
        int index=0;
        while(index<s.size()&&max_freq>0){
            s[index]=max_freq_char;
            index=index+2;
            max_freq--;

        }
        if(max_freq>0) return "";
        else{
            hash[max_freq_char-'a']=0;
            for(int i=0;i<26;i++){
                while(hash[i]>0){
                    index=index>=s.size()?1:index;
                    s[index]=i+'a';
                    hash[i]--;
                    index=index+2;
                }
            }
        }
        return s;
    }
};