#include <iostream>
using namespace std;
int main() {
	char lowercase;
	char uppercase;
	cout << "Enter letter in lower case ";
	cin >> lowercase;
	uppercase = lowercase - 32;
	cout << "The letter in uppercase is " << uppercase;
	return 0;
}