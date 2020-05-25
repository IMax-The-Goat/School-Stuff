# Calculator

#include <iostream>

using namespace std;

int main()
{
    double number1;
    double number2;
    char mathsign;
    double solution;
    
    cout<< "Welcome to the calculator!\n";
    cout<< "give me a number!\n";
    cin>>number1;
    cout<<"what's the second number?\n";
    cin>>number2;
    cout<<"what do you want to do with those numbers\n";
    cin>>mathsign;
        while (mathsign != '/' && mathsign != '*' && 
        mathsign != '-' && mathsign != '+'){
        cout<<"*syntax error*\ndo you want to add, subtract, multiply, or divide(+, -, *,or /)?\n";
        cin>>mathsign;
        }    
    if (mathsign == '/'){
        solution = number1/number2;
        cout<<number1<<" "<<mathsign<<" "<<number2<<" = "<<solution;
    }
    else if (mathsign == '*'){
        solution = number1*number2;
        cout<<number1<<" "<<mathsign<<" "<<number2<<" = "<<solution;
    }
    else if (mathsign == '-'){
        solution = number1-number2;
        cout<<number1<<" "<<mathsign<<" "<<number2<<" = "<<solution;
    }
    else {
        solution = number1+number2;
        cout<<number1<<" "<<mathsign<<" "<<number2<<" = "<<solution;
    }    
    return 0;
}
