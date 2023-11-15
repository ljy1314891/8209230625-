#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testunint = 65534;

	cout << "output in unsigned int 1 type:" << testunint << endl << endl;
	cout << "output in char type:" << static_cast<char>(testunint) << endl;
	cout << "output in short type:" << static_cast<short>(testunint) << endl;
	cout << "output in int type:" << static_cast<int>(testunint) << endl;
	cout << "output in double type:" << static_cast<double>(testunint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testunint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testunint << endl;
	//超出short最大 表示范围 //
	float a(3.14);
		cout << (int)a << endl;
}