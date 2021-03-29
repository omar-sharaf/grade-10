#include <iostream>
using namespace std;
int main() {
  int roll1,roll2,sum,points;
    string name;
    cout<<"we'll be playing a dice game";
    cout<<"\n-------\n|     |\n|  o  |\n|     |\n-------\n-------\n| o o |\n| o o |\n| o o |\n-------\n";
    
  cout<<"what's your name? ";
  cin>>name;
  while ((points <=  900)or(points >=-1)){
  cout << "input first roll "<<name<<" ";
  cin>>roll1;
  cout << "input second roll "<<name<<" ";
  cin>>roll2;
  sum=roll1+roll2;
  cout << sum<<"\n";


if ((sum == 11) or (sum == 7)){
points=points+100;
cout<<points<<"\n";
}
else if ((roll1>6)or(roll1<1)or(roll2>6)or(roll2<1)){
  cout<<"invalid\n";
  points=points-100;
  cout<<points<<"\n";
}
else if ((roll1=5)and roll1==roll2){
points=points+200;
cout<<points<<"\n";
}
else if ((roll1>6)or(roll1<1)or(roll2>6)or((roll2=5)and(roll1=roll2))){
  cout<<"invalid\n";
  points=points-200;
  cout<<points<<"\n";
}
  }
if (points == 1000){
  cout<<"you won "<<points<<"\n";
}
}