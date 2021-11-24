#include <iostream>

using namespace std;

int Test()
{
	const short n = 3;
	int massive[n * n];

	for (short i = 0; i < n * n; i++)
	{
		massive[n * n] = i + 1;
		cout << massive[n * n];
	}
	cout << endl;

	return 0;
}