#include<bits/stdc++.h>
#include <chrono>
#include <iostream>
using namespace std::chrono;
using namespace std;

int * bubbleSort(int *p, int n){

int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (p[j] > p[j + 1])
                swap(p[j], p[j + 1]);
}

void printList(int *p, int n){
    for(int i=0;i<n;i++)
     {

         cout<<p[i]<<"\n";
     }


}



int main(){

  //int z=100;
  srand(time(0));
  int close=100000;
for(int r=10;r<close;r+=10){
    int n=r;

 int *A = new int[n];
for(int i=0;i<n;i++)
     {
         A[i]=rand();
     }
//printList(A,n);

auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    int *m = bubbleSort(A,n);
    //printList(A,n);
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;


//return 0;
}
}
