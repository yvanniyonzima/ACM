#include "compatibility.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


float Compatibility:: computePhysicalCompatibility(Animal animalCalc ,Client clientCalc){
    float physMatchLevel = 0;
    int animalRank = clientCalc.getAnimalRank(animalCalc.getSpecies());
    if(animalRank < 6){
        if(animalCalc.getSpecies() == "Cat" || animalCalc.getSpecies() == "Dog"){
            if(animalCalc.getMammalHairColour() == clientCalc.ranks.get(animalRank)->getMammalHairColour()){
                physMatchLevel++;
            }
            if(animalCalc.getMammalHairLength() == clientCalc.ranks.get(animalRank)->getMammalHairLength()){
                physMatchLevel++;
            }
            if(animalCalc.getBuild() == clientCalc.ranks.get(animalRank)->getBuild()){
                physMatchLevel++;
            }
        }
        else if(animalCalc.getSpecies() == "Snake" || animalCalc.getSpecies() == "Lizard"){
            if(animalCalc.getBodyPattern() == clientCalc.ranks.get(animalRank)->getBodyPattern()){
                physMatchLevel++;
            }
            if(animalCalc.getLength() == clientCalc.ranks.get(animalRank)->getLength()){
                physMatchLevel++;
            }
            if(animalCalc.getScaleType() == clientCalc.ranks.get(animalRank)->getScaleType()){
                physMatchLevel++;
            }
        }

        else if(animalCalc.getSpecies() == "Frog" || animalCalc.getSpecies() == "Salamander"){
            if(animalCalc.getBodyPattern() == clientCalc.ranks.get(animalRank)->getBodyPattern()){
                physMatchLevel++;
            }
            if(animalCalc.getLength() == clientCalc.ranks.get(animalRank)->getLength()){
                physMatchLevel++;
            }
            if(animalCalc.getBuild() == clientCalc.ranks.get(animalRank)->getBuild()){
                physMatchLevel++;
            }
        }
        else if(animalCalc.getSpecies() == "Parrot" || animalCalc.getSpecies() == "Finch"){
            if(animalCalc.getWingSpan() == clientCalc.ranks.get(animalRank)->getWingSpan()){
                physMatchLevel++;
            }
            if(animalCalc.getBeakColour() == clientCalc.ranks.get(animalRank)->getBeakColour()){
                physMatchLevel++;
            }
            if(animalCalc.getBeakLength()  == clientCalc.ranks.get(animalRank)->getBeakLength()){
                physMatchLevel++;
            }
        }
        else if(animalCalc.getSpecies() == "Betta" || animalCalc.getSpecies() == "Goldfish"){
            if(animalCalc.getFinnsSize() == clientCalc.ranks.get(animalRank)->getFinnsSize()){
                physMatchLevel++;
            }
            if(animalCalc.getBodyPattern() == clientCalc.ranks.get(animalRank)->getBodyPattern()){
                physMatchLevel++;
            }
            if(animalCalc.getLength() == clientCalc.ranks.get(animalRank)->getLength()){
                physMatchLevel++;
            }
        }

     }
    else{
        printf("This animal is not in the top 5 ranking of the client");
        return 0;
    }

    return physMatchLevel;
}
float Compatibility:: computeNonPhysicalCompatibility(Animal animalCalc, Client clientCalc){
    float physicalCompatibility = 5 - abs(stoi(animalCalc.getIndividualism().substr(0,1)) - stoi(clientCalc.getClientIndividualismPreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getAffectionism().substr(0,1)) - stoi(clientCalc.getClientAffectionism().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getIntelligence().substr(0,1)) - stoi(clientCalc.getClientIntelligencePreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getDiscipline().substr(0,1)) - stoi(clientCalc.getClientDisciplinePreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getAssertiveness().substr(0,1)) - stoi(clientCalc.getClientAssertivenessPreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getPlayfulness().substr(0,1)) - stoi(clientCalc.getClientPlayfulllnessPreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getActiveness().substr(0,1)) - stoi(clientCalc.getClientActiveness().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getEnergetic().substr(0,1)) - stoi(clientCalc.getClientEnergeticPreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getSpaciousness().substr(0,1)) - stoi(clientCalc.getClientSpaciousnessPreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getDiurnalNocturnal().substr(0,1)) - stoi(clientCalc.getClientDiurnalNocturnal().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getAppetite().substr(0,1)) - stoi(clientCalc.getClientAppetitePreference().substr(0,1)))
                            + 5 - abs(stoi(animalCalc.getHabitatPreference().substr(0,1)) - stoi(clientCalc.getClientHabitaPreference().substr(0,1)));
     return physicalCompatibility;

}

vector<vector<Match>> Compatibility:: computeAllMatchCompatibility(LinkedList<Animal> allAnimals,LinkedList<Client> allClients){
    float nonPhysMatchlvl;
    float nonPhysMatchAvg;

    for(int i = 0; i < allAnimals.size(); i++){
        for(int y = 0; y < allClients.size(); y++){
            nonPhysMatchlvl = computeNonPhysicalCompatibility(*allAnimals.get(i), *allClients.get(y));
            nonPhysMatchAvg = nonPhysMatchlvl / 12;
            if(nonPhysMatchAvg >= 3){
                //convert i and y to strings
                //concatenate the strings
                //convert the concatenated string to an int
                string animalID = to_string(i);
                string clientID = to_string(y);
                string matchID = animalID + clientID;
                Match newMatch(allClients.get(y), allAnimals.get(i), stoi(matchID));
                newMatch.setNonPhysicalTotalAndAverage(nonPhysMatchlvl);
                //ask yvan about how to set physical total
                newMatch.setPhysicalTotalAndAverage(computePhysicalCompatibility(*allAnimals.get(i), *allClients.get(y)));
                newMatch.setMatchTotalAndAverage(); //Ask YVAN ABOUT THIS PROBLEM
                compatibleMatches[i].push_back(newMatch);
            }
            else{
                Match dummyMatch(NULL, NULL, 0);

                compatibleMatches[i].push_back(dummyMatch);
            }

        }
    }
    return compatibleMatches;


}
