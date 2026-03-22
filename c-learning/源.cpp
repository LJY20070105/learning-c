#include <iostream>
using namespace std;
int main()
{
	int a[10], i;
	void program1(int* p, int n);
		cout << "please enter the numbers:"<<endl;
		for (i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
	cout << endl;
	program1(a, 10);
	for (i = 0; i <10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
void program1(int* p, int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++){

			if (*(p + j) < *(p + k))
			{
				k = j;
			}}

		t = *(p + k);
		*(p + k) = *(p + i);
		*(p + i) = t;
	}
}