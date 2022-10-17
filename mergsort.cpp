#include<iostream>
using namespace std;

int* mergeArrays(int *arr1, int* arr2, int n1,
							int n2)
{
	int i = 0, j = 0, k = 0;
	int *arr3= new int[n1+n2];


	while (i<n1 && j <n2)
	{

		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}


	while (i < n1)
		arr3[k++] = arr1[i++];


	while (j < n2)
		arr3[k++] = arr2[j++];
		return arr3;
}


int main()
{
	int arr1[] = {1, 3, 5, 7};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2, 4, 6, 8};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int* arr4=mergeArrays(arr1, arr2, n1, n2);

	cout << "Array 1:" <<endl;
	for (int i=0; i < n1; i++)
		cout << arr1[i] << " ";
		cout << "\nArray 2:" <<endl;
	for (int i=0; i < n2; i++)
		cout << arr2[i] << " ";

	cout << "\nArray after merging" <<endl;
	for (int i=0; i < n1+n2; i++)
		cout << arr4[i] << " ";

	return 0;
}

