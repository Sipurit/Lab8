#include<iostream>
#include<string>
using namespace std;



int main(){
    string name;
    int age;
    double height;
    double bounty;
    char c;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> height;
        c = (height<100 ? 'C' : height<180 ? 'U' : 'N');
        if(c=='C'){
            cout << "Your character = Chopper";
        }else if(c=='U'){
            cout << "Your character = Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty<=1100000000)
                cout << "Your character = Sanji";
            else   
                cout << "Your character = Zoro";
        }
    }else if(age<=60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty<=500000000)
            cout << "Your character = Franky";
        else
            cout << "Your character = Jinbe";
    }else
        cout << "Your character = Brook";
    return 0;
}
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
