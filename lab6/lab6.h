#include <iostream>
#include <string>

class Cube
{
private:
    int a;
public:
    Cube(int iA);
    ~Cube()=default;
    int volume();
    int square();
    void operator == (Cube const obj){
        if(a==obj.a){
            std::cout<<"cubes are equel"<<std::endl;
        }else{
            std::cout<<"cubes are not equel"<<std::endl;
        };
    };
    void operator > (Cube const obj){
        if(a>obj.a){
            std::cout<<"first cube are bigger"<<std::endl;
        }else{
            std::cout<<"first cube are not bigger"<<std::endl;
        };
    };
    void operator < (Cube const obj){
        if(a<obj.a){
            std::cout<<"first cube are smaller"<<std::endl;
        }else{
            std::cout<<"first cube are not smaller"<<std::endl;
        };
    };
    friend std::ostream &operator << ( std::ostream &output, Cube obj ) { 
        output << "a = " << obj.a;
        return output;            
      }
      friend std::istream &operator >>( std::istream  &input,  Cube obj ) { 
         input >> obj.a;
         return input;            
      }
};

