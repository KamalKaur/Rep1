#include <iostream>

using namespace std;

int main()
{
  int A[10]; // this reserves 10 integer elements
	int t;

	// load the array
	for(t = 0; t < 10; t++)
		A[t] = t;

	// display the array
	for(t = 0; t < 10; ++t)
		cout << A[t] << ' ' ;    return 0;
}
