#include<iostream>
#include<string>
using namespace std;
void main() {
	char cho;
	string user,luser, pass,lpass;
	do {
		cout << "\n///////////Menu///////////\n";
		cout << "1.Register\n";
		cout << "2.Login\n";
		cout << "Q.Exit Program\n";
		cin >> cho;
		if (cho == '1') {
			cout << "********Register********\n";
			cout << "Input Username :";
			cin >> user;
			cout << "Input Password :";
			cin >> pass;
		}
		if (cho == '2') {
			cout << "********Login********\n";
			cout << "Input Username :";
			cin >> luser;
			cout << "Input Password :";
			cin >> lpass;

			if (user == luser && pass == lpass)
				cout << "Username or Password correct ^__^";

			else cout << "!!!!Username or Password incorrect Please try agian!!!!";
		}
		else cout << "***Please Enter Correct Value*** ";
	} while (cho != 'Q' && cho != 'q');
		cout << "Exit Program...";
}