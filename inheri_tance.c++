#include <iostream>
#include <string>
using namespace std;

class car
{
public:
    int manufacture_year=0;
    std::string colour, co_name;
public:
    car(){ cout << "love\n";}
    car(int year, string colour, string co_name)
    {
        manufacture_year = year;
        this->colour = colour;
        this->co_name = co_name;
        std::cout << "this is running\n";
    }
    void get_data()
    {
        cout << manufacture_year << endl;
        cout << colour << endl;
        cout << co_name << endl;

    }
};
class merc : public car
{
public:
   /* int manufacture_year;
    string colour, co_name;*/
    merc(int year, string colour, string co_name):car(year,colour, co_name)
    {
      /*  this->manufacture_year = year;
        this->colour = colour;
        this->co_name = co_name;*/
    }
};

int main()
{
    merc obj(1994, "saffron", "benz");
    cout << obj.colour<<endl;
    obj.get_data();
    car obj2;
    cout << obj2.manufacture_year;
    return 0;
}
