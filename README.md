# GPA Calculator

#include <iostream>

using namespace std;

int main() {
  int classes = 0;
 char lettergrade;
  double grade;
  double totalgrade = 0;
  
  cout << "How many classes do you have?" << endl;
  cin >> classes;
  
  cout << "ok cool" << endl;

  for(int i = 1; i <= classes; i++)
  {
    cout << i << " = ";
    cin >> lettergrade;
    
    switch(lettergrade){
      case 'A':
        grade = 4.0;
        break;
      case 'a':
        grade = 4.0;
        break; 
      case 'b':
        grade = 3.0;
        break;       
      case 'B':
        grade = 3.0;
        break;
      case 'c':
        grade = 2.0;
        break;       
      case 'C':
        grade = 2.0;
        break;
      case 'd':
        grade = 1.0;
        break;    
      case 'D':
        grade = 1.0;
        break;
      case 'F':
        grade = 0.0;
        break;    
      case 'f':
        grade = 0.0;
        break;    
    default:
        grade = 0.0;
        break;
    
  }
  
    totalgrade = totalgrade + grade;
}
    cout << totalgrade / classes << " = GPA"<< endl;

  return 0;
  
}
