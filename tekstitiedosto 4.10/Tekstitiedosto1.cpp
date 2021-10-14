// (C) Jani Rytkönen
//  6.10.2021
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	cout << "Lisaa 3 sanaa sanakirjaan" << endl;
	vector<string> example;
	for (int i = 0; i < 3; i++)
	{
		string sana;
		getline(cin, sana);
		example.push_back(sana);
	}

	ofstream output_file("d:\\teksti\\sanakirja.txt", ios_base::out | ios_base::app);
	ostream_iterator<string> output_iterator(output_file, "\n");
	copy(example.begin(), example.end(), output_iterator);
	output_file.close();

	ifstream input;
	size_t pos;
	string line;
	

	input.open("d:\\teksti\\sanakirja.txt");
	if (input.is_open())
	{
		cout << "Syota sana jolle haluat kaannoksen" << endl;
		string haku;
		cin >> haku;

		while (getline(input, line))
		{
			
			pos = line.find(haku);
			if (pos != string::npos)
			{
				cout << "Sanan kaannokset: " << line << endl;
				break;
			}
			
			
			
		}
		
	}
	

	system("exit");
}



