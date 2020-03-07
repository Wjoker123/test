#include<iostream>
#include<string.h>
#include<unistd.h>
#
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
       
        Person(const Person &s)
        {  
          this->name=new char[strlen(s.name)+1];
          this->name=s.name;
          this->age=s.age;

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
     

  
   int main()
   {
     Person per("wy",19);
     Person per2(per);
     per2.printinfo();
     return 0; 
   }

