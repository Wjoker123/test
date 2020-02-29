#include<stdio.h>
#include"person.h"

namespace A{
 
   void Person::Setname(const char *name)
        {
         this->name=name;
        }
   void  Person::Setage(int age)
        { if(age<0||age>150)
            this->age=0;
          else
        this->age=age;
        }
   void  Person::printinfo()
         {
             printf("name=%s,age=%d,work=%s;\n",name,age,work);
         }
}

