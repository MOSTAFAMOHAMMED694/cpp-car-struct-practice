#include <iostream> 
using namespace std;


struct car {
	string Brand;
	string Model; 
	int Year;
};

int main() {
	car MyCar1, MyCar2;

	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 2000;


	MyCar2.Brand = "Ford";
	MyCar2.Model = "Mustang";
	MyCar2.Year = 2022;

	
	cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << "\n";
	cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << "\n";

}