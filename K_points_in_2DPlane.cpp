
/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
*/
#include<bits/stdc++.h>

using namespace std;
map<pair<int,int>,int> map1;
vector<pair<pair<int,int>,int>>mapVector;
int x,y;
int main(){
 // freopen("input.txt", "r", stdin);
for(auto i=0;i<5;i++){
  cin>>x>>y;
  map1.insert(make_pair(make_pair(x,y),sqrt((x*x)+(y*y))));

}
  for (auto iterator = map1.begin(); iterator != map1.end(); ++iterator) {
mapVector.push_back(*iterator);}
sort(mapVector.begin(), mapVector.end(),[](pair<pair<int,int>,int>e1,pair<pair<int,int>,int>e2){return e1.second < e2.second;});
  vector<pair<pair<int,int>,int>>::iterator it;
  for (auto it=mapVector.begin() ; it!=mapVector.end() ; it++)
        cout << "(" << (*it).first.first << ", "
             << (*it).first.second << ")   " 
             << (*it).second
             << endl;return 0;
}