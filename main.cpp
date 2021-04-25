#include <iostream>
#include <array>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int age;

	cout << "Welcome to the Bar! How old are you?" << endl;
	cin >> age;

	if (age >= 21)
	{

		cout << "You can drink here." << endl;
	}
	else if(age >= 16 && age < 21)
	{
		cout << "You can't drink here, but you can drive" << endl;
	
	}
	else
	{
		cout << "You cant drink, or be here..LEAVE" << endl;

	}
	return 0;
}