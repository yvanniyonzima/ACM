#include <iostream>
#include <string>
#include "match.h"

using namespace std;



Match::Match(Client*  matchClient,Animal* mathcAnimal,int id){
    client = matchClient;
    animal = mathcAnimal;
    matchId = id;
}

Match::~Match(){}

/*gets the rank of the this match's Animal on this match's Client profile*/
int getMatchAnimalRank(Animal**);

/*getters for the match class attributes*/
unsigned int Match::getMatchId(){return matchId;}
float Match::getNonPhysicalTotal(){return matchNonPhysicalTotal;}
float Match::getNonPhysicalAverage(){return matchNonPhysicalAverage;}
float Match::getPhysicalTotal(){return matchPhysicalTotal;}
float Match::getPhysicalAverage(){return matchPhysicalAverage;}
float Match::getMatchTotal(){return matchTotal;}
float Match::getMatchAverage(){return matchAverage;}

Client* Match::getClient(){return client;}    //returns a pointer to this match's Client
Animal* Match::getAnimal(){return animal;}    //returns a pointer to this match's Animal

/*setters for the match class attributes*/
void Match::setNonPhysicalTotalAndAverage(float nonPhysicalTotal){
    matchNonPhysicalTotal = nonPhysicalTotal;
    matchNonPhysicalAverage = matchNonPhysicalTotal / 12;
}

void Match::setNonPhysicalAverage(float nonPhysicalAverage){matchNonPhysicalAverage = nonPhysicalAverage;}

void Match::setPhysicalTotalAndAverage(float physicalTotal){
    matchPhysicalTotal = physicalTotal;
    matchPhysicalAverage = matchPhysicalTotal / 3;

}

void Match::setPhysicalAverage(float physicalAverage){}

void Match::setMatchTotalAndAverage(){
    matchTotal = matchNonPhysicalTotal + matchPhysicalTotal;
    matchAverage = matchPhysicalAverage + matchNonPhysicalAverage;
}

void Match::setMatchAverage(float average){}
