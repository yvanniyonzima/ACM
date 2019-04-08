#include "compatibility.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <sstream>
using namespace std;

Compatibility::Compatibility(){


}
float Compatibility:: computePhysicalCompatibility(Animal* animalCalc ,Client* clientCalc){
    float physMatchLevel = 0;
    int animalRank = clientCalc->getAnimalRank(animalCalc->getSpecies());


    // cout<<"\tAnimal "<<animalCalc->getSpecies()<<" Physical Characteristics (with ranks "<<clientCalc->getAnimalRank(animalCalc->getSpecies())<<")"<<endl;
    // cout<<"\t-------------------------------"<<endl;
    // animalCalc->printPhys();
    // cout<<endl;
    //
    // cout<<"\tClient "<<clientCalc->getFirstName()<<" Physical Preferences for "<<clientCalc->ranks.getByRank(animalRank)->getSpecies()<<endl;
    // cout<<"\t------------------------------------------------------------"<<endl;
    // clientCalc->ranks.getByRank(animalRank)->printPhys();

    Animal *dummyAnimal;
    if(animalRank < 6){

        //cout<<"ClientCalc"<<endl;
        if(animalCalc->getSpecies() == "Cat" || animalCalc->getSpecies() == "Dog"){



            if(animalCalc->getMammalHairColour() == clientCalc->ranks.getByRank(animalRank)->getMammalHairColour()){
                physMatchLevel++;
            }
            if(animalCalc->getMammalHairLength() == clientCalc->ranks.getByRank(animalRank)->getMammalHairLength()){
                physMatchLevel++;
            }
            if(animalCalc->getBuild() == clientCalc->ranks.getByRank(animalRank)->getBuild()){
                physMatchLevel++;
            }
        }
        else if(animalCalc->getSpecies() == "Snake" || animalCalc->getSpecies() == "Lizard"){
            if(animalCalc->getBodyPattern() == clientCalc->ranks.getByRank(animalRank)->getBodyPattern()){
                physMatchLevel++;
            }
            if(animalCalc->getLength() == clientCalc->ranks.getByRank(animalRank)->getLength()){
                physMatchLevel++;
            }
            if(animalCalc->getScaleType() == clientCalc->ranks.getByRank(animalRank)->getScaleType()){
                physMatchLevel++;
            }
        }

        else if(animalCalc->getSpecies() == "Frog" || animalCalc->getSpecies() == "Salamander"){
            if(animalCalc->getBodyPattern() == clientCalc->ranks.getByRank(animalRank)->getBodyPattern()){
                physMatchLevel++;
            }
            if(animalCalc->getLength() == clientCalc->ranks.getByRank(animalRank)->getLength()){
                physMatchLevel++;
            }
            if(animalCalc->getBuild() == clientCalc->ranks.getByRank(animalRank)->getBuild()){
                physMatchLevel++;
            }
        }
        else if(animalCalc->getSpecies() == "Parrot" || animalCalc->getSpecies() == "Finch"){
            if(animalCalc->getWingSpan() == clientCalc->ranks.getByRank(animalRank)->getWingSpan()){
                physMatchLevel++;
            }
            if(animalCalc->getBeakColour() == clientCalc->ranks.getByRank(animalRank)->getBeakColour()){
                physMatchLevel++;
            }
            if(animalCalc->getBeakLength()  == clientCalc->ranks.getByRank(animalRank)->getBeakLength()){
                physMatchLevel++;
            }
        }
        else if(animalCalc->getSpecies() == "Betta" || animalCalc->getSpecies() == "Goldfish"){
            if(animalCalc->getFinnsSize() == clientCalc->ranks.getByRank(animalRank)->getFinnsSize()){
                physMatchLevel++;
            }
            if(animalCalc->getBodyPattern() == clientCalc->ranks.getByRank(animalRank)->getBodyPattern()){
                physMatchLevel++;
            }
            if(animalCalc->getLength() == clientCalc->ranks.getByRank(animalRank)->getLength()){
                physMatchLevel++;
            }
        }
        //cout<<"physical comp for animal "<<physMatchLevel<<endl;

     }
    else{
        printf("This animal is not in the top 5 ranking of the client\n");
        return 0;
    }

    return physMatchLevel;
}
float Compatibility:: computeNonPhysicalCompatibility(Animal* animalCalc, Client* clientCalc){







   float physicalCompatibility = 5 - abs(stof(animalCalc->getIndividualism().substr(0,1)) - stof(clientCalc->getClientIndividualismPreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getAffectionism().substr(0,1)) - stof(clientCalc->getClientAffectionism().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getIntelligence().substr(0,1)) - stof(clientCalc->getClientIntelligencePreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getDiscipline().substr(0,1)) - stof(clientCalc->getClientDisciplinePreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getAssertiveness().substr(0,1)) - stof(clientCalc->getClientAssertivenessPreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getPlayfulness().substr(0,1)) - stof(clientCalc->getClientPlayfulllnessPreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getActiveness().substr(0,1)) - stof(clientCalc->getClientActiveness().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getEnergetic().substr(0,1)) - stof(clientCalc->getClientEnergeticPreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getSpaciousness().substr(0,1)) - stof(clientCalc->getClientSpaciousnessPreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getDiurnalNocturnal().substr(0,1)) - stof(clientCalc->getClientDiurnalNocturnal().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getAppetite().substr(0,1)) - stof(clientCalc->getClientAppetitePreference().substr(0,1)))
                            + 5 - abs(stof(animalCalc->getHabitatPreference().substr(0,1)) - stof(clientCalc->getClientHabitaPreference().substr(0,1)));




    //float indiv = stof(animalCalc.getIndividualism().substr(0,1)) - stof(clientCalc.getClientIndividualismPreference().substr(0,1));
  //physicalCompatibility = indiv + affect + intelllingence + discipline + assertive + playfull + energetic + space + diurnal + appetite + habitat + active;

    return physicalCompatibility;

}

