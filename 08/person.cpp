#include<iostream>
#include<stdio.h>
#include<unistd.h>
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
          cout<<name<<endl;
        }
        Person(const char *name,int age)
        {
          this->name=name;
          this->age=age;
          cout<<"name="<<name<<",age="<<age<<endl;
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

        ~Person()
           { cout<<"~person"<<name<<endl;
           
            }
};

   void func()
     {   Person fun("fun");
         Person funcd("funcd");
      
         }

   int main()
   {
     Person per("cuia",49);
     Person *per3=new Person("wugng",52);
      func();
     per3->Person::~Person();
     return 0;
   }

