#ifndef AnimalCareShelter_H
#define AnimalCareShelter_H

using namespace std;
#include "storagecenter.h"

class AnimalCareShelter : public StorageCenter{

    public:
        AnimalCareShelter();
        ~AnimalCareShelter();
        LinkedList<Animal> animals;
        LinkedList<Client> clients;


        void makeNewAnimal(vector<string>);
        int getPreviousIDForAnimal();
        int getPreviousIDClient();
        void setPreviousIDForAnimal(int newID);
        void setPreviousIDClient(int newID);



    private:
        static int previousIDForAnimal;
        static int previousIDForClient;


};

#endif