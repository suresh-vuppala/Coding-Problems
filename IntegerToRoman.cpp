#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-6
#define debug(x)  cout<<#x<<":"<<x<<endl;

int main(){

string Romans[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

int numerals[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};

int val=1234;
string s="";
int i=0;
while(val>0){
      
    if((val-numerals[i])>=0){
        s+=Romans[i];
        val-=numerals[i];
    }
    else{
            i++;
        }
}

cout<<s;
    return 0;
}