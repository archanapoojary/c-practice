#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks ";
    cin >> marks;
    if (marks >= 90){
        cout << " A+ grade";
    }
    else if (marks >= 80){
        cout << " B+ grade";
    }
    else if (marks >= 70){
        cout << " C+ grade";
    }
    else {
        cout << " fail";    
    }
    return 0;
    }
