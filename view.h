#include "control.cpp"
class adminView {
private:
    AdminControl admin;
    Product p;
    Empleyee E;
public:
    void AddProduct();
    void RemoveProduct();
    void UpdateProduct();
    void ShowProduct();
    void ShowAllProduct();
    void UnavailableProducts();
    void AddEmployee();
    void RemoveEmployee();
    void UpdateEmployee();
    void ShowEmployee();
    void ShowAllEmployee();
};

class EmployeeView{
private:
    EmployeeControl employee;
public:
    void Addorder();
    void showOrder();
};

