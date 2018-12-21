#include "Account.hh"
#include <iostream>
using namespace std;
int main() {
	Account a1;
	a1.deposit(500);
	a1.withdraw(200);
	cout << a1.getBalance() << '\n';
}
