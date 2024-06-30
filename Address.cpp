#include "Address.h"

// Constructors
Address::Address() {
	house = "";
	street = "";
	city = "";
	country = "";
}

Address::Address(std::string house, std::string street, std::string city, std::string country) {
	this->house = house;
	this->street = street;
	this->city = city;
	this->country = country;
}

// Getters
std::string Address::get_house() const { return house; }
std::string Address::get_street() const { return street; }
std::string Address::get_city() const { return city; }
std::string Address::get_country() const { return country; }

// Setters
void Address::set_house(std::string house) {
	this->house = house;
}
void Address::set_street(std::string street) {
	this->street = street;
}
void Address::set_city(std::string city) {
	this->city = city;
}
void Address::set_country(std::string country) {
	this->country = country;
}

// equals() method to check if passed address is equal to *this
bool Address::equals(const Address& address)
{
	if (this == &address) {
		return true;
	}
	if (this->house != address.house ||
		this->street != address.street ||
		this->city != address.city ||
		this->country != address.country)
	{
		return false;
	}
	return true;
}

// print the address in one line in this format: House, Street, City, Country
void Address::print_address()
{
	std::cout<<"House#. " << house << ", " <<"Street#. " << street << ", " << city << ", " << country << std::endl;
}

// Return a copy of current object
Address Address::copy_address()
{
	return Address(house, street, city, country);
}

// Overload cin for Address
std::istream& operator>>(std::istream& in, Address& address)
{
	in.ignore();
	std::string newHouse;
	std::string newStreet;
	std::string newCity;
	std::string newCountry;

	std::cout << "Enter house: ";
	std::getline(in, newHouse);
	std::cout << "Enter street: ";
	std::getline(in, newStreet);
	std::cout << "Enter city: ";
	std::getline(in, newCity);
	std::cout << "Enter country: ";
	std::getline(in, newCountry);

	address.set_house(newHouse);
	address.set_street(newStreet);
	address.set_city(newCity);
	address.set_country(newCountry);
	return in;
}
//if the contact already exist in file then dont save duplicate in file