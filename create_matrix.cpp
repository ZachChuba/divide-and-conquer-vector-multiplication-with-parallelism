#include <fstream>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

void generateMatrix(ofstream &myFile, int n) {
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			int base = rand() % 99;
			int decimal = rand() % 99;
			myFile << to_string(base) << "." << to_string(decimal);
			if (i == n-1) {
				myFile << "\n";
			} else {
				myFile << " ";
			}
		}
	}
}

int main(int argc, char *argv[]) {
	ofstream myFile;
	int n;
	if (argc < 3) {
		cerr << "Expected command line input in the format filename size_of_matrix, received none\n";
		return -1;
	} else {
		myFile.open(argv[1]);
		try {
			n = atoi(argv[2]);
		} catch (std::string e) {
			cerr << e;
			return -1;
		}
		if (n % 2 != 0) {
			cerr << "Currently only supports even sized matrix" << endl;
			return -1;
		}
	}
	srand(time(0));
	generateMatrix(myFile, n);
	myFile << "\n";
	generateMatrix(myFile, n);
	myFile.close();
	return 0;
}
