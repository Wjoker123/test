#include<iostream>
using namespace std;

int add(int a)
{
    a=a+1;
      return a;
}

int add(int *a)
{
     *a=*a+1;
      return *a;
}

int add_one(int &b)
{
    b=b+1;
      return b;
}


int main(int argc ,char **argv)
{   
     int a = 6;
      int &c=a;

     cout<<add(a)<<endl;
     cout<<"a="<<a<<endl;
     
     cout<<add(&a)<<endl;
     cout<<"a="<<a<<endl;
     
     cout<<add_one(a)<<endl;
     cout<<"a="<<a<<endl;

     c++;
     cout<<a<<endl;
     cout<<c<<endl;
     return 0;

}
