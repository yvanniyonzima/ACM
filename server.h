#ifndef SERVER_H
#define SERVER_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QLineEdit>
#include <cstdlib>
#include <QGroupBox>
#include "animalheaders.h"
#include "client.h"
#include "linkedlist.h"


//Salim Erradi - Database
class Server
{
public:
    //To specify specific database to load
    Server();
    ~Server();
    void update(LinkedList<Animal>& listForA,LinkedList<Client>& listForC);
    void retrieve(LinkedList<Animal>& listForA,LinkedList<Client>& listForC);
    void openDataBase(const QString path);
    void closeDataBase();

private:
    QSqlDatabase db;
   // LinkedList<client> l;
};

#endif // SERVER_H
