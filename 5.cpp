#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F;
	cin >> F;
	cout << setprecision(4) << (F - 32) / 1.8 << endl;
}