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


void ReadInfo(stCar & Info)
{
		int MaritalStatusChoice;
		int GenderChoice;
		int ColorChoice;

		cout << "Please enter car brand:\n";
		cin >> Info.Brand;

		cout << "Please enter car model:\n";
		cin >> Info.Model;

		cout << "Please enter car year:\n";
		cin >> Info.Year;

		cout << "Please enter first name:\n";
		cin >> Info.owner.FirstName;

		cout << "Please enter last name:\n";
		cin >> Info.owner.LastName;

		cout << "Please enter phone number:\n";
		cin >> Info.owner.ContactInfo.PhoneNumber;

		cout << "Please enter apartment number:\n";
		cin >> Info.owner.ContactInfo.Address.ApartmentNumber;

		cout << "Please enter building number:\n";
		cin >> Info.owner.ContactInfo.Address.BuildingNumber;

		cout << "Please enter entrance number:\n";
		cin >> Info.owner.ContactInfo.Address.EntranceNumber;

		cout << "Please enter PO Box:\n";
		cin >> Info.owner.ContactInfo.Address.POBox;

		cout << "Please enter street:\n";
		cin >> Info.owner.ContactInfo.Address.Street;

		cout << "Please enter email:\n";
		cin >> Info.owner.ContactInfo.Email;

		cout << "Please enter Instagram:\n";
		cin >> Info.owner.ContactInfo.Instagram;

		cout << "Please enter marital status (0 = Single, 1 = Married):\n";
		cin >> MaritalStatusChoice;
		Info.owner.MaritalStatus =
			static_cast<enMaritalStatus>(MaritalStatusChoice);

		cout << "Please enter gender (0 = Male, 1 = Female):\n";
		cin >> GenderChoice;
		Info.owner.Gender =
			static_cast<enGender>(GenderChoice);

		cout << "Please enter favorite color:\n";
		cout << "0 = Red, 1 = Green, 2 = Yellow, 3 = Blue\n";
		cin >> ColorChoice;
		Info.owner.FavoriteColor =
			static_cast<enColor>(ColorChoice);
}

void PrintInfo(const stCar& Info)
{
	cout << "\n================ Car Information ================\n";

	cout << "Car Brand: " << Info.Brand << "\n";
	cout << "Car Model: " << Info.Model << "\n";
	cout << "Car Year: " << Info.Year << "\n";

	cout << "\n================ Owner Information ==============\n";

	cout << "First Name: " << Info.owner.FirstName << "\n";
	cout << "Last Name: " << Info.owner.LastName << "\n";

	cout << "\n================ Contact Information ============\n";

	cout << "Phone Number: "
		<< Info.owner.ContactInfo.PhoneNumber << "\n";

	cout << "Email: "
		<< Info.owner.ContactInfo.Email << "\n";

	cout << "Instagram: "
		<< Info.owner.ContactInfo.Instagram << "\n";

	cout << "\n================ Address Information ============\n";

	cout << "Street: "
		<< Info.owner.ContactInfo.Address.Street << "\n";

	cout << "Building Number: "
		<< Info.owner.ContactInfo.Address.BuildingNumber << "\n";

	cout << "Entrance Number: "
		<< Info.owner.ContactInfo.Address.EntranceNumber << "\n";

	cout << "Apartment Number: "
		<< Info.owner.ContactInfo.Address.ApartmentNumber << "\n";

	cout << "PO Box: "
		<< Info.owner.ContactInfo.Address.POBox << "\n";

	cout << "\n================ Personal Information ===========\n";

	cout << "Gender: ";
	if (Info.owner.Gender == Male)
		cout << "Male\n";
	else
		cout << "Female\n";

	cout << "Marital Status: ";
	if (Info.owner.MaritalStatus == Single)
		cout << "Single\n";
	else
		cout << "Married\n";

	cout << "Favorite Color: ";

	switch (Info.owner.FavoriteColor)
	{
	case Red:
		cout << "Red\n";
		break;

	case Green:
		cout << "Green\n";
		break;

	case Yellow:
		cout << "Yellow\n";
		break;

	case Blue:
		cout << "Blue\n";
		break;
	}

	cout << "=================================================\n";
}




int main()
{
	stCar MyCar1, MyCar2;

	cout << "\nEnter information for the first car:\n";
	ReadInfo(MyCar1);

	cout << "\nEnter information for the second car:\n";
	ReadInfo(MyCar2);

	cout << "\nFirst car information:\n";
	PrintInfo(MyCar1);

	cout << "\nSecond car information:\n";
	PrintInfo(MyCar2);

	return 0;
}