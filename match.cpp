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
unsigned int Match::getNonPhysicalTotal(){return matchNonPhysicalTotal;}
unsigned int Match::getNonPhysicalAverage(){return matchNonPhysicalAverage;}
unsigned int Match::getPhysicalTotal(){return matchPhysicalTotal;}
unsigned int Match::getPhysicalAverage(){return matchPhysicalAverage;}
unsigned int Match::getMatchTotal(){return matchTotal;}
unsigned int Match::getMatchAverage(){return matchAverage;}

Client* Match::getClient(){return client;}    //returns a pointer to this match's Client
Animal* Match::getAnimal(){return animal;}    //returns a pointer to this match's Animal

/*setters for the match class attributes*/
void Match::setNonPhysicalTotalAndAverage(unsigned int nonPhysicalTotal){
    matchNonPhysicalTotal = nonPhysicalTotal;
    matchNonPhysicalAverage = matchNonPhysicalTotal / 12;
}

void Match::setNonPhysicalAverage(unsigned int nonPhysicalAverage){matchNonPhysicalAverage = nonPhysicalAverage;}

void Match::setPhysicalTotalAndAverage(unsigned int physicalTotal){
    matchPhysicalTotal = physicalTotal;
    matchPhysicalAverage = matchPhysicalTotal / 3;

}

void Match::setPhysicalAverage(unsigned int physicalAverage){}

void Match::setMatchTotalAndAverage(){
    matchTotal = matchNonPhysicalTotal + matchPhysicalTotal;
    matchAverage = matchPhysicalAverage + matchNonPhysicalAverage;
}

void Match::setMatchAverage(unsigned int average){}
