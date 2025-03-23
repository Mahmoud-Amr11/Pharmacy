#include "model.cpp"
#include <vector>
using namespace std;
class AdminControl{
private:
    static vector<Product>Products;
    vector<Empleyee>Empleyees;
public:
    void addProduct(Product p);
    void removeProduct(int Pecode);
     void updateProduct(Product p);
     int isExistingP(int pecode);
     void showProduct(int Pecode);
    void showAllProduct();
    void unavailableProducts();
     Product Found(int pecode);
    void addEmpleyee(Empleyee e);
    int isExistingE(int id);
    void removeEmpleyee(int id);
     void updateEmpleyee(Empleyee e);
    void showEmpleyee(int Pecode);
    void showAllEmpleyee();
};
vector<Product>AdminControl::Products;

class EmployeeControl{
    AdminControl a;
    vector<Order>orders;
    Product p;
public:
    void makeOrder(int pecode,double q);
    void showOrder();
};