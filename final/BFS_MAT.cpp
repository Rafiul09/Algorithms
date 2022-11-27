#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <cstdlib>

using namespace std;

const int m = 999;

class Graph
{
    // private:

public:
    // constructor
    int node, edge, u, v;
    int **arr = new int *[node];
    int visited[m];
    int Distance[m];
    Graph()
    {

        cout << "Enter node Then edge\n";
        cin >> node >> edge;
    }

    // member fn
    void initialize()
    {
        for (int i = 0; i < node; i++)
        {
            arr[i] = new int[node];
        }
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                arr[i][j] = 0;
            }
        }
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            arr[u][v] = arr[v][u] = 1;
        }
    }

    void bfs(int v)
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
        cout << "Distance form " << v << " : " << endl;
        for (int i = 0; i < node; i++)
        {
            cout << i << " " << Distance[i] << endl;
        }
    }

    void showMatrix()
    {
        cout << endl
             << "Adjacency Matrix" << endl;
        for (int i = 0; i < node; i++)
        {
            // cout<<i<<"-->";
            for (int j = 0; j < node; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;
    g.initialize();
    g.showMatrix();
    int source;
    cout << "Enter the source : ";
    cin >> source;
    g.bfs(source);

    return 0;
}
