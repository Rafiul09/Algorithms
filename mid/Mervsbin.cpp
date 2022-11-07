#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
 int i, j, k;
 int n1 = m - l + 1;
 int n2 = r - m;
 int L[n1], R[n2];
 for (i = 0; i < n1; i++)
 L[i] = arr[l + i];
 for (j = 0; j < n2; j++)
 R[j] = arr[m + 1+ j];

 i = 0;

 j = 0;
 k = l;
 while (i < n1 && j < n2)
 {
 if (L[i] <= R[j])
 {
 arr[k] = L[i];
 i++;
 }
 else
 {
 arr[k] = R[j];
 j++;
 }
 k++;
 }

 while (i < n1)
 {
 arr[k] = L[i];
 i++;
 k++;
 }

 while (j < n2)
 {
 arr[k] = R[j];
 j++;
 k++;
 }
}

void mergeSort(int arr[], int l, int r)
{
 if (l < r)
 {

 int m = l+(r-l)/2;


 mergeSort(arr, l, m);
 mergeSort(arr, m+1, r);
 merge(arr, l, m, r);
 }
}

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);


		return binarySearch(arr, mid + 1, r, x);
	}


	return -1;
}
int * bubbleSort(int *p, int n){

int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (p[j] > p[j + 1])
                swap(p[j], p[j + 1]);
}
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
void printArray(int A[], int size)
{
 int i;
 for (i=0; i < size; i++)
 cout<<A[i]<<"\n";
 cout<<endl;
}

int main(void)
{
	int arr[100000];
	int n = sizeof(arr) / sizeof(arr[0]);
    freopen("list.txt", "r", stdin);
     for(int i=0;i<100000;i++)
     {

         cin>>arr[i];

     }
	int x = 25056;



	auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

     mergeSort(arr, 0, n - 1);
    //int result0 = search(arr, n, x);
     /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "\nTime taken by merge sort is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;
   // printArray(arr, n);

   // if(result0 == -1){cout << "Element is not present in array\n";}
   // else{cout << "Element is present at index " << result0;}





	auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

	int *m = bubbleSort(arr,n);
	int result = binarySearch(arr, 0, n - 1, x);

	auto end2 = chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
        time_taken2 *= 1e-9;
    cout << "Time taken by Binary search is : " << fixed
         << time_taken2 << setprecision(9);
    cout << " sec" << endl;
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
