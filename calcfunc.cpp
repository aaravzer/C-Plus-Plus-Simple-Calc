#include <iostream>
#include <string>
#include <cstdlib>
//prep
using namespace std;
void prep(){
int userNum1;
int userNum2;
string userString3;
cout << "Enter a number:" << "\n";
cin >> userNum1;
cout << "Enter another number:" << "\n";
cin >> userNum2;

cout << "Here is how to calculate your numbers inputed!" << "\n";
cout << "Type all letters in CAPS!" << "\n";
cout  << "Type A to add" << "\n";
cout  << "Type S to subtract" << "\n";
cout  << "Type M to multiply" << "\n";
cout  << "Type D to divide" << "\n";
cout  << "Type R to remainder" << "\n";
cin >> userString3;
if(userString3 == "A") {
	int sum = userNum1 + userNum2;
	cout << "Your answer is:" << sum << "\n";
}
if(userString3 == "S") {
	int sum = userNum1 - userNum2;
	cout << "Your answer is:" << sum << "\n";
}
if(userString3 == "M") {
	int sum = userNum1 * userNum2;
	cout << "Your answer is:" << sum << "\n";
}
if(userString3 == "D") {
	int sum = userNum1 / userNum2;
	cout << "Your answer is:" << sum << "\n";
}
if(userString3 == "R") {
	int sum = userNum1 % userNum2;
	cout << "Your answer is:" << sum << "\n";
}
}

int main() {
	prep();

}