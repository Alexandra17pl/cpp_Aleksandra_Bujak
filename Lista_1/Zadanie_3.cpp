#include <iostream>
#include <math.h>

using namespace std;

double archimedes_a(int i)
{
	if(i==0)
		return 1.0/sqrt(3);
	else
		return ((sqrt(archimedes_a(i-1.0)*archimedes_a(i-1.0)+1)-1.0)/(archimedes_a(i-1.0)));
}

double archimedes_b(int i)
{
	if(i==0)
		return 1.0/sqrt(3);
    else
		return ((archimedes_b(i-1.0))/((sqrt(archimedes_b(i-1.0)*archimedes_b(i-1.0)+1)+1.0)));
}

int main()
{
	double wynik_1,wynik_2;
	wynik_1=wynik_2=0.0;
	cout << "Format wyniku: " << endl;
	cout << "i|Podpunkt a|Błąd[%]|Podpunkt b|Błąd[%]" << endl;
	for(int i=0; i<=15; i++)
	{
		wynik_1 = 6  *pow(2,i) * archimedes_a(i);
		wynik_2 = 6 * pow(2,i) * archimedes_b(i);
		cout << i << "|" << wynik_1<<"|" << (abs(M_PI-wynik_1)/M_PI)*100 << "|"<<wynik_2 << "|" << (abs(M_PI-wynik_2)/M_PI)*100 << endl;
	}
}
