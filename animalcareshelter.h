#ifndef AnimalCareShelter_H
#define AnimalCareShelter_H

using namespace std;
#include "storagecenter.h"
#include "acm.h"

class AnimalCareShelter : public StorageCenter{

    public:
        AnimalCareShelter();
        ~AnimalCareShelter();
        LinkedList<Animal> animals;
        LinkedList<Client> clients;
        LinkedList<Match> animalClientMatches;


        void makeNewAnimal(vector<string>);
        int getPreviousIDForAnimal();
        int getPreviousIDClient();
        void setPreviousIDForAnimal(int newID);
        void setPreviousIDClient(int newID);
        void runACM();



    private:
        static int previousIDForAnimal;
        static int previousIDForClient;
        ACM acm;





};

#endif
