#include<iostream>
#include<stdio.h>

using namespace std;

  
class Person
{
private:
      
       int age;
       const char *name;
       char *work;

public:
        
        Person() {cout<<"Person()"<<endl;}
        Person(const char *name)
        {
          this->name=name;
          cout<<"person(char *)"<<endl;
        }
        Person(const char *name,int age)
        {
          this->name=name;
          this->age=age;
        }
        void Setname(const char *name)
        {
         this->name=name;
        }
        void Setage(int age)
        { if(age<0||age>150)
            this->age=0;
          else
        this->age=age;
        }
       void printinfo()
         {     cout<<name<<","<<age<<","<<work<<endl;
             //printf("name=%s,age=%d,work=%s;\n",name,age,work);
         }

};
int main()
{
 Person per2;
 Person per4();
 Person per1("zs");
 Person *per3=new Person("wy",18);
 per3->printinfo();

  return 0;
}

