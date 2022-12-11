

#include<bits/stdc++.h>
using namespace std;

vector<int> graph[5];
int visited[5];

void dfs(int source){

    stack<int> st;
    st.push(source);
visited[source]=1;

while(!st.empty()){

    int v=st.top();
    st.pop();

    for(int i=0;i<graph[v].size();i++){
        int next = graph[v][i];
        if(visited[next]==0){
            st.push(next);
            visited[next]=1;
        }
}

}


}


int main(){

int node,edge,u,v;

cin>>node>>edge;

for(int i=0;i<edge;i++){
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}

dfs(0);

for(int i=0;i<node;i++){
        if(visited[i]==1){
            cout<<"Node "<<i <<" is visited"<<endl;
        }

}



return 0;
}


