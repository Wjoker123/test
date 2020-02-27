#include<stdio.h>


  
class Person
{
private:
      
       int age;
      const char *name;
       char *work;

public:
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
         {
             printf("name=%s,age=%d,work=%s;\n",name,age,work);
         }

};
int main()
{
  Person per;
  per.Setname("wy");
 per.Setage(18);
 per.printinfo();
return 0;
}