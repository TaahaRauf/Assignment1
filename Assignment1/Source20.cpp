#include <iostream>
using namespace std;
int main() {
	float speedA;
	float speedB;
	float minutesA;
	float minutesB;
	float timeA;
	float timeB;
	float distanceA;
	float distanceB;
	cout << "Enter the speed of Car A in miles per hour ";
	cin >> speedA;
	cout << "Enter the speed of Car B in miles per hour ";
	cin >> speedB;
	cout << "Enter the hours travelled by Car A ";
	cin >> timeA;
	cout << "Enter the hours travelled by Car B ";
	cin >> timeB;
	cout << "Enter the minutes travelled by Car A ";
	cin >> minutesA;
	timeA = timeA + (minutesA / 60);
	cout << "Enter the minutes travelled by Car B ";
	cin >> minutesB;
	timeB = timeB + (minutesB / 60);
	distanceA =


	return 0;
}