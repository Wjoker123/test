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
     
    class Student
     {
      private: 
               Person mother;
               Person father;
               int id;
       public:
                Student()  {cout<<"student()"<<endl;}

                Student(int id, const char *mother,const char *father,int father_age=40,int mother_age=38):mother(mother,mother_age),father(father,father_age)
                 {     
                  cout<<"Student(int id, const char *mother,const char *father,int father_age=40,int mother_age=38)"<<endl;
                  }

                 ~ Student()  {cout<<"~ student()"<<endl;}
                   
      };
  
   int main()
   {
     Person per("wy",19);
     Student s1(88,"telisa","ben");
     return 0; 
   }

