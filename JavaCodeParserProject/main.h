#include <QString>
#include <QList>

#ifndef MAIN_H
#define MAIN_H

#endif // MAIN_H

struct Class
{
    QString nameClass;
    QString accessModeClass;
    QList<QString> annatationsClass;
    QList<QString> bodyClassStr;
    int numberClass;
    int countMethod;
    int countBodyStrClass;
//    struct Annitatins *annatationsClass;
};

//struct Annotations
//{
//    QString name;
//};

struct Methods
{
    QString nameMethod;
    QString accessModeMethod;
    QString modifierMrthod;
    QString typeValueMthod;
    struct Argements *argumentsMehod;
    QList<QString> annatationsMethod;
    QList<QString> bodyMethodStr;
    int numberMethod;
    int countBodyStrMethod;

};

struct Argements
{
    QString name;
    QString type;
};

struct Improts
{
    QString name;
};

struct Interface
{
    QString name;
    QList<QString> bodyInterfaceStr;
    int numberInterface;
};
