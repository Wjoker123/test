 #include<iostream>
#include<string.h>
#include<unistd.h>

using namespace std;
class Point 
{
   private:
          int x;
          int y;
  public:
Point(){}

Point(int x ,int y)  
    { this->x=x;
      this->y=y;
     };

int getx(){return x;}
int gety(){return y;}
void setx (int x)
{ this->x=x;}
void sety (int y)
{ this->y=y;}

void printinfo()
    { 
     cout<<"("<<x<<","<<y<<")"<<endl;
     }

friend Point add(Point &p1,Point &p2);

};

Point add(Point &p1,Point &p2)
    {  
       Point n;
       n.x =p1.x+p2.x;
       n.y =p1.y+p2.y;
       return n;
    }

int main(int argc, char **argv)
    { 
      Point p1(1,5);
      Point p2(2,3);
      Point m = add(p1,p2);
      m.printinfo();
      return 0;
      }



