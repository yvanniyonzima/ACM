#include <iostream>
#include <string>
#include "animalheaders.h"
#include "client.h"

using namespace std;

class Match{

    public:
        Match(Client*,Animal*,int);
        ~Match();

        /*gets the rank of the this match's Animal on this match's Client profile*/
        int getMatchAnimalRank(Animal**);

        /*getters for the match class attributes*/
        unsigned int getMatchId();
        unsigned float getNonPhysicalTotal();
        unsigned float getNonPhysicalAverage();
        unsigned float getPhysicalTotal();
        unsigned float getPhysicalAverage();
        unsigned float getMatchTotal();
        unsigned float getMatchAverage();

        Client* getClient();    //returns a pointer to this match's Client
        Animal* getAnimal();    //returns a pointer to this match's Animal

        /*setters for the match class attributes*/
        void setNonPhysicalTotalAndAverage(unsigned float);
        void setNonPhysicalAverage(unsigned float);
        void setPhysicalTotalAndAverage(unsigned float);
        void setPhysicalAverage(unsigned float);
        void setMatchTotalAndAverage();
        void setMatchAverage(unsigned float);



    private:
        Client* client;
        Animal* animal;

        /* a match id is going to be a concatenation of the cleint's and animal's ids*/
        unsigned int matchId;


        /* if errors, check to initialize attributes to 0 */

        /*the total of the non-physiscal attributes calculated by 5-|clientPreff-animalAttribute|*/
        unsigned float matchNonPhysicalTotal : 6;      //the largest value it can hold is 60

        /*the average of the non-physiscal attributes calculated by macthPhsysicalTotal/12 */
        unsigned float matchNonPhysicalAverage : 3;    //the largest value it can hold is 5

        /*the total of the physiscal attributes calculated by 3-|clientPreff-animalAttribute|*/
        unsigned float matchPhysicalTotal : 2;    //the larget value it can hold it 3

        /*the average of the physiscal attributes calculated by macthPhsysicalTotal/3 */
        unsigned float matchPhysicalAverage : 2;   //the largest value it can hold is 3

        /*the match total of the physiscal and non-physical attributes calculated by matchNonPhysicalTotal + matchPhsysicalTotal  */
        unsigned float matchTotal : 6;     //the largest value it can hold is 63

        /*the match average of the physiscal and non-physical attributes calculated by (matchNonPhysicalTotal + matchPhsysicalTotal)/15*/
        unsigned float matchAverage : 3;   //the largest value it can hold is 4.6


};
