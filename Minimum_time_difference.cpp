#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int convert_to_minstime(string& time)
{
    int total_time=0;
    int hrs=stoi(time.substr(0,2));
    hrs=hrs*60;
    int mins=stoi(time.substr(3, 2));
    total_time=hrs+mins;
    return total_time;
}

    int findMinDifference(vector<string>& timePoints) {
       vector<int> mins;
       int ans=INT_MAX;
       for(string time:timePoints){
        mins.push_back(convert_to_minstime(time));
       }
       sort(mins.begin(), mins.end());
       for(int i=0;i<mins.size()-1;i++){
        ans=min(ans, (mins[i+1]-mins[i]));
       }
       int reversetime=(1440+mins[0])-(mins[mins.size()-1]);
        ans=min(ans, reversetime);
       return ans;
        
    }
};