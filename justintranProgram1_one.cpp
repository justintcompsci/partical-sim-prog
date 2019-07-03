#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
	int alphaCount = 0,
		upperCount = 0,
		numCount = 0,
		punctCount = 0,
		wspaceCount = 0;
	char read;

	ifstream infile;
	infile.open("GettysburghAddress.txt");

	if (!infile){
		cout << "Error in proccessing the file..." << endl;
}
	while (infile.get(read)) {

		 if (isupper(read)) {
			upperCount++;
		}
		 else if (isalpha(read)) {
			 alphaCount++;
		}

		 else if (isdigit(read)) {
			numCount++;
		}

		 else if (ispunct(read)) {
			punctCount++;
		}
		
		 else if (isspace(read)) {
			wspaceCount++;		
		}
	}

	cout << "The alphabetic character count is: " << alphaCount << endl;
	cout << "The uppercase count is: " << upperCount << endl;
	cout << "The digit count is: " << numCount << endl;
	cout << "The punctuation count is: " << punctCount << endl;
	cout << "The white space count is: " << wspaceCount << endl;

	return 0;
}

