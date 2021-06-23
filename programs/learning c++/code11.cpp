#include <iostream>
//INHERITANCE
using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes Chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes Salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes a Pav Bhaji" << endl;
        }
};

class ItalianChef : public Chef{
    
    public:
        void makePasta(){
        cout << "The chef makes Pasta" << endl;
    }
    void makeSpecialDish(){
            cout << "The chef makes a Dahi Vada" << endl;
        }
};

int main(){

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;

}