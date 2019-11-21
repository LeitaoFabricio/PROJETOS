#ifndef DATA_H
#define DATA_H

class Data
{
private:
    int dia;
    int mes;
    int ano;
public:
    Data();
    int getDia() const;
    void setDia(const int value);
    int getMes() const;
    void setMes(const int value);
    int getAno() const;
    void setAno(const int value);

};

#endif // DATA_H
