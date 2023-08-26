#include <iostream>;
using namespace std;

class BankAccount{	
	public:
		BankAccount(int accountID, double balance){
			this->accountID = accountID;
			this->balance = balance;
		}
		
		void deposit( double money ){
			this->balance += money;
		}
		
		void withdraw( double money ){
			if(this->balance < money){
				cout << "No tiene el saldo suficiente para realizar esta extraccion";
			}
			else{
				this->balance -= money;
			}
		}
		
		double showBalance(){
			return this->balance;
		}
		
	private:
		int accountID;
		double balance;
};

int main(){
	
	BankAccount gob(1738201, 100.5);
	gob.withdraw(10);
	cout << gob.showBalance();
	return 0;
}
