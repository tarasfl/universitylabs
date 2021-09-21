#include <iostream>
#include <string>
using namespace std;

class Candy
{
public:
    string name;
    int mass_in_grams;
    int amount;
    float price;

private:
    Candy(){
        name="n/a";
        mass_in_grams=0;
        amount=0;
        price=0.0;
    };
    ~Candy();
    string ate();
};

enum type{
    BAR, 
    BUTTON, 
    POPCORN, 
    GUM,
    CHOCOLATE
};

class Dinner
{
public:
    int day;
    float time;

private:
    Dinner();
    ~Dinner();


};