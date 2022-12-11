

#include<bits/stdc++.h>
using namespace std;

int graph[5][5];
int visited[5];

void dfs(int source){

visited[source]=1;

for(int i=0;i<5;i++){
       if(graph[source][i]==1){
         if(visited[i]==0){
            dfs(i);
        }
       }

}
}



int main(){

int node,edge,u,v;

cin>>node>>edge;

for(int i=0;i<edge;i++){
    cin>>u>>v;
    graph[u][v]=1;
    graph[v][u]=1;
}

dfs(0);

for(int i=0;i<node;i++){
        if(visited[i]==1){
            cout<<"Node "<<i <<" is visited"<<endl;
        }

}



return 0;
}



