#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 15;
	cout << "skaicius a pries apkeitima yra: " << a << "\n";
	cout << "skaicius b prie apkeitima yra: " << b << "\n";

	a = (a * b);
	b = (a / b);
	a = (a / b);
	
	cout << "skaicius a po apkeitimo su b yra: " << a << "\n";
	cout << "skaicius b po apkeitimo su a yra: " << b << "\n";

	return 0;
}
