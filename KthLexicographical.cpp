#include<bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
using namespace std;

int n=10000;
 vector<int> x;
int dfs(int a){
   
    if(a>n) return 0;
 x.push_back(a);
    
    for(int i=0;i<=9;i++){
        dfs(a*10+i);
    }

}


int main(){
 


for(int i=1;i<=9;i++){
    dfs(i);
}

for(int i=0;i<n;i++) cout<<x[i]<<endl;
return 0;
}