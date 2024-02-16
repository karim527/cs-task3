#include <iostream>

using namespace std;

int main()

{
 const int N = 200;

	int n, a[N];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];


	int mn;
	bool first_time = true;

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			int tmp = a[i] + a[j] + j - i;
			if (first_time || tmp < mn) {
				mn = tmp;
				first_time = false;
			}
		}
	}
	cout << mn << endl;












































    return 0;


    }
