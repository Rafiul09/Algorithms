#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 using namespace std;

 void printGraph(int **rslt,int node)
 {
     for(int i = 0; i < node; i++){
        for(int j = 0; j < node; j++){
            cout << rslt[i][j] << " ";
        }
        cout << "\n";
    }
 }
 int main()
 {
     int node, edge,u,v;
     cout<<"Enter node Then edge\n";
     cin>>node>>edge;
     int** arr = new int*[node];

     for(int i=0; i<node; i++)
     {
     arr[i] = new int[node];

     }

     for(int i=0; i<node; i++)
     {
         for(int j=0; j<node; j++)
         {
          arr[i][j] =0;
         }
     }

     for(int i=0; i<edge; i++)
     {
         cin>>u>>v;
          arr[u][v] =1;

     }

     printGraph(arr,node);
 }
