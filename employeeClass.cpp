#include <iostream>
using namespace std;

class Employee{
    public:
    Employee(char* n,char* add, char* ct):name(n),address(add),city(ct){}
    Employee()=default;

    void display(){
        cout << name << "," << address << "," << city << endl ;

    }
    void changeName(char* nm){
        name = nm;

    }

    private:
    char* name;
    char* address;
    char* city;
};

int main(){
    Employee e1("joker","school","heaven");
    e1.display();
    e1.changeName("rat");
    e1.display();
    return 0;


}

