#include<bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
using namespace std;
  vector<vector<int>> ans;

vector<vector<int>> generate(int numRows) {
      
        
        if(numRows >= 1) ans.push_back(vector<int>{1});
        
        if(numRows >= 2) ans.push_back(vector<int>{1,1});
        
        for(int i = 3; i <= numRows; i++){
            vector<int> tmp(i,0);
            
            for(int j=1;j<=i;j++){
                if(j == 1 || j == i) tmp[j-1] = 1;
                else tmp[j-1] = ans[i-2][j-2] + ans[i-2][j-1];
            }
            
            ans.push_back(tmp);
        }
        
        
        return ans;
    }
int main(){
generate(5);
for(int i=0;i<=4;i++){
	for(int j=0;j<=i;j++){
		cout<<ans[i][j];
	}
	cout<<endl;
}
return 0;
}