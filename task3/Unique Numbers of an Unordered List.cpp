#include <iostream>

using namespace std;

int main()

{

int n;
	cin >> n;
	const int MAX = 500 + 1;
	int is_visited[MAX] = { 0 };

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		assert(0 <= value && value <= 500);

		if (!is_visited[value])
			cout<<value<<" ";
		is_visited[value] = 1;
	}
}









































    return 0;


    }
