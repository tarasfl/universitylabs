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
    int massInGrams;
    int amount;
    type candyType;
public:
    string name;
    float price;
    Candy();
    ~Candy();
    Candy(string n, int m , int a, float p, type cT);
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
    Dinner(int d, float t);
    int l=0;
    Candy *candies[4];
    Candy *listOfCandies[4];
    void addCandy(Candy *candy);
    void findTheMostExpensiveCandies();
};