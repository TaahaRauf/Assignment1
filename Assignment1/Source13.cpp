//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <iomanip>
//using namespace std;
//int main() {
//	float annualrate;
//	int  numberofpayments;
//	int loan;
//	float monthlypayments;
//	float amountpaid;
//	float interestpaid;
//	cout << "enter the amount of loan ";
//	cin >> loan;
//	cout << "enter the annual interest rate ";
//	cin >> annualrate;
//	float monthlyrate = annualrate / 12;
//	cout << "enter the number of payments ";
//	cin >> numberofpayments;
//	cout << "enter the amount paid back ";
//	cin >> amountpaid;
//	interestpaid = amountpaid - loan;
//	monthlypayments = (((monthlyrate) * (pow(1 + monthlyrate, numberofpayments))) / (pow(1 + monthlyrate, numberofpayments) - 1)) * loan;
//	cout << "loan amount : " << setw(10) << "$ " <<  loan << endl; 
//	cout << "monthly interest rate : " << setw(10) << "$ " << monthlyrate << endl;
//	cout << "number of payments " << setw(10) << numberofpayments << endl;
//	cout << "monthly payments : " << setw(10) << "$ " << monthlypayments << endl;
//	cout << "amount paid back :" << setw(10) << "$ " << fixed << setprecision(2) << amountpaid << endl;
//	cout << "interest paid : " << setw(10) << "$ " << interestpaid << endl;
//
//
//
//
//
//	
//	//return 0;
//}