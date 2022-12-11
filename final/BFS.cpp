#include <bits/stdc++.h>
#define m 100
using namespace std;
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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> node >> edge;

    int **arr = generateArray(node);
    int u, v;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        arr[u][v] = arr[v][u] = 1;
    }
    printGraph(arr, node);
    int source;
    cout << "Enter the source : ";
    cin >> source;
    bfs(source, node, arr);
    cout << "Distance form " << source << " : " << endl;
    for (int i = 0; i < node; i++)
    {
        cout << i << " " << Distance[i] << endl;
    }
}
