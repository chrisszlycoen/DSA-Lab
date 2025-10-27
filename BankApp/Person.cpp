#include <bits/stdc++.h>

using namespace std;

struct Person
{ public:
    int id;
    string name;
    string identity;
    string dob;

    Person(){}
    Person(int id, string name, string identity, string dob){
        this->id = id;
        this->name = name;
        this->identity = identity;
        this->dob = dob;
    }
};
