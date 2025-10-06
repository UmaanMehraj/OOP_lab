#include <iostream>

using namespace std;


int main(){
    double num1, num2, num3,result = 0;
    char op1, op2;

    cout << "Enter expression: ";
    cin >> num1 >> op1 >> num2 >> op2 >> num3;

    if(op1 == '+' && op2 == '+'){
        result =  num1 + num2 + num3;
    }
    else if(op1 == '+' && op2 == '/'){
        result = num1 + num2 / num3;
    }
    else if(op1 == '+' && op2 == '*'){
        result = num1 + num2*num3;
    }
    else if (op1 == '+' && op2 == '-'){
        result = num1 + num2 - num3;
    }  
    else if(op1 == '-' && op2 == '+'){
        result =  num1  - num2 + num3;
    }
    else if(op1 == '-' && op2 == '/'){
        result = num1 - num2 / num3;
    }
    else if(op1 == '-' && op2 == '*'){
        result = num1 - num2*num3;
    }
    else if (op1 == '-' && op2 == '-'){
        result = num1 - num2 - num3;
    }
        else if(op1 == '*' && op2 == '+'){
        result =  num1  * num2 + num3;
    }
    else if(op1 == '*' && op2 == '/'){
        result = num1 * num2 / num3;
    }
    else if(op1 == '*' && op2 == '*'){
        result = num1 * num2*num3;
    }
    else if (op1 == '*' && op2 == '-'){
        result = num1 * num2 - num3;
    }
         else if(op1 == '/' && op2 == '+'){
        result =  num1  / num2 + num3;
    }
    else if(op1 == '/' && op2 == '/'){
        result = num1 / num2 / num3;
    }
    else if(op1 == '/' && op2 == '*'){
        result = num1 / num2*num3;
    }
    else if (op1 == '/' && op2 == '-'){
        result = num1 / num2 - num3;
    }


    cout << "Result: "<< result << endl;
}