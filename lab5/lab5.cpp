#include "lab5.h"
#include <string>
using namespace std;

void Candy::ate(){
    if(mass_in_grams*amount>2000){
        cout<<"You’re on a diet!"<<endl;
    }else{
        cout<<"What delicious candies!"<<endl;
    };
};

Candy::~Candy()
= default;

Dinner::~Dinner()
= default;

void Dinner::addCandy(Candy *candy){
    candies[l]=candy;
    listOfCandies[l]=candy;
    l++;
}

void Dinner::findTheMostExpensiveCandies(){
    if(l<2){
        cout<<"you must add at least 3 candies"<<endl;
    }else{
        int k =0, c=0, i=0;
        float b=candies[k]->price;
        string name = candies[k]->name;
        while(i<=2){   
            if(b>=candies[k+1]->price) {
            k++;
            if(k+1>=l){
                cout<< name<<"   "<< b << endl;
                i++;
                l--;
                for(int j=c; j<l; j++){
                    candies[j]=candies[j+1];             
                }    
                k=0;
                c=0;    
                b=candies[c]->price;
                name = candies[k]->name;              
                };
        }else if(b<candies[k+1]->price){
            k++;
            c=k;
            b=candies[c]->price;
            name = candies[k]->name;
        };
        }
    }
};