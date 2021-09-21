#include "lab5.h"
#include <string>
using namespace std;

string Candy::ate(){
    if(mass_in_grams*amount>2000){
        cout<<"You’re on a diet!"<<endl;
        
    }else{
        cout<<"What delicious candies!"<<endl;
    };
};

