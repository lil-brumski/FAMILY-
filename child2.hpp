#ifndef CHILD_2_HPP
#define CHILD_2_HPP

#include <iostream>
#include "parents.hpp"

class Child_2 : public Mom, public Dad{
    public:
         bool inherited_tall;
         bool inherited_beauty;
         bool inherited_intelligence;
         bool inherited_clear_eyes;
         
         Child_2(){
             inherited_tall = !(Mom::tall && Dad::tall);
             inherited_beauty = !(Mom::beauty || Dad::handsome);
             inherited_intelligence = !(Mom::intelligent || Dad::intelligent);
             inherited_clear_eyes = !(Mom::clear_eyes && Dad::clear_eyes);
             }
             
        void about() const override{
            std::cout<<"SECOND CHILD:\n";
            if(inherited_tall){
                std::cout<<"The second child is tall.\n";
                }
             else{
                 std::cout<<"The second child is short.\n";
                 }
                 
             if(inherited_beauty){
                 std::cout<<"He is handsome.\n";
                 }
             else{
                 std::cout<<"He is not handsome.\n";
                 }
                 
             if(inherited_intelligence){
                 std::cout<<"He is intelligent.\n";
                 }
             else{
                      std::cout<<"He is not intelligent.\n";
                     }
                     
             if(inherited_clear_eyes){
                 std::cout<<"He has clear eyes; he doesn\'t need glasses.\n";
                 }
             else{
                 std::cout<<"He doesn\'t have clear eyes; he needs glasses.\n";
                 }             
                     
            }
    };
   
#endif