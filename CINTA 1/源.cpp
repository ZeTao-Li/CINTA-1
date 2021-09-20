#include<iostream>
using namespace std;
int multiply(int a, int b)
{
	int t = 0;
	while (b > 0)
	{
		t = t + a;
		b--;
	}
	return t;
}
int main()
{
	return 0;
}