#include <iostream>
using namespace std;

class Personb{
    string firstname;
    string lastname;
    int age;
    public:

    Personb(){};
    Personb(string fname, string lname, int a ){
        firstname = fname;
        lastname = lname;
        age = a; 
    }
    //getters and setters
    void setFirstName(string fname){
        firstname = fname;
    }
    string getFirstName(){
        return firstname;
    }
    void setLastName(string lname){
        lastname = lname;
    }
    string getLastName(){
        return lastname;
    }
    void setAge(int a){
        age = a;
    }
    int getAge(){
        return age;
    }

    void printMe(){
        cout<<firstname<<" "<<lastname<<" "<<age<<endl;
    }
}person1,person2;

int main(){
    person1 = {"Ange","Mugisha",20};
    person2 = {"Anick","Uwase",15};

    Personb person3;
    person3.setFirstName("Uhiriwe");
    person3.setLastName("Chrisostom");
    person3.setAge(15);

    person1.printMe();
    person2.printMe();
    person3.printMe();

    return 0;
}