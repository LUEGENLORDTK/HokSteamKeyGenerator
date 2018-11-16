#include "stdafx.h"
#include "string"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int stringLength = sizeof(alphanum) - 1;

char genRandom()
{

	return alphanum[rand() % stringLength];
}

int main()
{
	srand(time(0));
	int n;
	ofstream fp;

	fp.open("keys.txt");
	cout << "Wie viele Keys?" << endl;
	cin >> n;

	for (int e = 0; e < n; e++) {
		for (int i = 0; i < 3; i++) {
			for (int z = 0; z < 5; z++)
			{
				cout << genRandom();
				fp << genRandom();
			}

			if (i != 2) {
				cout << "-";
				fp << "-";
			}
			
		}

		cout << endl;
		fp << endl;
	}

	
	fp.close();
	return 0;

}
