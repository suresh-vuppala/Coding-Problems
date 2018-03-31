#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-6
#define debug(x)  cout<<#x<<":"<<x<<endl;

bool isLarge(char lastchar,char c){
    map<char,int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    return mp[lastchar]<=mp[c];
}



int main(){


string s ="DCXXI";
   map<char,int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    char lastchar=s[s.length()-1];
    int amount=mp[lastchar];
    for(int i=s.length()-2;i>=0;i--){
        char c=s[i];
        if(isLarge(lastchar,c)){
            amount+=mp[c];
        }
        else{
            amount-=mp[c];
        }
        lastchar=c;
       debug(amount);
    }

cout<<amount;


    return 0;
}