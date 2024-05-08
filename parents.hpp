#ifndef PARENTS_HPP
#define PARENTS_HPP

#include <iostream>

class Mom{
    protected:
        bool tall;
        bool beauty;
        bool intelligent;
        bool clear_eyes;
        
     public:
        Mom(bool mom_t = false, bool mom_b = true, bool mom_i = true, bool mom_c = false) : tall(mom_t), beauty(mom_b), intelligent(mom_i), clear_eyes(mom_c) {}
        
        virtual void about() const {
             std::cout<<"MOTHER:\n";
             if(tall){
                 std::cout<<"Mother is tall.\n";
                 }
              else{
                  std::cout<<"Mother is not tall.\n";
                  }
               
               if(beauty){
                 std::cout<<"Mother is beautiful.\n";
                 }
              else{
                  std::cout<<"Mother is ugly.\n";
                  }
                  
                if(intelligent){
                 std::cout<<"Mother is intelligent.\n";
                 }
              else{
                  std::cout<<"Mother is not intelligent l.\n";
                  }
                  
                 if(clear_eyes){
                     std::cout<<"Mother has clear eyes; she doesn\'t need glasses .\n";
                 }
              else{
                  std::cout<<"Mother does not have clear eyes; she needs glasses .\n";
                  }
                     
            }
          
        virtual ~Mom() = default;
    };
 
 class Dad{
     protected:
         bool tall;
         bool handsome;
         bool intelligent;
         bool clear_eyes;
      
     public: 
         Dad(bool dad_t = false, bool dad_h = true, bool dad_i = true, bool dad_c = false) : tall(dad_t), handsome(dad_h), intelligent(dad_i), clear_eyes(dad_c) {}
         
         virtual void about() const {
             std::cout<<"FATHER:\n";
             if(tall){
                 std::cout<<"Father is tall.\n";
                 }
              else{
                  std::cout<<"Father is not tall.\n";
                  }
               
               if(handsome){
                 std::cout<<"Father is handsome.\n";
                 }
              else{
                  std::cout<<"Father  is ugly.\n";
                  }
                  
                if(intelligent){
                 std::cout<<"Father  is intelligent.\n";
                 }
              else{
                  std::cout<<"Father  is not intelligent l.\n";
                  }
                  
                 if(clear_eyes){
                     std::cout<<"Father has clear eyes; he doesn\'t need glasses .\n";
                 }
              else{
                  std::cout<<"Father does not have clear eyes; he needs glasses .\n";
                  }
             }
         
         virtual ~Dad() = default;
     };     
     
#endif