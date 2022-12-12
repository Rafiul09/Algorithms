#include<bits/stdc++.h>
#include <chrono>
#include <iostream>
#define m 100
using namespace std;
using namespace std::chrono;

vector<int> g[m];
int visited[m];
int Distance[m];
int node, edge;

void bfs(int v, int node, int **arr)
{
    queue<int> q;
    q.push(v);
    visited[v] = 1;
    Distance[v] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int i = 0; i < node; i++)
        {
            if (arr[p][i] == 1)
            {
                int next = i;
                if (visited[next] == 0)
                {
                    q.push(next);
                    visited[next] = 1;
                    Distance[next] = Distance[p] + 1;
                }
            }
        }
    }
}
int **generateArray(int v)
{
    int **arr = new int *[v];
    for (int i = 0; i < v; i++)
    {
        arr[i] = new int[v];
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            arr[i][j] = 0;
        }
    }
    return arr;
}
void printGraph(int **arr, int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void dfs(int source){

    stack<int> st;
    st.push(source);
visited[source]=1;

while(!st.empty()){

    int v=st.top();
    st.pop();

    for(int i=0;i<g[v].size();i++){
        int next = g[v][i];
        if(visited[next]==0){
            st.push(next);
            visited[next]=1;
        }
}

}


}

int main()
{
    srand(time(0));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    node =100;
    edge =300;
    //cin >> node >> edge;

    int **arr = generateArray(node);
    int u, v;
    for (int i = 0; i < edge; i++)
    {
        u=rand()%100;
        v=rand()%100;
       // cin >> u >> v;
        arr[u][v] = arr[v][u] = 1;
    }
  // printGraph(arr, node);
    int source;
    //cout << "Enter the source : ";
    source=rand()%100;
    //cin >> source;

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
     bfs(source, node, arr);
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();



    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 1st Algorithm........................*/


    auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
   dfs(source);
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end2 = chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
        time_taken2 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken2 << setprecision(9);
    cout << " sec" << endl;
































    //printGraph(visited, node);
   /* cout << "Distance form " << source << " : " << endl;
    for (int i = 0; i < node; i++)
    {
        cout << i << " " << Distance[i] << endl;

    }

    for(int i=0;i<node;i++)
    {
    if(visited[i]==1)
    {
     cout<<"Node "<<i <<" is visited"<<endl;
    }
    }

*/















    return 0;
}
