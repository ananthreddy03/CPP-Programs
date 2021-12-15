#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	
	char yesorno;
	cout << "Enter your decision :: y/n" << endl;
	cin >> yesorno;
	while(yesorno == 'y'){
		int a;
		int b;
		char operation;
		cout << "Enter two Numbers :: " << endl;
		cin >> a >> b;
		cout << "Enter Operation :: " << endl;
		cout << "Add :: +" << endl;
		cout << "Subtraction :: -" << endl;
		cout << "Multiplication :: *" << endl;
		cout << "Divison :: /" << endl;
		
		cin >> operation;

		


		// cout << "Enter your decision :: y/n" << endl;
		// cin >> yesorno;
	}

	return 0;
}

