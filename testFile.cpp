#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include "animalcareshelter.h"
#include "animalheaders.h"
#include <vector>
#include <map>
#include "client.h"
#include "match.h"
#include "compatibility.h"

//#include "LinkedList.h"


int main(){


   AnimalCareShelter cuacs;
    cuacs.animals.name = "Animals";
    string shelterName = cuacs.getName();
  
  
    //cout<<"Testing progress of the "<<shelterName<<" system"<<endl;
    //cout<<"========================================================================\n"<<endl;

    Animal *timmy = new Mammal("Timmy","Dog");
    timmy->setBasicInfo("10","Male","Grey","40","12","BullDog");
    timmy->setPhysCharacteristics("Bulky", "Long", "Blonde");
    timmy->setNonPhysicalAttributes("3","4", "5", "1", "2", "4", "2", "1", "3", "5", "1", "4");

    Animal *billy = new Mammal("Billy","Cat");
    billy->setBasicInfo("10","Male","White","40","12","Ragdoll");
    billy->setNonPhysicalAttributes("2","3", "2", "2", "2", "4", "5", "3", "4", "2", "2", "3");
    billy->setPhysCharacteristics("Average","Medium","Light Brown");

    Animal *jacob = new Bird("Jacob","Finch");
    jacob->setBasicInfo("3","Male","Grey","10","5","Finch");
    jacob->setPhysCharacteristics("Short", "Long", "Blue");
    jacob->setNonPhysicalAttributes("1","1", "5", "4", "3", "4", "2", "5", "3", "1", "3", "4");;

    Animal *ruth = new Mammal("Ruth","Cat");
    ruth->setBasicInfo("10","Female","Grey","20","12","PersianCat");
    timmy->setPhysCharacteristics("Bulky", "Long", "Dark Brown");//build, hairlength, haircolour
    timmy->setNonPhysicalAttributes("3","4", "5", "1", "2", "4", "2", "1", "3", "5", "1", "4");

    Animal *serge = new Bird("Serge","Parrot");
    serge->setBasicInfo("10","Male","Grey","10","2","GreyParot");
    serge->setPhysCharacteristics("Short","Medium","Red"); //
    timmy->setNonPhysicalAttributes("1","4", "3", "2", "5", "2", "5", "2", "4", "1", "3", "5");

    Animal *tarek = new Reptile("Tarek","Lizard");
    tarek->setBasicInfo("10","Male","Grey","10","2","Red Lizard");
    timmy->setNonPhysicalAttributes("2","2", "4", "2", "1", "3", "4", "5", "1", "2", "3", "5");
    tarek->setPhysCharacteristics("Short","Dotted","Jagged");//body length, body pattern , scale type


    Animal *sheral = new Fish("Sheral","Goldfish");
    sheral->setBasicInfo("3","Female","White","40","12","Goldfish");
    sheral->setNonPhysicalAttributes("5","3", "2", "1", "3", "2", "3", "4", "5", "2", "3", "5");
    sheral->setPhysCharacteristics("Dotted","Long","Short"); //string fishBodyPattern,string fishBodyLength, string fishFinnsSize

    Animal *galina = new Amphibian("galina","Salamander");
    galina->setBasicInfo("3","Male","Dark Brown","80","12","Spotted Salamander");
    galina->setNonPhysicalAttributes("5","3", "4", "2", "4", "1", "2", "5", "2", "3", "3", "3");
    galina->setPhysCharacteristics("Dotted","Long","Average"); //string amphibianBodyPattern,string amphibianBodyLength, string amphibianBuild

    cuacs.animals.add(&timmy);
    cuacs.animals.add(&billy);
    cuacs.animals.add(&jacob);
    cuacs.animals.add(&ruth);
    cuacs.animals.add(&serge);
    cuacs.animals.add(&tarek);
    cuacs.animals.add(&sheral);
    cuacs.animals.add(&galina);

    

    Client *james = new Client("James", "Issa", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(1);
    james->setCharacterTraits("3", "4", "1", "5");
    james->setNonPhysPreferences("1", "2", "3", "4", "5", "3", "2", "1");

    Client *bob = new Client("Bob", "Jones", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(2);
    james->setCharacterTraits("5", "1", "2", "3");
    james->setNonPhysPreferences("5", "3", "4", "1", "2", "3", "5", "1");

    Client *william = new Client("William", "Jones", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(3);
    james->setCharacterTraits("1", "5", "3", "4");
    james->setNonPhysPreferences("5", "1", "3", "2", "1", "4", "5", "2");

    Client *gary = new Client("Gary", "Jones", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(4);
    james->setCharacterTraits("2", "1", "3", "5");
    james->setNonPhysPreferences("4", "5", "1", "2", "3", "4", "5", "2");

    Client *rome = new Client("Rome", "Jones", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(5);
    james->setCharacterTraits("2", "2", "3", "4");
    james->setNonPhysPreferences("2", "5", "5", "2", "3", "1", "4", "1");

    Client *lola = new Client("Lola", "Jones", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(6);
    james->setCharacterTraits("1", "5", "5", "4");
    james->setNonPhysPreferences("4", "4", "3", "1", "3", "4", "4", "1");

    Client *gordy = new Client("Gordy", "Jones", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(7);
    james->setCharacterTraits("3", "3", "1", "2");
    james->setNonPhysPreferences("3", "1", "4", "5", "3", "2", "1", "5");

    cuacs.clients.add(&james);
    cuacs.clients.add(&bob);
    cuacs.clients.add(&william);
    cuacs.clients.add(&gary);
    cuacs.clients.add(&rome);
    cuacs.clients.add(&gordy);
    cuacs.clients.add(&lola);

  Compatibility matchtestclass;

  

    


    ////////////////////////////////////////DUMMY ANIMALS FOR THE CLIENT RANKS///////////////////////////////////////////////////////////////



   

    
 

   

  

 





    return 0;
}
