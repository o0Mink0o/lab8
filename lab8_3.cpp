#include <iostream>
#include<cmath>
using namespace std;


int main(){
  string chars;
  int age,height,bounty;
  cout << "Enter your age: ";
  cin >> age;
  if(age <= 25){
     cout << "Enter your height: ";
     cin >> height;
     if(height < 100){
        chars = "Chopper";
      }else if(height < 180){
        chars = "Usopp";
      }else{

        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 1100*pow(10,6)){
        chars = "Zoro";
      }else {chars = "Sanji";}
    }

  }else if(age <= 60){
     cout << "Enter your bounty: ";
     cin >> bounty;
    if(bounty > 500*pow(10,6)){
        chars = "Jinbe";
    }else{  
        chars = "Franky";
    }
  }else {chars = "Brook";}
  cout << "Your character = " << chars;
}
//0000