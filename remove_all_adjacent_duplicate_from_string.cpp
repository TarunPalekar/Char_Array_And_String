#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
// bool areLastK_1CharsSame(string &ans, char&newch, int k_1){
//     int it=ans.size()-1;
//     for(int i=0;i<k_1;i++){
//         if(newch!=ans[it]) return false;
//         it--;
//     }
//     return true;
// }
//     string removeDuplicates(string s, int k) {
//         string ans;
//         for (int i = 0; i < s.size(); i++) {
//             char& newch = s[i];
//             if (ans.size() < k - 1) {
//                 ans.push_back(newch);

//             } else {
//                 if (areLastK_1CharsSame(ans, newch, k - 1)) {
//                     for (int j = 0; j < k - 1; j++)
//                         ans.pop_back();
//                 }
//                 else{
//                     ans.push_back(newch);
//                 }
//             }
//         }
//         return ans;
//     }
// };