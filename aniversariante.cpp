#include "aniversariante.h"

Aniversariante::Aniversariante()
{

}

QString Aniversariante::getNome() const
{
    return nome;
}

void Aniversariante::setNome(const QString &value)
{
    if(value.size()>3)
        nome = value;
}
