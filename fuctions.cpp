#include "view.cpp"
void Program();
void showProcess();
void AdminViewProduct(){
    adminView a;
    while(true){
        cout<<"press 1 , Add  Product             "<<"press 2 , remove Product \n";
        cout<<"press 3 , update Product           "<<"press 4 , show Product   \n";
        cout<<"Press 5 , Show All product         "<<"Press 6 , show UnavailableProducts  \n";
        cout <<"                       Press 7 , To Exist  \n";
        int choose;
        cin>>choose;
        switch (choose) {
            case 1:
              a.AddProduct();
                break;
            case 2:
                a.RemoveProduct();
                break;
            case 3:
                a.UpdateProduct();
                break;
            case 4:
                a.ShowProduct();
                break;
            case 5:
                a.ShowAllProduct();
                break;
            case 6:
                a.UnavailableProducts();
                break;
            case 7:
                showProcess();
                break;
            default:
                cout<<"Enter correct number \n";
        }
        if(choose == 7) break;
    }
}

void AdminViewEmployee(){
    adminView a;
    while(true){
        cout<<"press 1 , Add  Employee             "<<"press 2 , remove Employee \n";
        cout<<"press 3 , update Employee           "<<"press 4 , show Employee   \n";
        cout<<"Press 5 , Show All Employee         "<<"Press 6 , Exit \n";
        int chooseE;
        cin>>chooseE;
        switch (chooseE) {
            case 1:
                a.AddEmployee();
                break;
            case 2:
                a.RemoveEmployee();
                break;
            case 3:
                a.UpdateEmployee();
                break;
            case 4:
                a.ShowEmployee();
                break;
            case 5:
                a.ShowAllEmployee();
                break;
            case 6:
                 showProcess();
                break;
            default:
                cout<<"Enter correct number \n";
        }
        if(chooseE == 6) break;
    }
}
void display(){

    cout <<"\n\n************************* Hello in our Pharmacy *************************\n\n";
    cout<<"                       press 1 , Admin \n";
    cout<<"                       press 2 , Employee\n";
    cout<<"                       Press 3 , Exit \n\n";

}
void showProcess(){
    cout << "\n\n             press 1 , manage Products \n";
    cout << "             Press 2 , manage Employees \n";
    cout<<"             press 3 , Exit \n\n";
    int choose2;
    cin >> choose2;
    if (choose2 == 1) {
        AdminViewProduct();
         return;
    }
    else if (choose2 == 2) {
        AdminViewEmployee();
          return;
    } else if(choose2 == 3) {
        Program();
        return;
    }
    else{
        cout<<"Wrong Value"<<endl;
    }
}
void Program() {
    int t = 3;
    Admin mohamed("mohamed", 11111, "Kom hamada", "01012755887");
    int choose;
    while (choose != 3) {

        display();
        cin >> choose;
        if (choose == 1) {
            while (t--) {
                cout << "Enter correct your ID :  ";
                int id;
                cin >> id;
                if (id == mohamed.getID()) {
                    showProcess();
                        return ;
                }
                else if (t > 0) {
                    cout << "Error , ";
                }
            }
        }
        else if (choose == 2) {
            cout << "===============================HELLO===================================" << endl;
            cout << "===============================Make order==============================\n" << endl;
            int p;
            EmployeeView t;
            do {
                t.Addorder();
                cout << "Enter 0 to exit or 1 to add another order : ";
                cin >> p;
            } while (p != 0);

            cout << "==============================================" << endl;
            cout << "Press 1 to show orders : " << endl;
            cin >> p;
            if (p == 1)
                t.showOrder();
        }
        if(choose == 3){
            return ;
        }
        if(choose >3){
            cout<<"Wrong Value "<<endl;
            return ;
        }
    }
}
