#include <iostream>
using namespace std;

struct Person{
    string firstname;
    string lastname;
    int age;

    Person(){};

    Person(string lname, string fname, int a){
        firstname = fname;
        lastname = lname;
        age = a;
    }
    void printMe(){
        cout<<firstname<<" "<<lastname<<" "<<age<<endl;
    }
};

int main(){
    Person person1("Ange","Mugisha",20);
    Person person2{"Anick","Ganza",20};
    Person person3 ={"John","Uwase",18};
    Person *person4 = new Person("Marry","Keza",15);
    Person person5;
    person5.firstname = "Uhiriwe";
    person5.lastname = "Chrisostom";
    person5.age = 18;

    person1.printMe();
    person2.printMe();
    person3.printMe();
    person4->printMe();
    person5.printMe();

    return 0;
}
