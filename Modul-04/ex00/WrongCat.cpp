#include "WrongCat.hpp"

WrongCat::WrongCat() {
   /*  std::cout << "WrongCat: Constructor Called\n"; */
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &obj){
    *this = obj;
}

WrongCat::~WrongCat(){
    /* std::cout << "WrongCat: Destructor Called" << std::endl; */
}

WrongCat    &WrongCat::operator=(const WrongCat &obj){
    this->type = obj.getType();
    return (*this);
}


std::ostream    &operator<<(std::ostream &o, const WrongCat &obj){
    o << obj.getType();
    return (o);
}

void    WrongCat::makeSound() const{
    std::cout << "WrongCat Sound" << std::endl;
}