#include<bits/stdc++.h>
using namespace std;

string exp(string s,int low,int high){
        int n=s.length();

    while(low>=0 and high<=n-1 and (s[low]==s[high])){
        low--,high++;
    }
    return s.substr(low+1,high-low-1);
}

string longestPalindromicSubstring(string s){
    int n=s.length();
    string ans="";
    for(int i=0;i<n;i++){
        string res=exp(s,i,i);
        if(ans.length()<res.length()) ans=res;
        res=exp(s,i,i+1);
                if(ans.length()<res.length()) ans=res;

    }
    return ans;
}

int main(){

    string s="ABDCBCDBDCBBC";
    cout<<longestPalindromicSubstring(s)<<endl;
}