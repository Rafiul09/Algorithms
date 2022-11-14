#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 using namespace std;

 void printGraph(vector<int>rslt[],int node)
 {
     for(int i = 0; i < node; i++){
            cout <<i<<"-->";
        for(int j = 0; j < rslt[i].size(); j++){
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
     vector<int>*arr = new vector<int>[node];



     for(int i=0; i<edge; i++)
     {
         cin>>u>>v;
          arr[u].push_back(v);
          arr[v].push_back(u);
     }

     printGraph(arr,node);
 }

