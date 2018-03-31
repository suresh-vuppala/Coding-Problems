#include<bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
using namespace std;
       
  string frequencySort(string s) {
       map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
            sort(s.begin(), s.end(), [&mp] (char a, char b) {
            return mp[a] > mp[b] || (mp[a] == mp[b] && a > b);
        });
            return s;
    }
    
int main(){
    
cout<<frequencySort("Abb");
return 0;
}