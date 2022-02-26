/*#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No"<< "Name"<< "Marks";
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 
          <<  names[r]
          << marks[r] << endl;
 }
}*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float marks[]={78.4,90.6,45.9,72.2,54.4};
  char names[][20]=     {"Ajith","Wimal","Kanthi","Suranji","Kushmitha"};
  cout<<0<<"\t"<<"\t"<<"\t"<<1<<"\t"<<"\t"<<"\t"<<2<<"\t"<<"\t"<<"\t"<<3<<endl;
  cout<<0<<1<<2<<3<<4<<5<<6<<7<<8<<9<<0<<1<<2<<3<<4<<5<<6<<7<<8<<9<<0<<1<<2<<3<<4<<5<<6<<7<<8<<9<<0<<0<<1<<2<<3<<4<<5<<6<<7<<8<<9<<0<<endl;
  cout<<setw(5)<<"No"<<setw(15)<<"Name"<<setw(10)<<"Marks"<<endl;
  for(int i=0;i<5;i++){
      cout<<setw(5)<<i+1<<setw(15)<<names[i]<<setw(10)<<marks[i]<<setiosflags(ios::fixed)<<setprecision(2)<<endl;
    }
return 0;
  
}
