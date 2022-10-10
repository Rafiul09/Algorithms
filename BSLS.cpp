#include <bits/stdc++.h>
using namespace std;

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

int main(void)
{
	int arr[10000];
	int n = sizeof(arr) / sizeof(arr[0]);
    freopen("input.txt", "r", stdin);
     for(int i=0;i<10000;i++)
     {
         //a[i]=rand()%10;
         cin>>arr[i];
        // cout<<a[i]<<"\n";
     }
	int x = 25056;

	auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/


    int result0 = search(arr, n, x);
     /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "\nTime taken by linear search is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    if(result0 == -1){cout << "Element is not present in array\n";}
    else{cout << "Element is present at index " << result0;}





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

