#include <lab4.h>
#include <string>
using namespace std;


int main(){
    return 0;
};


Counter::Counter()
{
    distance = 0.0;
    counter_name = "N/A";
    is_working = false;
    id = 0;
    number_Of_use = 0;
    adress = 'n/a';
};

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
    cout <<"max_volume"<< max_volume;
    cout <<"distance"<< distance;
    cout <<"counter_name"<< counter_name;
    cout <<"status of working"<< is_working;
    cout <<"id"<< id;
};