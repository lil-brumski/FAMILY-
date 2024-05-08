#ifndef CHILD_1_HPP
#define CHILD_1_HPP

#include <iostream>
#include "parents.hpp"

class Child_1 : public Mom, public Dad{
    public:
         bool inherited_tall;
         bool inherited_beauty;
         bool inherited_intelligence;
         bool inherited_clear_eyes;
         
         Child_1(){
             inherited_tall = (Mom::tall || Dad::tall);
             inherited_beauty = (Mom::beauty && Dad::handsome);
             inherited_intelligence = (Mom::intelligent || Dad::intelligent);
             inherited_clear_eyes = (Mom::clear_eyes && Dad::clear_eyes);
             }
             
        void about() const override{
            std::cout<<"FIRST CHILD:\n";
            if(inherited_tall){
                std::cout<<"The first child is tall.\n";
                }
             else{
                 std::cout<<"The first child is short.\n";
                 }
                 
             if(inherited_beauty){
                 std::cout<<"She is beautiful.\n";
                 }
             else{
                 std::cout<<"She is not beautiful.\n";
                 }
                 
             if(inherited_intelligence){
                 std::cout<<"She is intelligent.\n";
                 }
             else{
                      std::cout<<"She is not intelligent.\n";
                     }
                     
             if(inherited_clear_eyes){
                 std::cout<<"She has clear eyes; she doesn\'t need glasses.\n";
                 }
             else{
                 std::cout<<"She doesn\'t have clear eyes; she needs glasses.\n";
                 }             
                     
            }
    };
    
#endif