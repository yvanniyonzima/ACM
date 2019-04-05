#include <iostream>
#include "client.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

Client::Client(string clientFirstName, string clientLastName,string clientAge,string clientEmail, string clientPhoneNumber,string clientGender){
    firstName = clientFirstName;
    lastName = clientLastName;
    age = clientAge;
    email = clientEmail;
    phoneNumber = clientPhoneNumber;
    gender = clientGender;
    edited = false;
    isNewClient = false;
    ID = 1;

}

void Client::setClientId(int id){
    ID = id;
}
//checks if the id of the client is the same as the this client id
bool Client::operator==(Client* client){

    if(this->ID == client->getClientId()){return true;}
    return false;
}

Client::~Client(){}

void Client::setClientBasicInfo(string clientGender){

    gender = clientGender;
}
void Client::setContactInfo(string clientEmail,string clientPhoneNumber){

    email = clientEmail;
    phoneNumber = clientPhoneNumber;

}


//checks if the id of the client is the same as the this client id


/*setters for client personal info*/
void Client::setFirstName(string clientFirstName){firstName = clientFirstName;}
void Client::setLastName(string clientLastName){lastName = clientLastName;}
void Client::setGender(string clientGender){gender = clientGender;}
void Client::setAge(string clientAge){age = clientAge;}

/*setters for contact info*/
void Client::setEmail(string clientEmail){email = clientEmail;}
void Client::setPhoneNumber(string clientPhoneNumber){phoneNumber = clientPhoneNumber;}

/*setters for the non physiscal attributes that apply to clients*/

void Client::setClientDiurnalNocturnal(string clientDiurnalNocturnal){
    diurnalNocturnal = clientDiurnalNocturnal;
}
void Client::setClientHabitaPreference(string clientHabitatPreference){
    habitatPreference = clientHabitatPreference;
}
void Client::setClientAffectionism(string clientAffectionism){
    affectionism = clientAffectionism;
}
void Client::setClientActiveness(string clientActiveness){
    activeness = clientActiveness;
}

/*setters for the non physiscal attributes that apply to animals only*/
void Client::setClientIndividualismPreference(string clientIndividualismPreference){
    individualism = clientIndividualismPreference;
}
void Client::setClientIntelligencePreference(string clientIntelligencePreference){
    intelligence = clientIntelligencePreference;
}
void Client::setClientDisciplinePreference(string clientDisciplinePreference){
    discipline = clientDisciplinePreference;
}
void Client::setClientAssertivenessPreference(string clientAssertivenessPreference){
    assertiveness = clientAssertivenessPreference;
}
void Client::setClientPlayfulllnessPreference(string clientPlayfullnessPreference){
    playfulness = clientPlayfullnessPreference;
}
void Client::setClientEnergeticPreference(string clientEnergeticPreference){
    energetic = clientEnergeticPreference;
}
void Client::setClientSpaciousnessPreference(string clientSpaciounessPreference){
    spaciousness = clientSpaciounessPreference;
}
void Client::setClientAppetitePreference(string clientAppetitePreference){
    appetite = clientAppetitePreference;
}


/*monster setter for non-physicall attributes*/
void Client::setCharacterTraits(string clientActiveness,string clientAffectionism,string clientDiurnal,string clientHabitatPreference){
    /*non-Physical attributes that apply also to client*/
    activeness = clientActiveness;
    affectionism = clientAffectionism;
    diurnalNocturnal = clientDiurnal;
    habitatPreference = clientHabitatPreference;
}


void Client::setNonPhysPreferences(string clientIndividualismPreference,string clientIntelligencePreference,string clientDisciplinePreference,string clientAssertivenessPreference,string clientPlayfullnessPreference,string clientEnergeticPreference,string clientSpaciousnessPreference,string clientAppetitePreference){
        /*non-Physicall attributes that apply to only animals*/
        individualism = clientIndividualismPreference;
        intelligence = clientIntelligencePreference;
        discipline = clientDisciplinePreference;
        assertiveness = clientAssertivenessPreference;
        playfulness = clientPlayfullnessPreference;
        energetic = clientEnergeticPreference;
        spaciousness = clientSpaciousnessPreference;
        appetite = clientAppetitePreference;
}


/*getter for client contatc info*/
string Client::getFirstName(){return firstName;}
string Client::getLastName(){return lastName;}
string Client::getGender(){return gender;}
string Client::getAge(){return age;}

/*getters for contact info*/
string Client::getEmail(){return email;}
string Client::getPhoneNumber(){return phoneNumber;}


int Client::getClientId(){return ID;}

