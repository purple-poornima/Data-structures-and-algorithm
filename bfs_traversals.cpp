#include<vector>
#include<queue>
using namespace std;
void bfs(int startNode, vector<vector<int>>& adjList, vector<bool>& visited) {
queue<int>q;
q.push(startNode);
visited[startNode]=true;
while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(int neigh : adjList[node]){
        if(!visited[neigh]){
            visited[neigh]=true;
            q.push(neigh);
        }
     }
   }
}
int main(){
    int N,M;
    cin>>N>>M;
    if(N<1 || N>50 || M<0 || M>1000){
        cout<<"Invalid input";
        return 0;
    }
    vector<vector<int>>adjList(N);
    for(int i=0;i<M;i++){
        int u,v;
        cin>>u>>v;
        if(u<0 || u>=N || v<0 || v>=N || u==v){
            cout<<"Invalid Input";
            return 0;
        }
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int S;
    cin>>S;
    if(S<0 || S>=N){
        cout<<"Invalid Input";
        return 0;
    }
    vector<bool> visited(N,false);
    bfs(S,adjList,visited);
    return 0;
}
