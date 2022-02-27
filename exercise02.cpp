/*#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
     cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);
             
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}*/

// Implement the Volume() function here
#include<iostream>
#include<iomanip>
using namespace std;
int volume(int height,int width,int length);
struct box
{
  int height;
  int width;
  int length;
};
int main()
{
  struct box box1,box2;
  int totalVolume;
  cout<<"Enter Box 1 Height:";
  cin>>box1.height;
  cout<<"Enter Box 1 Width:";
  cin>>box1.width;
  cout<<"Enter Box 1 Length:";
  cin>>box1.length;
  
  cout<<"Enter Box 2 Height:";
  cin>>box2.height;
  cout<<"Enter Box 2 Width:";
  cin>>box2.width;
  cout<<"Enter Box 2 Length:";
  cin>>box2.length;

  totalVolume=volume(box1.height,box1.width,box1.length)+
        volume(box2.height,box2.width,box2.length);

  cout<<"Volume of box is "<<totalVolume<<endl;
  return 0;
}
