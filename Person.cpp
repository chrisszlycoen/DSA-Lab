#include <iostream>
using namespace std;

class Persona{
    public:
    string firstname;
    string lastname;
    int age;

    Persona(){};
    Persona(string fname, string lname, int a){
        firstname = fname;
        lastname = lname;
        age = a;
    }

    void printMe(){
        cout<<firstname<<" "<<lastname<<" "<<age<<endl;
    }
};

int main(){
    Persona person1("Ange","Mugisha",20);
    Persona person2{"Anick","Ganza",20};
    Persona person3 ={"John","Uwase",18};
    Persona *person4 = new Persona("Marry","Keza",15);
    Persona person5;
    person5.firstname = "Uhiriwe";
    person5.lastname = "Chrisostom";
    person5.age = 18;

    person1.printMe();
    person2.printMe();
    person3.printMe();
    person4->printMe();
    person5.printMe();
}