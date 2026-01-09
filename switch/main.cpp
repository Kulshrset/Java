#include <iostream>
using namespace std;
int main(){
  char grade;
    cout<<"enter your grade"<<endl;
    cin>> grade;
 switch(grade){
    case 'A':cout<<"you markes between 90to 100"<<endl;
    break;
    case 'B':cout<<"you markes between 70 to 80"<<endl;
    break;
    case 'C':cout<<"you markes between 40 to 60"<<endl;
    break;
    case 'D':cout<<"you markes between 30 to 20"<<endl;
    break;
     default:cout<<"you are fail ";

 }
    return 0;
}