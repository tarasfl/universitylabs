#include <iostream>
#include <string>
using namespace std;


class Counter
{
private:
    const float max_volume = 2.5;
    float distance;
    string counter_name;
protected:
    bool is_working;
    int id;

public:
    float number_Of_use;
    string adress;
    Counter(){
        distance = 0.0;
        counter_name = "N/A";
        is_working = false;
        id = 0;
    };   
    ~Counter();
    Counter(double dist, string name, bool is_w, int ident){
        distance = dist;
        counter_name = name;
        is_working = is_w;
        id = ident;
};

    
    float getMax_volume();
    float getDistance();
    string getCounter_name();
    void resulter();
};