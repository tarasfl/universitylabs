#include <iostream>
#include <string>
using namespace std;


enum type{
    BAR, 
    BUTTON, 
    POPCORN, 
    GUM,
    CHOCOLATE
};


class Candy
{
    private:
    int k;
public:
string name;
    int mass_in_grams;
    int amount;
    float price;
    Candy(){
        name="n/a";
        mass_in_grams=0;
        amount=0;
        price=0.0;
    };
    ~Candy();
    Candy(string n, int m , int a, float p){
        name = n;
        mass_in_grams = m;
        amount = a;
        price = p;
    };
    void ate();
    float getPrice();
};



class Dinner
{
private:
    int day;
    float time;

public:
    Dinner();
    ~Dinner();
    Dinner(int d, float t){
        day =d;
        time = t;
    };
    int l=0;
    int cl[4] ={0, 0, 0, 0};
    Candy *candies[4];
    Candy *listOfCandies[4];
    void addCandy(Candy *candy);
    void findTheMostExpensiveCandies();
};