int Client::getAnimalRank(string animal){

    return ranks.getRank(animal);
}

/*getters for the non physiscal attributes that apply to clients*/

string Client::getClientDiurnalNocturnal(){return diurnalNocturnal;}
string Client::getClientHabitaPreference(){return habitatPreference;}
string Client::getClientAffectionism(){return affectionism;}
string Client::getClientActiveness(){return activeness;}

/*getters for the non physiscal attributes that apply to animals only*/
string Client::getClientIndividualismPreference(){return individualism;}
string Client::getClientIntelligencePreference(){return intelligence;}
string Client::getClientDisciplinePreference(){return discipline;}
string Client::getClientAssertivenessPreference(){return assertiveness;}
string Client::getClientPlayfulllnessPreference(){return playfulness;}
string Client::getClientEnergeticPreference(){return energetic;}
string Client::getClientSpaciousnessPreference(){return spaciousness;}
string Client::getClientAppetitePreference(){return appetite;}



/*Helper Setter functions*/
void Client::setNewClient(bool aNewClient){isNewClient = aNewClient;}


/*Helper Getter functions*/
bool Client::getNewClient(){return isNewClient;}


void Client::print(){

    cout<< "CLient with ID: "<<ID<<endl;
    cout<<"\tPERSONAL INFO"<<endl;
    cout<<"\t============"<<endl;
    cout<<"\tFull Name: "<<firstName<<" "<<lastName<<"\tGender: "<<gender<<"\tNew client: "<<isNewClient<<"\tEdited: "<<edited<<endl;
    cout<< "\t\nCONTACT INFO"<<endl;
    cout<<"\t============"<<endl;
    cout<<"\tEmail: "<<email<<"\tPhoneNumber: "<<phoneNumber<<endl;

    cout<<"\n\tCHARACTER TRAITS"<<endl;
    cout<<"\t============================================================================"<<endl;
    cout<<"\tDiurnal-Noctural: "<<diurnalNocturnal<<"\tHabitat Preference: "<<habitatPreference<<endl;
    cout<<"\tAffectionism: "<<affectionism<<"\tActiveness: "<<activeness<<endl;

    cout<<"\n\tNON-PHYSICAL ATTRIBUTES PREFERENCES"<<endl;
    cout<<"\t==========================================================================="<<endl;
    cout<<"\tIndividualism: "<<individualism<<"\tIntelligence: "<<intelligence<<endl;
    cout<<"\tDiscipline: "<<discipline<<"\tAssertiveness: "<<assertiveness<<endl;
    cout<<"\tPlayfullness: "<<playfulness<<"\tEnergetic: "<<energetic<<endl;
    cout<<"\tSpaciousness: "<<spaciousness<<"\tAppetite: "<<appetite<<"\n"<<endl;

}



bool Client::getEdited(){return edited;}
void Client::setEdited(bool state){edited = state;}


void Client::incramentID(int oldID){

    ID+=oldID;
}

///for testing 

void Client::populateRanks(){


    string nonPhys1 = to_string(rand()%5+1);


    string nonPhys2 = to_string(rand()%5+1);
    string nonPhys3 = to_string(rand()%5+1);
    string nonPhys4 = to_string(rand()%5+1);
    string nonPhys5 = to_string(rand()%5+1);
    string nonPhys6 = to_string(rand()%5+1);
    string nonPhys7 = to_string(rand()%5+1);
    string nonPhys8 = to_string(rand()%5+1);
    string nonPhys9 = to_string(rand()%5+1);
    string nonPhys10 = to_string(rand()%5+1);
    string nonPhys11 = to_string(rand()%5+1);
    string nonPhys12 = to_string(rand()%5+1);


    Animal *dog = new Mammal("Dog","Dog");
    dog->setNonPhysicalAttributes(nonPhys1,nonPhys2,nonPhys3,nonPhys4,nonPhys5,nonPhys5,nonPhys7,nonPhys8,nonPhys9,nonPhys10,nonPhys11,nonPhys12);

    Animal *cat = new Mammal("Cat","Cat");
    Animal *goldfish = new Fish("Goldfish","Goldfish");
    Animal *betta = new Fish("Betta","Betta");
    Animal *salamander = new Amphibian("Salamander","Salamander");
    Animal *snake = new Reptile("Snake","Snake");
    Animal *lizard = new Reptile("Lizard","Lizard");
    Animal *frog = new Amphibian("Frog","Frog");
    Animal *parrot = new Bird("Parrot","Parrot");
    Animal *finch = new Bird("Finch","Finch");



}
