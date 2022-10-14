#include <iostream>
#include<fstream>
#include<string>
using namespace std;

void quiz7() {
	int const file1Size = 100;
	char file1[file1Size];
	int numberOfLines = 0;
	int i = 0;
	cout << "\nEnter file name:";
	cin.getline(file1, file1Size);
	cout << "\nNumber of lines you want to add in file: ";
	cin >> numberOfLines;
	fstream fout1(file1);
	
	while (i < numberOfLines) {
		string userInput;
		cout << "Type your line: ";
		cin >> userInput;

		i++;
	};
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	fout1.close();


	fstream openFile(file1);
	string line;
	while (!openFile.eof()) {
		getline(openFile, line);
		cout << line << endl;
	}
}
