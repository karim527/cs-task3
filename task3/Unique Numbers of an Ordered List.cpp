#include <iostream>

using namespace std;

int main()

{

int arr[999];

	int n;
	cin >> n;


	for (int i = 0; i < n; i++)
		cin >> arr[i];


	cout<<arr[0]<<" ";
	for (int i = 1; i < n; i++) {
		assert(arr[i] >= arr[i-1]);

		if (arr[i] != arr[i-1])
			cout << arr[i]<<" ";
	}











































    return 0;


    }
