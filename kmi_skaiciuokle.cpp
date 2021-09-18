using namespace std;
#include <iostream>

int main()
{
	float a, b, kmi;
	cout << "Si programa apskaiciuos jusu kuno mases indeksa KMI\n";
	cout << "Iveskite savo kuno svori kilogramais\n";
	cin >> a;
	cout << "Iveskite savo ugi metrais\n";
	cin >> b;
	kmi = a / (b*b);
	cout << "Jusu KMI yra: " << kmi << "\n";

	return 0;
}
