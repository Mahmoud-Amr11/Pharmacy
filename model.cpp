#include "model.h"
 //----------------------------------------------------------------- implementation of Base class ------------------------------------------------------------------------

// implementation of Constructor 
Base::Base() {
	Name = " ";
	ID = 0;
}
Base::Base(string Name, int ID) {
	this->Name = Name;
	this->ID = ID;
}
 void Base::setName(string Name) {
	this->Name = Name;
 }
 void Base::setID(int ID) {
	 this->ID = ID;
 }
 string Base::getName() {
	 return Name;
 }
 int Base::getID() {
	 return ID;
 }
 void Base::display() {
	 cout << "The Name is : " << Name << endl;
	 cout << "The ID is : " << ID << endl;
 }


 //------------------------------------------------------------------------ End Base claas ------------------------------------------------------------------------------






 //----------------------------------------------------------------- implementation of Admin class ----------------------------------------------------------------------


// implementation of Constructor 
 Admin::Admin() {
	Address = " ";
	phoneNumber =" ";
}
Admin::Admin( string Name, int ID ,string Address, string phoneNumber) : Base(Name,ID) {
	this->Address = Address;
	this->phoneNumber = phoneNumber;
}
void Admin::setAddress(string Address) {
	this->Address = Address;
}
void Admin::setPhoneNumber(string phoneNumber) {
	this->phoneNumber =phoneNumber;
}
string Admin::getAddress() {
	return Address;
}
string Admin::getPhoneNumber() {
	return phoneNumber;
}
void Admin::display() {
	cout << "*********************  The information of Admin is :  ************************" << endl;
	cout << "The Name is         : " <<getName() << endl;
	cout << "The ID is           : "   << getID()<< endl;
	cout << "The Address is      : " << getAddress() << endl;
	cout << "The Phone Number is : " << getPhoneNumber() << endl;
	cout << endl;
}

//------------------------------------------------------------------------ End Admin claas ------------------------------------------------------------------------------




 //----------------------------------------------------------------- implementation of Empleyee class -------------------------------------------------------------------
Empleyee::Empleyee() {
	Department = " ";
	Salary = 0;
}
Empleyee::Empleyee(string Name, int ID, string Address, string phoneNumber, string Department, double Salary)
   :Admin(Name, ID,Address,phoneNumber) {
	this->Department = Department;
	this->Salary = Salary;
}
void Empleyee::setDepartment(string Department) {
	this->Department = Department;
}
void Empleyee::setSalary(double Salary) {
	this->Salary = Salary;
}
string Empleyee::getDepartment() {
	return Department;
}
double Empleyee::getSalary() {
	return Salary;
}
void Empleyee::display() {
	cout << "*********************  The information of Empleyee is :  *********************" << endl;

    cout << "The ID is           : " << getID() << endl;
	cout << "The Name is         : " << getName() << endl;
	cout << "The Address is      : " << getAddress() << endl;
	cout << "The Phone Number is : " << getPhoneNumber() << endl;
	cout << "The Department is   : " << getDepartment() << endl;
	cout << "The Salary is       : " << getSalary() << endl;
	cout << endl;
}


//------------------------------------------------------------------------ End Empleyee claas ---------------------------------------------------------------------------




 //----------------------------------------------------------------- implementation of Product class --------------------------------------------------------------------

Product::Product() {
	Price = 0;
	Quantity = 0;
}
Product::Product(string Name,int ID,double Price, int Quantity):Base(Name,ID) {
	this->Price = Price;
	this->Quantity = Quantity;
}
void Product::setPrice(double Price) {
	this->Price = Price;
}
void Product::setQuantity(int Quantity) {
	this->Quantity = Quantity;
}
double Product::getPrice() {
	return Price;
}
int Product::getQuantity() {
	return Quantity;
}

void Product::display() {
    cout << "*********************  The information of Product is :  **********************" << endl;
    cout << "The ID is       : " << getID() << endl;
	cout << "The Name is     : " << getName() << endl;
	cout << "The Price is    : " << getPrice() << endl;
	cout << "The Quantity is : " << getQuantity() << endl;
	cout << endl;
}

//------------------------------------------------------------------------ End Product claas ---------------------------------------------------------------------------

Order::Order(){
    orderQuantity = 0;
    orderPrice = 0;
}
Order::Order(string Name,int ID,double orderQuantity,double orderPrice) : Base(Name,ID) {
    this->orderQuantity = orderQuantity;
    this->orderPrice = orderPrice * orderQuantity;
}
void Order::setOrderQuantity(double orderQuantity) {
    this->orderQuantity= orderQuantity;
}
void Order::setOrderPrice(double orderPrice) {
    this->orderPrice=orderPrice*orderQuantity;
}
double Order::getOrderPrice() {
    return orderPrice;
}
double Order::getOrderQuantity() {
    return orderQuantity;
}