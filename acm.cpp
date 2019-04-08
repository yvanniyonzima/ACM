#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "acm.h"

using namespace std;


vector<Match> ACM::launchACM(LinkedList<Animal> animals,LinkedList<Client> clients,int numAnimals,int numClients){



  vector<string> animalIds;
  vector<string> clientIds;

  for (int i= 0;i<animals.size();i++){
    animalIds.push_back(to_string(i));
  }


  for (int i= 0;i<clients.size();i++){
    clientIds.push_back(to_string(i));
  }

  vector<vector<Match> > oneToOne = animalClientCompatibility.computeAllMatchCompatibility(animals,clients);
  vector<vector<string> > idCombinations = makeIdCombs.getAllIdCombinations(animalIds,clientIds,numAnimals,numClients);
  vector<vector<Match> > macthCombinations = animalClientCombinations.makeMatchCombinations(idCombinations,oneToOne);

  idCombinations.clear();
  oneToOne.clear();

  vector<vector<Match> > rankSets = animalClientCombinations.computeRank(macthCombinations,0);

  macthCombinations.clear();

  vector<Match> optimalSet = animalClientCombinations.computeOptimalSet(rankSets);

  rankSets.clear();

  return optimalSet;



}
