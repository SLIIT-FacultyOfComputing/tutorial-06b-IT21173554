#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void student:: assignDetails(int pstudentId, const char pname[])
{
  studentId=pstudentId;
  strcpy(name,pname);
}
void student::display()
{
  cout<<"----------------"<<endl;
  cout<<"Student ID"<< studentId<<endl;
  cout<<"Student Name"<< name<<endl;
  cout<<"----------------"<<endl;
  
}
