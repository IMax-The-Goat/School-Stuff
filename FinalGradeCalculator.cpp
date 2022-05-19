#include<iostream>

using namespace std;

bool isFound(string str, string arr[]){
    for (int s = 0; s < 3; s++){
        if (arr[s] == str){
            return true;
        }
    }
    return false;
}

void calculateNorm (){
    double curGrd;
    double wanGrd;
    double perGrd;
     
    cout << "Grade Right Now: ";
    cin >> curGrd;
    cout << "Grade You Want: ";
    cin >> wanGrd;
    cout << "Percent of Total Grade: ";
    cin >> perGrd;
    perGrd *= 0.01;
    
    double neededGrd = (1/perGrd) * (wanGrd - (curGrd * (1 - (perGrd)) ) );

    cout << endl << "You need a " << neededGrd << "% to get a " << wanGrd << "% in your class";

}

void calculateMul (){
    double curGrd;
    double wanGrd;
    double perGrd;

    int numOfParts;
    int partsTaken;
     
    cout << "Grade Right Now: ";
    cin >> curGrd;
    cout << "Grade You Want: ";
    cin >> wanGrd;
    cout << "Percent of Total Grade: ";
    cin >> perGrd;
    perGrd *= 0.01;

    cout << "Number of parts: ";
    cin >> numOfParts;
    cout << "Number of parts you've taken: ";
    cin >> partsTaken;
    double scoresOnFinished[partsTaken] = {};
    double worthOfParts[partsTaken] = {};
    for (int i = 0; i < partsTaken; i++){
        cout << endl << "Points Possible on Part " << i+1 << ": ";
        cin >> worthOfParts[i];
        cout << "Points on Part " << i+1 << ": ";
        cin >> scoresOnFinished[i];
    }

    double neededGrd = (1/perGrd) * (wanGrd - (curGrd * (1 - (perGrd)) ) );

    cout << endl << "You need a " << neededGrd << "% on your remaing parts to get a " << wanGrd << "% in your class";

}

void calculateFin (){
    double curGrd;
    double tstGrd;
    double perGrd;
     
    cout << "Grade Right Now: ";
    cin >> curGrd;
    cout << "Grade You Got on the Final: ";
    cin >> tstGrd;
    cout << "Percent of Total Grade: ";
    cin >> perGrd;
    perGrd *= 0.01;
    
    double finishedGrd = (curGrd * (1 - (perGrd)) + (tstGrd * perGrd));

    cout << endl << "You will have a " << finishedGrd << "% in your class";

}

int main() {
    cout << "So you're taking your final. What do you want to use?" << endl;

    string function;
    string avaibleOptions[3] = {"normal", "multiple", "finished"};

    for (string i : avaibleOptions){
        cout << "  --" << i << endl;
    }
    cin >> function;
    while ( !isFound(function, avaibleOptions) ){
        cout << function << " is not avaible, please choose from the list below:\n";
        for (string i : avaibleOptions){
            cout << "  --" << i << endl;
        }
        cin >> function;
    }

    cout << endl;
    for (int i = 0; i < 50; i++) { cout << "- "; }
    cout << endl << endl;

    if (function == "normal"){
        calculateNorm();
    } else if (function == "multiple") {
        calculateMul();
    } else if (function == "finished") {
        calculateFin();
    }

    return 0;
}


