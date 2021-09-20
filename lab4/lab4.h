#include <iostream>
#include <string>

class Park
{
private:
    const float max_volume = 2.5;
    double distance;
    char *counter_name;
protected:
    bool is_working;
    int id;

public:
    float number_Of_use;
    char *adress;
    Park(double dist, char *name, bool is_w, int id){
        distance = dist;
        counter_name = name;
        is_working = is_w;
        id = id;
    };
    ~Park();
    float getMax_volume();
    double getDistance();
    char getCounter_name();
};