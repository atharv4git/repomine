#include <iostream>

using namespace std;
 
class Student {
    public:
        string Name;
        string Class;
        int Gpa;

        Student(){
            Name = "no title";
            Class = "no author";
            Gpa = 0;
        }

        Student(string aName , string aClass , int aGpa){
            Name = aName;
            Class = aClass;
            Gpa = aGpa;
        }

        bool pass(){
            if(Gpa>=5){
                return true;
            }
            return false;
        }
};

int main(){

    Student student1("Atharv","sem2",8.170);
    Student student2("john" , "sem3" , 4);
    Student student3;


    cout << student1.pass() << endl;
   

    return 0;
}