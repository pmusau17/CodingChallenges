// union struct 

#include <iostream>
#include <string>
using namespace std;

struct widget 
{
    string brand; // string describing the brand
    int type; // integer denoting the type 
    union id { // Some widgets have string fields and others have an integer id, neccesitating a union
        long id_num;
        char id_char[20];
    } id_val;
};

struct widget2 
{
    string brand; // string describing the brand
    int type; // integer denoting the type
    union {  // anonymous union
        long id_num;
        char id_char[20];
    }; 

};


int main(){
    widget prize;
    prize.brand = "Gucci";
    prize.type=1;
    prize.id_val.id_num=100000;
    cout << prize.brand << endl;
    cout << prize.type << endl;
    cout << prize.id_val.id_num << endl;

    // Initialize anonymous widget

    widget2 prize2;
    prize2.brand= "Louis";
    prize2.type=2;
    prize2.id_num=3;

    cout << prize2.brand << endl;
    cout << prize2.type << endl;
    cout << prize2.id_num << endl;
    return 0;
}

