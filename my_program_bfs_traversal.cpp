#include <iostream>
#include <queue>
using namespace std;
int main(){
    vector<vector<int>> adj(4);
    adj[0]={1,3};
    adj[1]={0,2};
    adj[2]={1,3};
    adj[3]={2,0};
    vector<bool>  visited(4,false);
    int start=0;
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        
       int node=q.front();
       cout<<node<<" ";
       q.pop();
       for(int neigh:adj[node]){
           if(!visited[neigh]){
               visited[neigh]=true;
               q.push(neigh);
           }
       }
    }
}
