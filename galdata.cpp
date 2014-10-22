#include "galdata.h"

GalData::GalData()
{
}

int GalData::getBlock(){
    return this->block;
}
int GalData::getColumn(){
    return this->column;
}

int GalData::getRow(){
    return this->row;
}
char GalData::getName(){
    return this->name;
}
int GalData::getId(){
    return this->id;
}
void GalData::setBlock(int b)
{
    this->block = b;
}
void GalData::setColumn(int c){
    this->column = c;
}
void GalData::setRow (int r){
    this->row = r;
}
void GalData::setName (char n){
    this->name = n;
}
void GalData::setId(int id){
    this->id = id;
}
