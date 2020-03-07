#include<iostream>
using namespace std;

int add(int a,int b)
{
     cout<<"int+int"<<endl;
      return a+b;
}

double add(int a,double b)
{
     cout<<"int+double"<<endl;
      return a+b;
}

double add(double a,double b)
{
     cout<<"double+double"<<endl;
      return a+b;
}


int main(int argc ,char **argv)
{
     add(1,2);
     add(1,1.0);
     add(1.0,2.0);
return 0;

}
