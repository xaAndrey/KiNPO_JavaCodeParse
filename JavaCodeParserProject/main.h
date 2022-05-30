#include <QString>
#include <QList>

#ifndef MAIN_H
#define MAIN_H

#endif // MAIN_H

<<<<<<< HEAD
class Annotations
{
private:
    QString name;

public:
    void setName(QString name);

    QString getName();
};


class Class
{
private:
    QString nameClass;
    QString accessModeClass;
=======
struct Class
{
    QString nameClass;
    QString accessModeClass;
    //QList<QString> annatationsClass;
>>>>>>> remotes/origin/main
    QList<QString> bodyClassStr;
    int numberClass;
    int countMethod;
    int countBodyStrClass;
<<<<<<< HEAD
    Annotations annotationsClass;

public:
    void setNameCLass(QString nameClass);
    void setAccessModeClass(QString accessModeClass);
    void setBodyClassStr(QList<QString> bodyClassStr);
    void setNumberClass(int numberClass);
    void setCountMethod(int countMethod);
    void setCountBodyStrClass(int countBodyStrClass);
    void setAnnotationsClass(Annotations annatationsClass);

    QString getNameClass();
    QString getAsccessModelClass();
    QList<QString> getBodyClass();
    int getNumberClass();
    int getCountMethod();
    int getCountBodyStrClass();
    Annotations getAnnotationsClass();
};

class Arguments
{
private:
    QString name;
    QString type;

public:
    void setName(QString name);
    void setType(QString type);

    QString getName();
    QString getType();
};

class Methods
{
private:
    QString nameMethod;
    QString accessModeMethod;
    QString modifierMethod;
    QString typeValueMethod;
    Arguments argumentsMethod;
    QList<QString> bodyMethodStr;
    int numberMethod;
    int countBodyStrMethod;
    Annotations annatationsMethods;

public:
    void setNameMethods(QString nameMethod);
    void setAccessModeMethod(QString accessModeMethod);
    void setModifierMethod(QString modifierMethod);
    void setTypeValueMethod(QString typeValueMethod);
    void setArgumentsMethod(Arguments argumentsMethod);
    void setBodyMethodStr(QList<QString> bodyMethodStr);
    void setNumberMethod(int numberMethod);
    void setCountBodyStrMethod(int countBodyStrMethod);
    void setAnnatationsMethods(Annotations annatationsMethods);

    QString getNameMethods();
    QString getAccessModeMethod();
    QString getModifierMethod();
    QString getTypeValueMethod();
    Arguments getArgumentsMethod();
    QList<QString> getBodyMethodStr();
    int getNumberMethod();
    int getCountBodyStrMethod();
    Annotations getAnnotationsMethods();
};

class Improts
{
private:
    QString name;

public:
    void setName(QString name);

    QString getName();
};

class Interface
{
private:
    QString name;
    QList<QString> bodyInterfaceStr;
    int numberInterface;

public:
    void setName(QString name);
    void setBodyInterfaceStr(QList<QString>);
    void setNumberInterface(int numberIterface);

    QString getName();
    QList<QString> getBodyInterfaceStr();
    int getNumberInterface();
=======
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
>>>>>>> remotes/origin/main
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
