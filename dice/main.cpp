#include <iostream>
using namespace std;
int main() {
  int roll1,roll2,sum,points;
    string name;
    char quit;
    cout<<"we'll be playing a dice game";
    cout<<"\n-------\n|     |\n|  o  |\n|     |\n-------\n-------\n| o o |\n| o o |\n| o o |\n-------\n";
    points=500;
  cout<<"what's your name? ";
  cin>>name;
  while ((points <=  900)or(points >= 0)){
  cout << "input first roll "<<name<<" ";
  cin>>roll1;
  cout << "input second roll "<<name<<" ";
  cin>>roll2;
  cout<<"do you want to quit(one letter y or n) ";
  cin>>quit;
  sum=roll1+roll2;
  if (quit == 'y'){
  cout<<"you've quit\n";
  cout<<"bye\n";
  break;
}
else if(quit == 'n'){
cout<<"you have not quit\n"; 
}
if ((sum == 11) or (sum == 7)){
cout<<"winner\n";
points=points+100;
cout<<points<<"\n";
}
else if ((roll1=5)and roll1==roll2){
cout<<"winner\n";
points=points+200;
cout<<points<<"\n";
}
else {
  cout<<"loser\n";
  points=points-25;
  cout<<points<<"\n";
}
if (points >= 999  ){
  cout<<"you won with "<<points<<" points"<<"\n";
  cout<<"░░░░░░░░░░░░░░░░░░░░░░█████████\n░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███\n░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███\n░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███\n░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██\n░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██\n░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██\n██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██\n█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██\n██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n░░████████████░░░█████████████████\n";
  cout<<"bye\n";
  break;
  }
  else if (points <= 0){
  cout<<"you lost with "<<points<<" points"<<"\n";
  cout<<"¯|_(ツ)_/¯\n";
  cout<<"bye\n";
  break;
}
  }
}