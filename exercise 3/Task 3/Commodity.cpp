#include "Commodity.hpp"


const double tax = 1.25;



Commodity::Commodity(std::string name, int id, double price) : name(name), id(id), price(price) {}

std::string Commodity::get_name(){
    return this->name;
}

int Commodity::get_id(){
    return this->price;
}

void Commodity::set_price(int price) {
    this->price = price;
}

double Commodity::get_price(int amount){
    return this->price * amount;
}
double Commodity::get_price(){
    return this->price;
}

double Commodity::get_price_with_sales_tax(int amount){
    return this->get_price(amount)*tax;
}
double Commodity::get_price_with_sales_tax(){
    return this->get_price()*tax;
}

