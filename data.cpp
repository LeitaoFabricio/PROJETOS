#include "data.h"

Data::Data()
{

}

int Data::getDia() const
{
    return dia;
}

void Data::setDia(const int value)
{
    if(value >= 1 and value <= 31)//incompleto
        dia = value;

}

int Data::getMes() const
{
    return mes;
}
/*
void setMes(const int value)
{
    if(value >= 1 and value <= 12)
        mes = value;
}
*/
int Data::getAno() const
{
    return ano;
}
/*
void setAno(const int value)
{
    ano = value;
}
*/
