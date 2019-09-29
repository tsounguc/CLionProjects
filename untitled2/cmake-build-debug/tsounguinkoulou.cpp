//
// Created by Christian Tsoungui on 9/11/2018.
//
#include <iostream>
#include "house.h"
#include<string>

house::house() {
    color = "unknown";
    price =-1;
    num_rooms = -1
}

house::house(const string &ColorValue, int PriceValue, int Num_roomsValue) {
    color = ColorValue;
    price = PriceValue;
    num_rooms = Num_roomsValue;
}

void house::SetColor(const string &ColorValue){
    color = ColorValue;
}  //set the member variable "color"

string house::GetColor() const {
    return color;
}

void house::SetPrice(int PriceValue) {
    price = PriceValue;
}

int house::GetPrice() const {
    return price;
}

void house::SetNum_rooms(int Num_roomsValue) {
    num_rooms = Num_roomsValue;
}

int house::GetNum_rooms() const {
    return num_rooms;
}

void house::PrintInfo() const {
    cout<< color <<" "<< price<<" "<< num_rooms endl;
} //show color, price and num_rooms in the output screen

