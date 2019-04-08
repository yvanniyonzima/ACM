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
#include "matchcombinations.h"
#include "matchIdCombination.h"
#include <cstdlib>

//#include "LinkedList.h"


int main(){


   AnimalCareShelter cuacs;
    cuacs.animals.name = "Animals";
    string shelterName = cuacs.getName();


    //cout<<"Testing progress of the "<<shelterName<<" system"<<endl;
    //cout<<"========================================================================\n"<<endl;

    //cout<<"Making the animals to test the macthing algorithm..."<<endl;

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
    ruth->setPhysCharacteristics("Bulky", "Long", "Dark Brown");//build, hairlength, haircolour
    ruth->setNonPhysicalAttributes("3","4", "5", "1", "2", "4", "2", "1", "3", "5", "1", "4");

    Animal *serge = new Bird("Serge","Parrot");
    serge->setBasicInfo("10","Male","Grey","10","2","GreyParot");
    serge->setPhysCharacteristics("Short","Medium","Red"); //
    serge->setNonPhysicalAttributes("1","4", "3", "2", "5", "2", "5", "2", "4", "1", "3", "5");

    Animal *tarek = new Reptile("Tarek","Lizard");
    tarek->setBasicInfo("10","Male","Grey","10","2","Red Lizard");
    tarek->setNonPhysicalAttributes("2","2", "4", "2", "1", "3", "4", "5", "1", "2", "3", "5");
    tarek->setPhysCharacteristics("Short","Dotted","Jagged");//body length, body pattern , scale type


    Animal *sheral = new Fish("Sheral","Goldfish");
    sheral->setBasicInfo("3","Female","White","40","12","Goldfish");
    sheral->setNonPhysicalAttributes("5","3", "2", "1", "3", "2", "3", "4", "5", "2", "3", "5");
    sheral->setPhysCharacteristics("Dotted","Long","Short"); //string fishBodyPattern,string fishBodyLength, string fishFinnsSize

    Animal *galina = new Amphibian("galina","Salamander");
    galina->setBasicInfo("3","Male","Dark Brown","80","12","Spotted Salamander");
    galina->setNonPhysicalAttributes("5","3", "4", "2", "4", "1", "2", "5", "2", "3", "3", "3");
    galina->setPhysCharacteristics("Dotted","Long","Average"); //string amphibianBodyPattern,string amphibianBodyLength, string amphibianBuild

    //cout<<"\nDone Making the animals to test the macthing algorithm..."<<endl;

    //cout<<"Adding all aniamls to the linked list...\n"<<endl;
    cuacs.animals.addAnimal(&timmy);
    cuacs.animals.addAnimal(&billy);
    cuacs.animals.addAnimal(&jacob);
    cuacs.animals.addAnimal(&ruth);
    cuacs.animals.addAnimal(&serge);
    cuacs.animals.addAnimal(&tarek);
    cuacs.animals.addAnimal(&sheral);
    cuacs.animals.addAnimal(&galina);
    //cout<<"\nDone adding all aniamls to the linked list...\n"<<endl;


  //cout<<"Making the client to test the macthing algorithm..."<<endl;

    Client *james = new Client("James", "Issa", "19", "txisa@gmail.com", "6132768445", "Male");
    james->setClientId(1);
    james->setCharacterTraits("3", "4", "1", "5");
    james->setNonPhysPreferences("1", "2", "3", "4", "5", "3", "2", "1");

    cout<<"populating the ranks for james..."<<endl;
    james->populateRanks();
    cout<<"done populating the ranks for james..."<<endl;

    Client *bob = new Client("Bob", "Jones", "19", "bob@gmail.com", "6132768445", "Male");
    bob->setClientId(2);
    bob->setCharacterTraits("5", "1", "2", "3");
    bob->setNonPhysPreferences("5", "3", "4", "1", "2", "3", "5", "1");
    bob->populateRanks();

    Client *william = new Client("William", "Jones", "19", "william@gmail.com", "6132768445", "Male");
    william->setClientId(3);
    william->setCharacterTraits("1", "5", "3", "4");
    william->setNonPhysPreferences("5", "1", "3", "2", "1", "4", "5", "2");
    william->populateRanks();

    Client *gary = new Client("Gary", "Jones", "19", "gary@gmail.com", "6132768445", "Male");
    gary->setClientId(4);
    gary->setCharacterTraits("2", "1", "3", "5");
    gary->setNonPhysPreferences("4", "5", "1", "2", "3", "4", "5", "2");
    gary->populateRanks();

    Client *rome = new Client("Rome", "Jones", "19", "rome@gmail.com", "6132768445", "Male");
    rome->setClientId(5);
    rome->setCharacterTraits("2", "2", "3", "4");
    rome->setNonPhysPreferences("2", "5", "5", "2", "3", "1", "4", "1");
    rome->populateRanks();

    Client *lola = new Client("Lola", "Jones", "19", "lola@gmail.com", "6132768445", "Male");
    lola->setClientId(6);
    lola->setCharacterTraits("1", "5", "5", "4");
    lola->setNonPhysPreferences("4", "4", "3", "1", "3", "4", "4", "1");
    lola->populateRanks();

    Client *gordy = new Client("Gordy", "Jones", "19", "gordy@gmail.com", "6132768445", "Male");
    gordy->setClientId(7);
    gordy->setCharacterTraits("3", "3", "1", "2");
    gordy->setNonPhysPreferences("3", "1", "4", "5", "3", "2", "1", "5");
    gordy->populateRanks();

    cuacs.clients.addClient(&james);
    cuacs.clients.addClient(&bob);
    cuacs.clients.addClient(&william);
    cuacs.clients.addClient(&gary);
    cuacs.clients.addClient(&rome);
    cuacs.clients.addClient(&gordy);
    cuacs.clients.addClient(&lola);

    cout<<"DONE ADDING CLIENTS TO THE LINKED LIST OF CLIENTS IN CUACCS"<<endl;

  Compatibility matchTestClass;
  MatchCombinations matchCombTest;
  MatchIdCombination idCombinationsTest;



  //cout<<"Size of the animal list: "<<cuacs.animals.size()<<endl;

  /*cout<<"Animal at 1"<<endl;
  cuacs.animals.get(1)->print();*/



  float test;

  /*
  for (int i=0;i<cuacs.animals.size();i++){
    //cout<<"dealing with animal "<<i<<endl;
    for (int j=0;j<cuacs.clients.size();j++){
      //cout<<"dealing with client "<<j<<endl;
      test = matchTestClass.computeNonPhysicalCompatibility(cuacs.animals.get(i),cuacs.clients.get(j));
      cout<<"non physical comp for animal  "<<i<<" and client "<<j<<" = "<<test<<endl;
    }
  }



cout<<endl;
  for (int i=0;i<cuacs.animals.size();i++){
    //cout<<"dealing with animal "<<i<<endl;
    for (int j=0;j<cuacs.clients.size();j++){
      //cout<<"dealing with client "<<j<<endl;
      test = matchTestClass.computePhysicalCompatibility(cuacs.animals.get(i),cuacs.clients.get(j));

    }
  }*/

  cout<<"making one to one matches..."<<endl;

  vector<vector<Match> > oneToOne = matchTestClass.computeAllMatchCompatibility(cuacs.animals,cuacs.clients);

  cout<<"done making one to one matches......"<<endl;

  cout<<"makiing id combinbations......."<<endl;

  vector<string> passedAniamlIDs;
  vector<string> passedClientIDs;

  for (int i= 0;i<cuacs.animals.size();i++){
    passedAniamlIDs.push_back(to_string(i));
  }

  // for (int i= 0;i<passedAniamlIDs.size();i++){
  //   cout<<"animal id: "<<passedAniamlIDs[i]<<endl;
  // }



  for (int i= 0;i<cuacs.clients.size();i++){
    passedClientIDs.push_back(to_string(i));
  }


  int numAnimals = cuacs.animals.size();
  int numClients = cuacs.clients.size();
  // for (int i= 0;i<passedClientIDs.size();i++){
  //   cout<<"client id: "<<passedClientIDs[i]<<endl;
  // }

  vector<vector<string> > idComb = idCombinationsTest.getAllIdCombinations(passedAniamlIDs,passedClientIDs,numAnimals,numClients);

  cout<<"printng the id combinations"<<endl;

  //idCombinationsTest.printComboVector(idComb);

  // cout<<"PRINTING THE MATCHES"<<endl;
  // cout<<"============================"<<endl;
  //
  // for(int i=0;i<oneToOne.size();i++){
  //   for(int j=0;j<oneToOne[i].size();j++){
  //     oneToOne[i][j].print();
  //   }
  // }

  vector<vector<Match> > macthCombinations = matchCombTest.makeMatchCombinations(idComb,oneToOne);

  cout<<"number of id combinations = "<<idComb.size()<<endl;
  cout<<"number of match combinations = "<<macthCombinations.size()<<endl;

  //cout<<"First 3 Passed Vector of Matches"<<endl;

  // for(int i=0;i<3;i++){
  //   for(int j=0;j<macthCombinations[i].size();j++){
  //     macthCombinations[i][j].print();
  //   }
  // }



  vector<vector<Match> > rankSets = matchCombTest.computeRank(macthCombinations,0);

  cout<<"match sets that passed the rank test = "<<rankSets.size()<<endl;

  vector<Match> optimalSet = matchCombTest.computeOptimalSet(rankSets);

  cout<<"optimal set of matches..."<<endl;
   for(int i = 0;i<optimalSet.size();i++){
     optimalSet[i].print();
   }


  //cuacs.clients.print();

  //cuacs.animals.print();

  cuacs.clients.dealocate = true;
  cuacs.animals.dealocate = true;





  //vector<vector<Match> > compatibleMacthes = matchTestClass.computeAllMatchCompatibility(cuacs.animals,cuacs.clients);



  //cout<<"PRINTING ALL CLIENTS\n"<<endl;

  //cuacs.clients.print();










    ////////////////////////////////////////DUMMY ANIMALS FOR THE CLIENT RANKS///////////////////////////////////////////////////////////////


















    return 0;
}
