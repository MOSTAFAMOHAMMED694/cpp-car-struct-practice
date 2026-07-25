#include <iostream> 
#include <string>
using namespace std;
enum enColor
{
	Red,
	Green,
	Yellow,
	Blue
};

enum enGender
{
	Male,
	Female
};

enum enMaritalStatus
{
	Single,
	Married
};


struct stAddress
{
	string Street;
	string BuildingNumber;
	string EntranceNumber;
	string ApartmentNumber;
	string POBox;
};

struct stContactInfo {
	stAddress Address;
	string PhoneNumber;
	string Email;
	string Instagram;

};

struct stowner
{
	string FirstName;
	string LastName;
	stContactInfo ContactInfo;
	enColor FavoriteColor;
	enGender Gender;
	enMaritalStatus MaritalStatus;
};

struct stCar {
	string Brand;
	string Model; 
	int Year;
	stowner owner;
};

int main() {
	stCar MyCar1, MyCar2;

	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 2000;


	MyCar2.Brand = "Ford";
	MyCar2.Model = "Mustang";
	MyCar2.Year = 2022;

	
	cout << MyCar1.Brand << " "
		<< MyCar1.Model << " "
		<< MyCar1.Year << "\n";

	cout << MyCar2.Brand << " "
		<< MyCar2.Model << " "
		<< MyCar2.Year << "\n";
	return 0;
}