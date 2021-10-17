#include "lab8.h"
#include <string>
#include <stack>

void Complexs::add(int real, int imag){
    stack.push(real);
    stack.push(imag);
}

void Complexs::sum(){
    if(stack.size()>=4){
        int buf[4];
        for(int i=0; i<4; i++){
             buf[i]=stack.top();
             stack.pop();
        }
       std::cout<<"sum real:"<<buf[0]+buf[2]<<"sum imagine"<<buf[1]+buf[3]<<std::endl;
       for(int i=3; i>0; i--){
           stack.push(buf[i]);
       }
    }else std::cout<<"you must have at least two elements";
}

void Complexs::findKey(int k){
    if(stack.size()/2>k){
        int l=stack.size()-k-1;
        std::stack <int> buf;
        for(int i=0; i<=l; i++){
            buf.push(stack.top());
            stack.pop();
            buf.push(stack.top());
            stack.pop();
        }
        int b=buf.top();
        buf.pop();
        std::cout<<"real"<<b<<"imagine"<<buf.top()<<std::endl;
        buf.push(b);
        l = buf.size()/2;
        for(int i=0; i<=l; i++){
            stack.push(stack.top());
            buf.pop();
            stack.push(stack.top());
            buf.pop();
        }
    }
}

void Complexs::find(int real, int imag){

        int l =stack.size()/2-1;
        int r, im;
        std::stack <int> buf;
        for(int i =l; i<l; i--){
            r=stack.top();
            buf.push(stack.top());
            stack.pop();
            im=stack.top();
            buf.push(stack.top());
            stack.pop();
            std::cout<<r<<im<<std::endl;
            if((r==real) && (im==imag)){
                std::cout<<"key:"<<i<<std::endl;
                break;
            }
        }
        //if((r!=real) && (im!=imag)) std::cout<<"there is no such a num"<<std::endl;
        l = buf.size()/2;
        for(int i=0; i<=l; i++){
            stack.push(stack.top());
            buf.pop();
            stack.push(stack.top());
            buf.pop();
        }
    
}

 void Complexs::complexsSize(){
     int s =stack.size()/2;
     std::cout<<s<<std::endl;
 }


void Complexs::deleteComplex(int real, int imag){
    if(stack.size()){
        int l =stack.size()/2-1;
        int r, im;
        std::stack <int> buf;
        for(int i =l; i<l; l--){
            r=stack.top();
            stack.pop();
            im=stack.top();
            stack.pop();
            if((r==real) && (im==imag)){
                buf.pop();
                buf.pop();
            }
        }
        if((r!=real) && (im!=imag)) std::cout<<"there is no such a num"<<std::endl;
        l = buf.size()/2;
        for(int i=0; i<=l; i++){
            stack.push(buf.top());
            buf.pop();
            stack.push(buf.top());
            buf.pop();
        }
    }

}

void Complexs::destroy(){
    std::stack<int> b;
    stack.swap(b);
}

void Complexs::all(){
    std::cout<<"real  imagine"<<std::endl;
        int l=stack.size()-1;
        int r, im;
        std::stack <int> buf;
        for(int i=0; i<=l; i++){
            r=stack.top();
            buf.push(stack.top());
            stack.pop();
            im=stack.top();
            buf.push(stack.top());
            stack.pop();
            std::cout<<r<<"  "<<im<<"  "<<buf.size()/2<<std::endl;
        }
        l = buf.size()/2;
        for(int i=0; i<=l; i++){
            stack.push(buf.top());
            buf.pop();
            stack.push(buf.top());
            buf.pop();
        }
    
}