#include <iostream>
using namespace std;
long long fabonacci(int n) 
{
	if (n <= 0) return 0;
	if (n == 1) return 1;
	if (n > 1) return fabonacci(n - 1) + fabonacci(n - 2);
}

int main() 
{
	cout << fabonacci(0) << endl;
	cout << fabonacci(1) << endl;
	cout << fabonacci(2) << endl;
	cout << fabonacci(3) << endl;
	cout << fabonacci(4) << endl;
	cout << fabonacci(5) << endl;
	cout << fabonacci(6) << endl;
	cout << fabonacci(7) << endl;
	cout << fabonacci(8) << endl;
	cout << fabonacci(30) << endl; 
	cout << fabonacci(40) << endl;
	cout << fabonacci(50) << endl;
	system("pause");
	return 0;
}