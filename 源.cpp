#include<iostream>
using namespace std;
int main()
{
	int a[10], i;
	void change(int* p, int n);
	cout << "please enter the namebers;";
	for (i = 0; i < 10; i++)
		cin >> a[i];
	change(a, 10);
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;

}
void change(int* p, int n)
{
	int max, min, i, q, e;
	max = min = 0;
	for (i = 0; i < n; i++)
	{
		if (*(p + i) > *(p + max))
			max = i;
	}
	if (max != n - 1)
	{
		e = *(p + n - 1);
		*(p + n - 1) = *(p + max);
		*(p + max) = e;
	}
	for (i = 0; i < n; i++)
	{
		if (*(p + i) < *(p + min))
			min = i;
	}
	if (min != 0)
	{
		q = *p;
		*p = *(p + min);
		*(p + min) = q;
	}
}