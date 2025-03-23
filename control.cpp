#include "control.h"
int Exist=-1;
void AdminControl::addProduct(Product p) {
    if(p.getQuantity()>0){
        Products.push_back(p);
        cout<<"Add done \n";
    }
 else{
        cout<<"Enter the correct Quantity , Not added \n";
 }
}
int AdminControl::isExistingP(int pecode){
    int indexP=-1;
    for(int i=0;i<Products.size();i++) {
        if((pecode == Products[i].getID()) && (Products[i].getQuantity()>0)) {
            indexP=i;
            return indexP;
        }
    }
     return -1;
}
void AdminControl::removeProduct(int pecode) {
    Exist=isExistingP(pecode);
    if(Exist!=-1){
        Products.erase(Products.begin()+Exist);
        cout<<"Remove done \n";
    }
    else
        cout<<"Not found \n";
}
void AdminControl::updateProduct(Product p) {
    int pecode=p.getID();
    Exist=isExistingP(pecode);
    if(Exist!=-1){
        Products[Exist]=p;
    }
}
void AdminControl::unavailableProducts() {
    for (int i = 0; i < Products.size(); i++) {
        if (Products[i].getQuantity()==0){
            Products[i].display();
        }
    }
}
void AdminControl::showProduct(int Pecode) {
    Exist=isExistingP(Pecode);
    if(Exist!=-1){
        Products[Exist].display();
    }
    else
        cout<<"Not found \n";
}

void AdminControl::showAllProduct() {
    if(Products.size()==0){
        cout<<"No products \n";
        return;
    }
    else{
        for(int i=0;i<Products.size();i++){
            if(Products[i].getQuantity()!=0)
            Products[i].display();
        }
    }
}

Product AdminControl::Found(int pecode){
    Exist=isExistingP(pecode);
    if(Exist!=-1){
        return Products[Exist];
    }
}


void AdminControl::addEmpleyee(Empleyee e) {
    Empleyees.push_back(e);
}
int AdminControl::isExistingE(int id) {
    int indexE=-1;
    for(int i=0;i<Empleyees.size();i++){
        if(id == Empleyees[i].getID()){
            indexE=i;
            return indexE;
        }
    }
    return -1;
}
void AdminControl::removeEmpleyee(int id) {
    Exist=isExistingE(id);
    if(Exist!=-1){
        Empleyees.erase(Empleyees.begin()+Exist);
        cout<<"Remove done \n";
    }
    else
        cout<<"Not Found \n";
}
void AdminControl::updateEmpleyee(Empleyee e) {
    Exist=isExistingE(e.getID());
    if(Exist!=-1){
        Empleyees[Exist]=e;
        cout<<"Update done \n";
    }
}
void AdminControl::showEmpleyee(int id) {
    Exist=isExistingE(id);
    if(Exist!=-1)
    {
        Empleyees[Exist].display();
    }
    else
        cout<<"Not found \n";
}

void AdminControl::showAllEmpleyee() {
    if(Empleyees.size()==0){
        cout<<"No Employee \n";
        return;
    }
    else{
        for(int i=0;i<Empleyees.size();i++){
            Empleyees[i].display();
        }
    }
}
/* ------------------------------------------------- End Admin control -------------------------------------------  */
void EmployeeControl::makeOrder(int pecode, double q) {
    Exist = a.isExistingP(pecode);
    int Accept;
    if (Exist != -1) {
        p = a.Found(pecode);
        if (q > p.getQuantity() && p.getQuantity() != 0) {
            cout << "Quantity available is : " << p.getQuantity() << " \n\n";
            cout << "press 1 , if customer Accept                        " << "press 2 , Exit  \n";
            cin >> Accept;
            if (Accept == 1) {
                q = p.getQuantity();
            } else
                return;
        }

        if (p.getQuantity() > 0) {
            Order orp;
            orp.setName(p.getName());
            orp.setOrderQuantity(q);
            orp.setOrderPrice(p.getPrice());
            int remainingQuantity = p.getQuantity() - q;
            p.setQuantity(remainingQuantity);
            a.updateProduct(p);
            orders.push_back(orp);
            cout << "Order placed successfully! \n" << endl;
            return;
        }
    }
    else {
        cout << "The product is not available" << endl;
    }
}
void EmployeeControl::showOrder(){
    double totalPrice=0;
    cout<<"Name"<<"\t\t\t\t"<<"Quantity"<<"\t\t"<<"Price"<<"\n";
    cout<<endl;
    for (int i = 0; i < orders.size(); ++i) {
        cout<<orders[i].getName()<<"\t\t\t\t"
            <<orders[i].getOrderQuantity()<<"\t\t\t"
            << orders[i].getOrderPrice()<<"\n";
        totalPrice+=orders[i].getOrderPrice();
    }
    orders.clear();
    cout<<"======================================================="<<endl;
    cout<<"Total price = "<<totalPrice<<endl;
    cout<<"======================================================="<<endl;
 }