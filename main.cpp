#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;
int main()
{
	ifstream file;
	file.open("E:/PWA-Ecommerce/Trap_Girl/banner.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(50);
	}
	system("pause");
}
