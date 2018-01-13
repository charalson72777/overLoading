//Overloading constructors
#include <iostream>
#include <iomanip>
using namespace std;

//Sales
class Sale
{
private:
	double taxRate;

public:
	Sale(double rate)
	{
		taxRate = rate;
	}
	Sale()
	{
		taxRate = 0.0;
	}
	double calcSaleTotal(double cost)
	{
		double total = cost + cost*taxRate;
		return total;
	}
};

int main()
{
	Sale cashier1(.06);
	Sale cashier2;

	cout << fixed << showpoint << setprecision(2);

	cout << "With a 0.06 sales tax rate, the total\n";
	cout << "of the $24.95 sale is, of course, $";
	cout << cashier2.calcSaleTotal(24.95) << endl;

	system("pause");
	return 0;
}