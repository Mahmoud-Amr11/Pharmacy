
#include "view.h"
void adminView::AddProduct() {
    int id,Quantity;
    double price;
    string name;
    cout<<"Enter ID       : ";
    cin>>id;
    p.setID(id);
    cout<<"Enter name     : ";
    cin>>name;
    p.setName(name);
    cout<<"Enter price    : ";
    cin>>price;
    p.setPrice(price);
    cout<<"Enter quantity : ";
    cin>>Quantity;
    p.setQuantity(Quantity);
    admin.addProduct(p);
    cout<<"\n ---------------------    ------------------------ ------------------- ------------  \n\n";
}
void adminView::UnavailableProducts(){
    admin.unavailableProducts();
}
void adminView::RemoveProduct() {
    cout<<"Enter the pecode  : ";
    int pecode;
    cin>>pecode;
    admin.removeProduct(pecode);
    cout<<"\n ---------------------    ------------------------ ------------------- ------------  \n\n";
}

void adminView::UpdateProduct() {
    cout<<"Enter the pecode  : ";
    int pecode,Quantity;
    double price;
    string name;
    cin>>pecode;
    p.setID(pecode);
    if(admin.isExistingP(pecode)!=-1){
        cout<<"         Product is Found \n";
        cout<<"Enter new name     : ";
        cin>>name;
        p.setName(name);
        cout<<"Enter new price    : ";
        cin>>price;
        p.setPrice(price);
        cout<<"Enter new quantity : ";
        cin>>Quantity;
        p.setQuantity(Quantity);
        admin.updateProduct(p);
    }
    else{
        cout<<"Not found \n";
    }
    cout<<"\n ---------------------    ------------------------ ------------------- ------------  \n\n";
}

void adminView::ShowProduct() {
    cout<<"Enter pecode \n";
    int i;
    cin>>i;
    admin.showProduct(i);
    cout<<"\n ------------------    -------------------- ------------------- ---------------  \n\n";
}

void adminView::ShowAllProduct() {
    admin.showAllProduct();
    cout<<"\n ---------------------    ------------------------ ------------------- ------------  \n\n";
}

 // string Name, int ID, string Address, string phoneNumber, string Department, double Salary

void adminView::AddEmployee() {
     string name,phoneNumber,Address,Department; int ID;double Salary;
     cout<<"Enter ID          : "; cin>>ID;
     E.setID(ID);
     cout<<"Enter name        : "; cin>>name;
     E.setName(name);
     cout<<"Enter phoneNumber : ";cin>>phoneNumber;
     E.setPhoneNumber(phoneNumber);
    cout<<"Enter address     : ";
    cin>>Address;
    E.setAddress(Address);
     cout<<"Enter Department  : "; cin>>Department;
     E.setDepartment(Department);
     cout<<"Enter salary      : ";
     cin>>Salary;
     E.setSalary(Salary);
     admin.addEmpleyee(E);
    cout<<"\n ------------------    -------------------- ------------------- ---------------  \n\n";
}

void adminView::RemoveEmployee() {
    cout<<"Enter the pecode  : ";
    int id;
    cin>>id;
    admin.removeEmpleyee(id);
    cout<<"\n ---------------------    ------------------------ ------------------- ------------  \n\n";
}


void adminView::UpdateEmployee() {
    cout<<"Enter the ID  : ";
    string name,phoneNumber,Address,Department; int ID;double Salary;
    cin>>ID;
    p.setID(ID);
    if(admin.isExistingE(ID)!=-1){
        cout<<"         Emoloyee is Found \n";
        cout<<"Enter new name        : "; cin>>name;
        E.setName(name);
        cout<<"Enter new phoneNumber : ";cin>>phoneNumber;
        E.setPhoneNumber(phoneNumber);
        cout<<"Enter new address     : ";
        cin>>Address;
        E.setAddress(Address);
        cout<<"Enter new Department  : "; cin>>Department;
        E.setDepartment(Department);
        cout<<"Enter  new salary     : ";
        cin>>Salary;
        E.setSalary(Salary);
        admin.updateEmpleyee(E);
    }
    else{
        cout<<"Not found \n";
    }
    cout<<"\n ---------------------    ------------------------ ------------------- ------------  \n\n";
}

void adminView::ShowEmployee(){
    cout<<"Enter the ID  : ";
    int ID;
    cin>>ID;
   admin.showEmpleyee(ID);
    cout<<"\n ------------------    -------------------- ------------------- ---------------  \n\n";
}

void adminView::ShowAllEmployee(){
    admin.showAllEmpleyee();
    cout<<"\n ------------------    -------------------- ------------------- ---------------  \n\n";
}




/*  ======================================================================================                 */

void EmployeeView::Addorder()
{
    int pecode; double Quantity;
    cout<<"Enter the product pecode   : ";
    cin>>pecode;
    cout<<"Enter the product Quantity : ";
    cin>>Quantity;
    employee.makeOrder(pecode,Quantity);
}
void EmployeeView::showOrder() {
    employee.showOrder();
}
