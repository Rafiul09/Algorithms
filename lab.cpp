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
int Lsearch(int *arr, int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int n = 1000000;
	int *arr=new int [n];

    freopen("in.txt", "r", stdin);
     for(int i=0;i<n;i++)
     {

         cin>>arr[i];

     }
	int x = 11796;

	auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);




    int result0 = Lsearch(arr, n, x);


    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "\nTime taken by linear search is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    if(result0 == -1){cout << "Element is not present in array\n";}
    else{cout << "Element is present at index " << result0<<endl;}


    sort(arr,arr+n);


	auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

	//int *m = bubbleSort(arr,n);
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
