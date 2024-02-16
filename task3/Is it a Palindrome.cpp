#include <iostream>

using namespace std;

int main()
{
   int arr[999];

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];


	for (int i = 0; i < N / 2; i++) {
		if (arr[i] != arr[N - 1 - i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;




    return 0;
}
