#ifndef STORAGECENTER_H
#define STORAGECENTER_H
using namespace std;
#include "linkedlist.h"
#include "animal.h"
#include "client.h"

class StorageCenter{

    public:
        StorageCenter();
        ~StorageCenter();
        virtual string getName();




    protected:
        string name;



};
#endif // STORAGECENTER_
