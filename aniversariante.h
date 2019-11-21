#ifndef ANIVERSARIANTE_H
#define ANIVERSARIANTE_H

#include "data.h"
#include <QString>

class Aniversariante
{
private:
    QString nome;
public:
    Aniversariante();
    QString getNome() const;
    void setNome(const QString &value);

};

#endif // ANIVERSARIANTE_H
