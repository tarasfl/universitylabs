#include <iostream>
#include <string>

class Park
{
private:
    float max_volume;
    double distance;
    char *name;
protected:
    bool is_open;
    int id;

public:
    float number_Of_use;
    char *adress;
    Park();
    ~Park();
};