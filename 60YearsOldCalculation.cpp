#include <iostream>
#include <string>
#include <ctime> // Required for time functions
using namespace std;


int main(){

	string name;
	cout<<"Enter your full name: ";
	getline(cin,name);
	
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	cout<<"Hello "<<name<<", You are " <<age<< " years old! "<<endl;
	
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int currentYear = 1900 + ltm->tm_year;
	
	
	int	currentYear1 = currentYear + 60;
	int calc = currentYear1 - age ;


	cout<<"you will turn 60 years old in the year "<<calc;
	
	
	return 0;
}
