#include<iostream>
using namespace std;
class Base {
private:
	string Name;
	int ID;
public:
	//Constractor 
	Base();
	Base(string Name,int ID);

	//Seterr
	void setName(string Name);
	void setID(int ID);

	//Geterr
	string getName();
	int getID();
	virtual void display();
};
class Admin: public Base {
private:
	string Address;
	string phoneNumber;
public:
	// Constructor
	Admin();
	Admin(string Name, int ID,string Address, string PhoneNumber);

	//Setter
	void setAddress(string Address);
	void setPhoneNumber(string phoneNumber);

	//Getter
	string getAddress();
	string getPhoneNumber();
	void display();
};



class Empleyee: public Admin {
private:
	string Department;
	double Salary;

public:
	//Constractor
	Empleyee();
	Empleyee(string Name, int ID, string Address,string phoneNumber,string Department, double Salary);
	//Setter
	void setDepartment(string Department);
	void setSalary(double Salary);
	//Getter
	string getDepartment();
	double getSalary();
	void display();
};


class Product : public Base {
private:
	double Price;
    int Quantity;
public:
	//Constractor
	Product();
	Product(string Name,int ID,double Price, int Quantity);

	//Setter
	void setPrice(double Price);
	void setQuantity(int Quantity);

	//Getter
	double getPrice();
	 int getQuantity();
	 void display();
	
};

class Order:public Base
{
    double orderQuantity;
    double orderPrice;
public:
    //constractor
    Order();
    Order(string Name,int ID,double orderQuantity,double orderPrice);

    void setOrderQuantity(double orderQuantity);
    void setOrderPrice(double orderPrice);
    double getOrderQuantity();
    double getOrderPrice();
};