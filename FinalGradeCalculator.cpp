#include<iostream>

using namespace std;

double calculate (double cur, double wan, double per){
    double toReturn = (1/per) * (wan - (cur * (1 - (per)) ) );

    return toReturn;
}

int main() {
    double curGrd;
    double wanGrd;
    double perGrd;
    
    
    cout << "Grade Right Now: ";
    cin >> curGrd;
    cout << "Grade You Want: ";
    cin >> wanGrd;
    cout << "Percent of Total Grade: ";
    cin >> perGrd;

    cout << "You need a " << calculate(curGrd, wanGrd, perGrd*0.01) << "% to get a " << wanGrd << "% in your class";
    
    return 0;
}
