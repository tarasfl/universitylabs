#include "lab4.h"
#include <string>
using namespace std;


Counter::~Counter()
= default;;


float Counter::getMax_volume(){
    return max_volume;
};

float Counter::getDistance(){
    return distance;
};

string Counter::getCounter_name(){
    return counter_name;
};

void Counter::resulter(){
    cout <<"max_volume "<< max_volume<<endl;
    cout <<"distance "<< distance<<endl;
    cout <<"counter_name "<< counter_name<<endl;
    cout <<"status of working "<< is_working<<endl;
    cout <<"id "<< id<<endl;
    cout <<"number of uses "<< number_Of_use<<endl;
    cout <<"adress "<< adress<<endl;
};