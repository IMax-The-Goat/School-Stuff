# Distance Calculator

#include <iostream>

using namespace std;

int main(){
    char needdis;
    string measurements;
    string imp;
    string met;
    string second;
    double many;
    
    cout<<"Do you need distance converted? (y / n)\n";
    cin>>needdis;
    
    while (needdis != 'y' && needdis != 'n') 
    {
        cout << "*invalid input*\n";
        cout<<"Do you need distance converted?\n";
        cin >> needdis;
    }

    if (needdis == 'y') {
        cout<<"Ok cool, what's your main system of measurement?\n";
        cin>>measurements;
        
        while (measurements != "metric" && measurements != "imperial") 
        {
            cout << "*invalid input*\n";
            cout<<"metric or imperial?\n";
            cin>>measurements;
        }
        
        if(measurements == "metric"){
            cout<<"Are you converting centimeters, meters, or, kilometers?\n";
            cin>>met;
            
            while (met != "centimeters" && met != "meters" && met != "kilometers"){
            cout << "*invalid input*\n";
            cout<<"centimeters, meters, or kilometers?\n";
            cin>>met;
            }
            
            if (met == "centimeters"){
                cout<<"How many centimeters\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "inches" && second != "feet" && second != "yards" && second != "meters" && second != "kilometers" && second != "miles"){
                    cout << "*invalid input*\n";
                    cout<<"feet, yards, inches, meters, kilometers, or miles?\n";
                    cin>>second;
                }
                if (second == "inches"){
                    cout<<many<<" centimeters = "<< many/2.54 <<" inches";
                }
                else if(second == "feet") {
                    cout<<many<<" centimeters = "<<many/30.48<<" feet";
                }
                else if(second == "yards") {
                    cout<<many<<" centimeters = "<<many/91.44<<" yards";
                }
                else if(second == "meters") {
                    cout<<many<<" centimeters = "<<many/100<<" meters";
                }
                else if(second == "miles") {
                    cout<<many<<" centimeters = "<<many/160934.4 <<" miles";
                }
                else{
                    cout<<many<<" centimeters = "<<many/100000<<" kilometers";
                }
            }   //centimeters
            else if (met == "meters"){
                cout<<"How many meters?\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "centimeters" && second != "inches" && second != "yards" && second != "feet" && second != "kilometers" && second != "miles"){
                    cout << "*invalid input*\n";
                    cout<<"inches, yards, centimeters, feet, kilometers, or miles?\n";
                    cin>>second;
                }
                if (second == "centimeters"){
                    cout<<many<<" meters = "<< many*100 <<" centimeters";
                }
                else if(second == "inches") {
                    cout<<many<<" meters = "<<many/0.0254<<" inches";
                }
                else if(second == "yards") {
                    cout<<many<<" meters = "<<many/0.9144<<" yards";
                }
                else if(second == "feet") {
                    cout<<many<<" meters = "<<many/0.3048<<" feet";
                }
                else if(second == "miles") {
                    cout<<many<<" meters = "<<many/1609.344<<" miles";
                }
                else{
                    cout<<many<<" meters = "<<many/1000<<" kilometers";
                }
            }   //meters
            else {
                cout<<"How many kilometers?\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "centimeters" && second != "inches" && second != "feet" && second != "meters" && second != "yards" && second != "miles"){
                    cout << "*invalid input*\n";
                    cout<<"inches, yards, centimeters, meters, feet, or miles?\n";
                    cin>>second;
                }
                if (second == "centimeters"){
                    cout<<many<<" kilometers = "<< many*100000 <<" centimeters";
                }
                else if(second == "inches") {
                    cout<<many<<" kilometers = "<<many*39370.07874<<" inches";
                }
                else if(second == "feet") {
                    cout<<many<<" kilometers = "<<many*3280.839895<<" feet";
                }
                else if(second == "meters") {
                    cout<<many<<" kilometers = "<<many*1000<<" meters";
                }
                else if(second == "miles") {
                    cout<<many<<" kilometers = "<<many/1.609344<<" miles";
                }
                else{
                    cout<<many<<" kilometers = "<<many*1093.613298<<" yards";
                }
            }   //kilometers
            
        }   //metric
        else{
            cout<<"Are you converting inches, feet, yards or miles?\n";
            cin>>imp;
            
            while (imp != "inches" && imp != "feet" && imp != "yards" && imp != "miles"){
            cout << "*invalid input*\n";
            cout<<"inches, feet, yards, or miles?\n";
            cin>>imp;
            }
            
            if (imp == "inches"){
                cout<<"How many inches\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "centimeters" && second != "feet" && second != "yards" && second != "meters" && second != "kilometers" && second != "miles"){
                    cout << "*invalid input*\n";
                    cout<<"feet, yards, centimeters, meters, kilometers, or miles?\n";
                    cin>>second;
                }
                if (second == "centimeters"){
                    cout<<many<<" inches = "<< many*2.54 <<" centimeters";
                }
                else if(second == "feet") {
                    cout<<many<<" inches = "<<many/12<<" feet";
                }
                else if(second == "yards") {
                    cout<<many<<" inches = "<<many/36<<" yards";
                }
                else if(second == "meters") {
                    cout<<many<<" inches = "<<many*0.0254<<" meters";
                }
                else if(second == "miles") {
                    cout<<many<<" inches = "<<many/63360<<" miles";
                }
                else{
                    cout<<many<<" inches = "<<many*0.0000254<<" kilometers";
                }
            }   //inches
            else if (imp == "feet"){
                cout<<"How many feet?\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "centimeters" && second != "inches" && second != "yards" && second != "meters" && second != "kilometers" && second != "miles"){
                    cout << "*invalid input*\n";
                    cout<<"inches, yards, centimeters, meters, kilometers, or miles?\n";
                    cin>>second;
                }
                if (second == "centimeters"){
                    cout<<many<<" feet = "<< many*30.48 <<" centimeters";
                }
                else if(second == "inches") {
                    cout<<many<<" feet = "<<many*12<<" inches";
                }
                else if(second == "yards") {
                    cout<<many<<" feet = "<<many/3<<" yards";
                }
                else if(second == "meters") {
                    cout<<many<<" feet = "<<many*0.3048<<" meters";
                }
                else if(second == "miles") {
                    cout<<many<<" feet = "<<many/5280<<" miles";
                }
                else{
                    cout<<many<<" feet = "<<many*0.0003048<<" kilometers";
                }
            }   //feet
            else if (imp == "miles"){
                cout<<"How many miles?\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "centimeters" && second != "inches" && second != "yards" && second != "meters" && second != "kilometers" && second != "feet"){
                    cout << "*invalid input*\n";
                    cout<<"inches, yards, centimeters, meters, miles, or kilometers?\n";
                    cin>>second;
                }
                if (second == "centimeters"){
                    cout<<many<<" miles = "<< many*160934.4 <<" centimeters";
                }
                else if(second == "inches") {
                    cout<<many<<" miles = "<<many*63360<<" inches";
                }
                else if(second == "yards") {
                    cout<<many<<" miles = "<<many*1760<<" yards";
                }
                else if(second == "meters") {
                    cout<<many<<" miles = "<<many*1609.344<<" meters";
                }
                else if(second == "feet") {
                    cout<<many<<" miles = "<<many*5280<<" feet";
                }
                else{
                    cout<<many<<" miles = "<<many*1.609344<<" kilometers";
                }
            }   //miles
            else {
                cout<<"How many yards?\n";
                cin>>many;
                cout<<"What do you want to convert that to?\n";
                cin>>second;
                
                while (second != "centimeters" && second != "inches" && second != "feet" && second != "meters" && second != "kilometers" && second != "miles"){
                    cout << "*invalid input*\n";
                    cout<<"inches, yards, centimeters, meters, kilometers, or miles?\n";
                    cin>>second;
                }
                if (second == "centimeters"){
                    cout<<many<<" yards = "<< many*91.44 <<" centimeters";
                }
                else if(second == "inches") {
                    cout<<many<<" yards = "<<many*36<<" inches";
                }
                else if(second == "feet") {
                    cout<<many<<" yards = "<<many*3<<" feet";
                }
                else if(second == "meters") {
                    cout<<many<<" yards = "<<many*0.9144<<" meters";
                }
                else if(second == "miles") {
                    cout<<many<<" yards = "<<many/1760<<" miles";
                }
                else{
                    cout<<many<<" yards = "<<many*0.0009144<<" kilometers";
                }
            }   //yards
            
        }   //imperial
        
    }   //yes
    
    else {
        cout<<"Oh man, that's too bad. Maybe next time.";
        return 0;
    }   //no
    
    return 0;
}
