#include<iostream>
#include "Box.h"
using namespace std;

int main()
{
  Box box1;
  int length,width,height;
  cout<<"Enter length of box :";
  cin>>length;
  cout<<"Enter width of box :";
  cin>>width;
  cout<<"Enter height of box :";
  cin>>height;

  box1.setLength(length);
  box1.setWidth(width);
  box1.setHeight(height);
}
