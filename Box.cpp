#include "Box.h"
#include<iostream>

void box::setLength(double l)
{
  length=l;
}
void box:: setWidth(double w)
{
  width=w;
}
void box:: setHeight(double h)
{
  height=h;
}

int box:: getLength()
{
  return length;
}
int box:: getWidth()
{
  return width;
}
int box:: getHeight()
{
  return height;
}
int box::calcVolume()
{
  return length*width*height;
}
