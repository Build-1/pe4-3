// pe4-3.cpp -- Without the cstring header file and with safe functions
// Programming exercise 3, chapter 4 - C++ Primer Plus(6th Edition) by Stephen Prata
#include<iostream>

int main(void)
{
	using namespace std;

	char first_name[20];
	cout << " What is your first name? \n";
	cin.getline(first_name, 25);
	first_name[19] = '\0';
	cout << "\n what is your last name? \n";
	char last_name[25];
	cin.getline(last_name, 25);
	last_name[24] = '\0';
	char your_name[50];
	your_name[49] = '\0';
	strncpy_s(your_name, last_name, sizeof(your_name));
	char delimiter[2] = { ',', ' ' };
	strncat_s(your_name, delimiter, 2);
	strncat_s(your_name, first_name, 50);
	cout << " \n Your name is: \n" << your_name;

	cin.get();
      //cin.get();

	return 0;
}
