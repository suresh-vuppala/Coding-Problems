#include<bits/stdc++.h>
using namespace std;


vector<int> adj[6];
vector<int> ans;
vector<int> inDegree(6);
int x,y;

void topSort()  {
  queue<int> Q;
  for(int i=1; i<=6; i++) {
    if(inDegree[i] == 0)  {
      Q.push(i);
    }
  }
  vector<int> res;
  while(not Q.empty())  {
    int now = Q.front();
    Q.pop();
    cout<<now;
    res.push_back(now);
    for(int next: adj[now]) {
      if(inDegree[next] > 0)  {
        inDegree[next]--;
        if(inDegree[next] == 0) {
          Q.push(next);
        }
      }
    }
  }
   }
void addEdge(int u, int v)
{   
    adj[u].push_back(v);
    inDegree[v]++; 
}

int main(){
    addEdge(5, 2),addEdge(5, 0),addEdge(4, 0),addEdge(4, 1),addEdge(2, 3),addEdge(3, 1);
 topSort();
return 0;
}