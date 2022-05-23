#include <QString>
#include <QList>

#ifndef MAIN_H
#define MAIN_H

#endif // MAIN_H

struct Class
{
    QString nameClass;
    QString accessModeClass;
    //QList<QString> annatationsClass;
    QList<QString> bodyClassStr;
    int numberClass;
    int countMethod;
    int countBodyStrClass;
    struct Annotations *annatationsClass;
};

struct Annotations
{
    QString name;
};

struct Methods
{
    QString nameMethod;
    QString accessModeMethod;
    QString modifierMrthod;
    QString typeValueMthod;
    struct Arguments *argumentsMehod;
    //QList<QString> annatationsMethod;
    QList<QString> bodyMethodStr;
    int numberMethod;
    int countBodyStrMethod;
    struct Annotations *annatationsMethods;

};

struct Arguments
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

/*! Копирует данные из файла в массив строк
 * \param
 */
void copyData();

/*! Разбиавает код на элементы
 * \param
 */
void splitCodeIntoElements();

/*! Формирует документ xml расширения
 * \param
 */
void formingXMLDocumnt();

/*! Проверяет на наличие ошибок
 * \param
 */
void checkingForErrors();

/*! Выделяет импорты из кода программы
 * \param
 */
void selectImportsFromTheProgramm();

/*! Выделяет классы из кода программы
 * \param
 */
void selectClassFromTheProgramm();

/*! Выделяет интерфейсы из кода программы
 * \param
 */
void selectInterfaceFromTheProgramm();

/*! Выделяет методы из кода программы
 * \param
 */
void selectMethodFromTheProgramm();