vector<vector<Match> > Compatibility:: computeAllMatchCompatibility(LinkedList<Animal> allAnimals,LinkedList<Client> allClients){
    float nonPhysMatchlvl;
    float nonPhysMatchAvg;

    //cout<<"starting to compute all match compatibility"<<endl;

    for(int i = 0; i < allAnimals.size(); i++){
        //cout<<"for animal: "<<i<<endl;
        vector<Match> forEachAnimal;
        for(int y = 0; y < allClients.size(); y++){
          //  cout<<"computing the non physical compatibility"<<endl;
            nonPhysMatchlvl = computeNonPhysicalCompatibility(allAnimals.get(i), allClients.get(y));
            //cout<<"done computing the non physical compatibility"<<endl;
            nonPhysMatchAvg = nonPhysMatchlvl / 12;
            if(nonPhysMatchAvg >= 3){
                //convert i and y to strings
                //concatenate the strings
                //convert the concatenated string to an int
                string animalID = to_string(i);
                string clientID = to_string(y);
                string matchID = animalID + clientID;
                cout<<"the match id is: "<<stoi(matchID)<<endl;

                Match newMatch(allClients.get(y), allAnimals.get(i), stoi(matchID));
                newMatch.setNonPhysicalTotalAndAverage(nonPhysMatchlvl);
                //ask yvan about how to set physical total
                newMatch.setPhysicalTotalAndAverage(computePhysicalCompatibility(allAnimals.get(i), allClients.get(y)));
                newMatch.setMatchTotalAndAverage(); //Ask YVAN ABOUT THIS PROBLEM

                forEachAnimal.push_back(newMatch);
            }
            else{
                Match dummyMatch(NULL, NULL, 0);

                forEachAnimal.push_back(dummyMatch);
            }

        }
        compatibleMatches.push_back(forEachAnimal);

    }
    return compatibleMatches;


}





 //double physicalCompatibility = 0.0;
    //cout<<"starting the compute non physical compatibility"<<endl;

    /*string indivstrAnimal = animalCalc->getIndividualism().substr(0,1);
    int indiviIntAnimal;
    std::istringstream iss1 (indivstrAnimal);
    iss1 >> indiviIntAnimal;

    string affectstrAnimal = animalCalc->getAffectionism().substr(0,1);
    int afftectIntAnimal;
    std::istringstream iss2 (affectstrAnimal);
    iss2 >> afftectIntAnimal;

    string intelllingencestrAnimal = animalCalc->getIntelligence().substr(0,1);
    int intelliIntAnimal;
    std::istringstream iss3 (intelllingencestrAnimal);
    iss3 >> intelliIntAnimal;

    string disciplinestrAnimal = animalCalc->getDiscipline().substr(0,1);
    int disciplineiIntAnimal;
    std::istringstream iss4 (disciplinestrAnimal);
    iss4 >> disciplineiIntAnimal;

    string assertivestrAnimal = animalCalc->getAssertiveness().substr(0,1);
    int assertIntAnimal;
    std::istringstream iss5 (assertivestrAnimal);
    iss5 >> assertIntAnimal;

    string playfullstrAnimal =  animalCalc->getPlayfulness().substr(0,1);
    int playIntAnimal;
    std::istringstream iss6 (playfullstrAnimal);
    iss6 >> playIntAnimal;

    string activestrAnimal =  animalCalc->getActiveness().substr(0,1);
    int activeIntAnimal;
    std::istringstream iss7 (activestrAnimal);
    iss7 >> activeIntAnimal;

    string energeticstrAnimal =  animalCalc->getEnergetic().substr(0,1);
    int energyIntAnimal;
    std::istringstream iss8 (energeticstrAnimal);
    iss8 >> energyIntAnimal;

    string spacestrAnimal =  animalCalc->getSpaciousness().substr(0,1);
    int spaceIntAnimal;
    std::istringstream iss9 (spacestrAnimal);
    iss9 >> spaceIntAnimal;

    string diurnalstrAnimal =  animalCalc->getDiurnalNocturnal().substr(0,1);
    int diurnIntAnimal;
    std::istringstream iss10 (diurnalstrAnimal);
    iss10 >> diurnIntAnimal;

    string appetitestrAnimal =  animalCalc->getAppetite().substr(0,1);
    int appetiteIntAnimal;
    std::istringstream iss11 (appetitestrAnimal);
    iss11 >> appetiteIntAnimal;

    string habitatstrAnimal =  animalCalc->getHabitatPreference().substr(0,1);
    int habitatIntAnimal;
    std::istringstream iss12 (habitatstrAnimal);
    iss12 >> habitatIntAnimal;

    ///////////////////////////////For clients////////////////////////////////

    string indivstrClient = clientCalc->getClientIndividualismPreference().substr(0,1);
    int indiviIntClient;
    std::istringstream iss13 (indivstrClient);
    iss13 >> indiviIntClient;

    string affectstrClient = clientCalc->getClientAffectionism().substr(0,1);
    int affectIntClient;
    std::istringstream iss14 (affectstrClient);
    iss14 >> affectIntClient;

    string intelllingencestr = clientCalc->getClientIntelligencePreference().substr(0,1);
    int intellIntClient;
    std::istringstream iss15 (intelllingencestr);
    iss15 >> intellIntClient;

    string disciplinestrClient = clientCalc->getClientDisciplinePreference().substr(0,1);
    int disciplineIntClient;
    std::istringstream iss16 (disciplinestrClient);
    iss16 >> disciplineIntClient;

    string assertivestrClient = clientCalc->getClientAssertivenessPreference().substr(0,1);
    int assertIntClient;
    std::istringstream iss17 (assertivestrClient);
    iss17 >> assertIntClient;

    string playfullstrClient =  clientCalc->getClientPlayfulllnessPreference().substr(0,1);
    int playIntClient;
    std::istringstream iss18 (playfullstrClient);
    iss18 >> playIntClient;

    string activestrClient =  clientCalc->getClientActiveness().substr(0,1);
    int activeIntClient;
    std::istringstream iss19 (activestrClient);
    iss19 >> activeIntClient;

    string energeticstrClient =  clientCalc->getClientEnergeticPreference().substr(0,1);
    int energyIntClient;
    std::istringstream iss20 (energeticstrClient);
    iss20 >> energyIntClient;

    string spacestrClient =  clientCalc->getClientSpaciousnessPreference().substr(0,1);
    int spaceIntClient;
    std::istringstream iss21 (spacestrClient);
    iss21 >> spaceIntClient;

    string diurnalstrClient =  clientCalc->getClientDiurnalNocturnal().substr(0,1);
    int diurnalIntClient;
    std::istringstream iss22 (diurnalstrClient);
    iss22 >> diurnalIntClient;

    string appetitestrClient =  clientCalc->getClientAppetitePreference().substr(0,1);
    int appetiteIntClient;
    std::istringstream iss23 (appetitestrClient);
    iss23 >> appetiteIntClient;

    string habitatstrClient =  clientCalc->getClientHabitaPreference().substr(0,1);
    int habitatIntClient;
    std::istringstream iss24 (habitatstrClient);
    iss24 >> habitatIntClient;




    double indiv = 5 - abs(static_cast<double>(indiviIntClient-indiviIntClient));

    double affect =  5 - abs(static_cast<double>(affectIntClient-afftectIntAnimal));

    double intelllingence = 5 - abs(static_cast<double>(intellIntClient-intelliIntAnimal));

    double discipline =  5 - abs(static_cast<double>(disciplineIntClient-disciplineiIntAnimal));

    double assertive = 5 - abs(static_cast<double>(assertIntClient-assertIntAnimal));

    double playfull =  5 - abs(static_cast<double>(playIntClient-playIntAnimal));

    double active = 5 - abs(static_cast<double>(activeIntAnimal-activeIntClient));

    double energetic = 5 - abs(static_cast<double>(energyIntClient-energyIntAnimal));

    double space =  5 - abs(static_cast<double>(spaceIntClient-spaceIntAnimal));

    double diurnal = 5 - abs(static_cast<double>(diurnalIntClient-diurnIntAnimal));

    double appetite =5 - abs(static_cast<double>(appetiteIntClient-appetiteIntAnimal));

    double habitat = 5 - abs(static_cast<double>(habitatIntClient-habitatIntAnimal)); */
