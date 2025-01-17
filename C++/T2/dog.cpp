#include <iostream>
#include<string>
using namespace std;

class Animal
{
    protected:
        string name;
        int age;

    public:
        Animal(){};
        Animal(string nm, int a): name(nm), age(a){};

    void eat()
    {
        cout << name << "its eating" << endl;
    }
    void sleep()
    {
        cout << name << "is sleeping" << endl;
    }
};

class Dog: public Animal
{
    public:
     Dog(string n, int a) : Animal(n,a){};
     void bark()
     {
        cout << "bark" << endl;
    }
};

class Cat : public Animal
{
    public:
    Cat(string n, int a) : Animal(n,a){};

    void meow()
    {
        cout << "meow" << endl;
    }
};

class Cow : public Animal
{
    public:
    Cow(string n, int a) : Animal(n,a){};
    void moo(){
        cout << "moo" << endl;
    }
};


class Monke : public Animal
{
    public:
        Monke(string n, int a) : Animal(n,a){};
    void ebal(){
        cout << "Ja eBaL TvOjU mAt" << endl;
    }

};




int main(){

    string answer;
    Dog spots("Dog", 5);
    Cat kurwa("Kurwa", 10);
    Cow Roland("Roland", 52);
    Monke Artemijs("Artemijs", 42);



    cout << "Check Spots" << endl;
    cin >> answer;

    if("Yes" == answer)
    {
        int rn =  random() % 100;
        cout << rn << endl;

        if(rn>=60)
        {
            spots.bark();
            cout << "Feed Spots:" << endl;
            cin >> answer;
            if("Yes" == answer)
            {
                spots.eat();
            }
        }
    }


    cout << "Feed Spots:" << endl;
    cin >> answer;


    if("Yes" == answer)
    {
        spots.eat();
        cout << endl;
    }
    else if("No" == answer)
    {
        spots.bark();
    }





    /*cout << "Spots:" << endl;
    spots.sleep();
    cout << endl;

    cout << "Kurwa:" << endl;
    kurwa.meow();
    kurwa.eat();
    kurwa.sleep();
    cout << endl;

    cout << "Artemijs:" << endl;
    Artemijs.ebal();
    Artemijs.eat();
    Artemijs.sleep();
    cout << endl;
    */

}