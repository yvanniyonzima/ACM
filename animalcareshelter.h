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



    private:




};

#endif
