#include <iostream>
using namespace std;
int main(){
	int a,b,result;
    char c;
    cout << "enter a number";
    cin >> a;
    cout << "enter a another number";
    cin >> b;
    cout << "enter a character";
    cin >> c;
    switch (c){
    	case '+' : 
        		result = a +b;
                cout << "addition of 2 numbers " << a << " and " << b << " is " << result;
                break;
        case '-':
        		result = a - b;
                cout << "subtraction of 2 numbers " << a << " and " << b << " is " << result;
                break;
                }
        return 0;
        
        
}
     