#include<bits/stdc++.h>
#include <iostream>
 using namespace std;

void func(int **arr,int **arr2, int row, int col)
{
   for (int i=0; i<row; i++)
   {
      for(int j=0 ; j<col; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      printf("\n");
   }
   printf("\n");
   for (int i=0; i<row; i++)
   {
      for(int j=0 ; j<col; j++)
      {
        cout<<arr2[i][j]<<" ";
      }
      printf("\n");
   }
}

void Multiply(int **arr,int **arr2, int row, int col)
{
   int rslt[row][col];
 
    cout << "Multiplication of given two matrices is:\n";
 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < row; k++) {
                rslt[i][j] += arr[i][k] * arr2[k][j];
            }
 
            cout << rslt[i][j] << "\t";
        }
 
        cout << endl;
    }
}
void Addition(int **arr,int **arr2, int row, int col)
{
   int rslt[row][col];
 
    cout << "Addition of given two matrices is:\n";
 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            rslt[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << rslt[i][j] << " ";
        }
        cout << "\n";
    }
 
}
void Subtraction(int **arr,int **arr2, int row, int col)
{
   int rslt[row][col];
 
    cout << "Subtraction of given two matrices is:\n";
 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            rslt[i][j] = arr[i][j] - arr2[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << rslt[i][j] << " ";
        }
        cout << "\n";
    }
 
}

int main()
{
    srand(time(0));
  int row, colum;
  cout<<"Enter Row Then Columnn\n";
  cin>>row>>colum;
  int** arr = new int*[row];
  int** arr2 = new int*[row];

  for(int i=0; i<row; i++)
  {
     arr[i] = new int[colum];
     arr2[i] = new int[colum];

  }

  for(int i=0; i<row; i++)
  {
      for(int j=0; j<colum; j++)
      {
         arr[i][j]=rand()%10;
         arr2[i][j]=rand()%10;
      }
  }
  func(arr,arr2, row, colum);
  Addition(arr,arr2, row, colum);
  Subtraction(arr,arr2, row, colum);
  Multiply(arr,arr2, row, colum);

  return 0;
}