#include <iostream>
#include <memory>
#include "parents.hpp"
#include "child1.hpp"
#include "child2.hpp"
#include "child3.hpp"

int main(){
    
    //MOTHER
    {
      std::unique_ptr<Mom> mom = std::make_unique<Mom>();
      
      mom->about();
      }
      
      std::cout<<std::endl;
     
     //FATHER
    {
      std::unique_ptr<Dad> dad = std::make_unique<Dad>();
      
      dad->about();
      }
      
      std::cout<<std::endl;
      
    //FIRST CHILD 
    {
    std::unique_ptr<Child_1> childone = std::make_unique<Child_1>();
    
    childone->about();
    }
    
    std::cout<<std::endl;
    
    //SECOND CHILD 
    {
    std::unique_ptr<Child_2> childtwo = std::make_unique<Child_2>();
    
    childtwo->about();
    }
    
    std::cout<<std::endl;
    
    //THIRD CHILD 
    {
    std::unique_ptr<Child_3> childthree = std::make_unique<Child_3>();
    
    childthree->about();
    }
    
    std::cout<<std::endl;
}