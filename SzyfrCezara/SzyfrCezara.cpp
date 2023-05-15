#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream dane1("dane_6_1.txt");
	ifstream dane2("dane_6_2.txt");
	ifstream dane3("dane_6_3.txt");
	ofstream wyniki1("wyniki_6_1.txt");
	ofstream wyniki2("wyniki_6_2.txt");
	ofstream wyniki3("wyniki_6_3.txt");
	string slowo;
	//6.1
	for (int i = 0; i < 100; i++)
	{
		dane1 >> slowo;
		int dl = slowo.size();
		int k = 107%26;
		for (int j = 0; j < dl; j++)
		{
			slowo[j] += k;

			if (slowo[j] > 90)
			{
				slowo[j] = slowo[j] - 26;
			}
		}
		wyniki1 << slowo << endl;
	}
	//6.2
	string szyfr;		
	int kod;
	for (int i = 0; i < 3000; i++)
	{
		dane2 >> szyfr >> kod;
		 kod = kod % 26;
		int dl = szyfr.size();
		for (int j = 0; j < dl; j++)
		{
			szyfr[j] = szyfr[j] -  kod;
			if (szyfr[j] < 65)
			{
				szyfr[j] = szyfr[j] + 26;
			}
		}
		wyniki2 << szyfr << endl;
	}
	//6.3
	string slowo1, slowo2;
	for (int i = 0; i < 3000; i++)
	{
		dane3 >> slowo1 >> slowo2;
		int dl = slowo1.size();
		int k = slowo1[0] - slowo2[0];
		//cout << k << endl;
		for (int j = 0; j < dl; j++)
		{
			slowo2[j] = slowo2[j] + k;
			if (slowo2[j] < 65)
			{
				slowo2[j] = slowo2[j] + 26;
			}
			if (slowo2[j] > 90)
			{
				slowo2[j] = slowo2[j] - 26;
			}
		}
		if(slowo1!=slowo2)
		{
			wyniki3 << slowo1 << endl;
		}
			
	}
}