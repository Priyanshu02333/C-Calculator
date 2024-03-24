# include <iostream>
using namespace std;
int main () {
    // Design a Calculator using C++ switch function 
    int num1 , num2, result ;
    char operation;

    
    cout << "Enter your first number -- > "  << endl;;
    cin >> num1;
    cout <<"Enter your Second number--> " << endl;
    cin >> num2;
    
    cout << "Selection the Assignment to perform (+  , - , *, /)"  << endl;
    cin >> operation;

    switch(operation) {
        case '+':
         result = num1 + num2;
            cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result;
            break;
        
         case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result;
        break;

         case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result;
        break;

         case '/':
        result = num1 / num2;
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result;
        break;
        default :
        cout << "Invalid Operator";
    }

return 0;

}