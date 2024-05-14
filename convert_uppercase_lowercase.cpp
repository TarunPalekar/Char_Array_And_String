#include<bits/stdc++.h>
using namespace std;
int findLength(char ch[], int size){
    int index=0;
  
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}
void reverseString(char ch[], int size){
    int start=0;
    int end=size-1;
    while(start<end){// start<end bhi chal sakta hai favorable test case me par unfavorable test case me start<=end try karna
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}
void replaceChar(char ch[], int size){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
    }
}
void to_uppercase(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>='a'&&ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }


}
void to_Lowercase(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>='A'&&ch[index]<='Z'){
            ch[index]=ch[index]-'A'+'a';
            
        }
        index++;
    }
}
bool checkPalindrome(char ch[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        if(ch[start]!=ch[end]){
            return false;
            
        }
        start++;
        end--;
    }
    return true;
}
//125. Valid Palindrome try out this question isme ek catch hai

int main(){
    

    return 0;
}