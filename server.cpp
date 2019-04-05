#include "server.h"
#include "client.h"
#include <QSqlQuery>
#include <iostream>
#include <QSqlRecord>
#include <QVariant>
#include <QDebug>
#define MAX_ANIMAL_SIZE 10
//Implementation from Salim Erradi - Persistent Storage

//SETTING NON PYHICAL ATTRIBUTES THROUGH OVERLOADING
//INCLUDING ATTRIBUTES OF EACH SUBCLASS INTO THE DATABASE

Server::Server(){}

Server::~Server(){}

void Server::openDataBase(const QString path){

    db = (QSqlDatabase::addDatabase("QSQLITE"));


    db.setDatabaseName(path);

    if (!db.open() ){
        qDebug("Database Connected : false");
    }
    else{
        qDebug("Database Connected : true");
    }


}

void Server::closeDataBase(){
    db.close();

}


/*
 *  this function updates the animal from linked lists(animal and client) to db.
*/
void Server::update(LinkedList<Animal>& listForA, LinkedList<Client>& listForC){

    //Init the qry (what database you wish to put in)


    //This is going to be the table you're going to store data into. Ex. animalDbTable or clientDbTable
    QSqlQuery qryForDb(db);

    //Traits that are same withing animal and client
    QString name1,firstName,lastName,age1,gender1,att1,att2,att3,att4,att5,att6,att7,att8,att9,att10,att11,att12;

    QString clientAtt1,clientAtt2,clientAtt3,clientAtt4;


    //Animal physical attributes
    QString finnsSize,bodyLength,bodyPattern,build;
    QString wingSpan,beakColour,beakLength;
    QString mammalHairLength,mammalHairColour;
    QString scaleType;

    int ID;

    //AnimalRanks
    int rank;

    //Traits that differ from animal and client
    QString spec1,height1,weight1,type1,colour1,email1,phoneNumber1;

    //Must call :text or :integer as placeholder so that you can bind value to that placeholder and update it to the database



     for (int i = 0; i < listForA.size(); i++){

         cout << listForA.get(i)->getAnimalID() << "\n";
         ID = listForA.get(i)->getAnimalID();
         name1 = QString::fromStdString(listForA.get(i)->getName());
         spec1 = QString::fromStdString(listForA.get(i)->getSpecies());
         age1 = QString::fromStdString(listForA.get(i)->getAge());
         gender1 = QString::fromStdString(listForA.get(i)->getGender());

         colour1 = QString::fromStdString(listForA.get(i)->getColour());
         height1 = QString::fromStdString(listForA.get(i)->getHeight());
         weight1 = QString::fromStdString(listForA.get(i)->getWeight());
         type1 = QString::fromStdString(listForA.get(i)->getType());

         att1 = QString::fromStdString(listForA.get(i)->getActiveness());
         att2 = QString::fromStdString(listForA.get(i)->getPlayfulness());
         att3 = QString::fromStdString(listForA.get(i)->getIndividualism());
         att4 = QString::fromStdString(listForA.get(i)->getAffectionism());
         att5 = QString::fromStdString(listForA.get(i)->getIntelligence());
         att6 = QString::fromStdString(listForA.get(i)->getDiscipline());
         att7 = QString::fromStdString(listForA.get(i)->getAssertiveness());
         att8 = QString::fromStdString(listForA.get(i)->getSpaciousness());
         att9 = QString::fromStdString(listForA.get(i)->getEnergetic());
         att10 = QString::fromStdString(listForA.get(i)->getDiurnalNocturnal());
         att11 = QString::fromStdString(listForA.get(i)->getHabitatPreference());
         att12 = QString::fromStdString(listForA.get(i)->getAppetite());

         build = QString::fromStdString(listForA.get(i)->getBuild());

         mammalHairColour = QString::fromStdString(listForA.get(i)->getMammalHairColour());
         mammalHairLength = QString::fromStdString(listForA.get(i)->getMammalHairLength());
         wingSpan = QString::fromStdString(listForA.get(i)->getWingSpan());
         beakColour = QString::fromStdString(listForA.get(i)->getBeakColour());
         beakLength = QString::fromStdString(listForA.get(i)->getBeakLength());

         scaleType = QString::fromStdString(listForA.get(i)->getScaleType());
         bodyLength = QString::fromStdString(listForA.get(i)->getLength());
         bodyPattern = QString::fromStdString(listForA.get(i)->getBodyPattern());

         finnsSize = QString::fromStdString(listForA.get(i)->getFinnsSize());

            //The basic info to be put
            //Checks the edited animal is one the of previous animals that were retrieved and the not the new Animal
            //Since its going to add it regardless
            if (listForA.get(i)->getEdited() ==true && listForA.get(i)->getNewAnimal() ==false){
                qryForDb.prepare("UPDATE animalDb SET Height=:h,Weight=:w,Activeness=:aT, Playfulness=:p, Individualism=:iD, Affectionism=:aF, Intelligence=:iT, Discipline=:dP,Assertiveness=:aS, Spaciousness=:sP,Energetic=:eG, Nocturnal=:nT, HabitatPreference=:hP,Appetite=:aP,FinSize=:fS,Build=:b, HairLength=:hL, HairColour=:hC,WingSpan=:wS,BeakLength=:bL,BeakColour=:bC,ScaleType=:sT,BodyPattern=:bP,BodyLength=:bLL WHERE ID=:i");

                qryForDb.bindValue(":i",ID);
                qryForDb.bindValue(":h",height1);
                qryForDb.bindValue(":w",weight1);
                qryForDb.bindValue(":aT",att1);
                qryForDb.bindValue(":p",att2);
                qryForDb.bindValue(":iD",att3);
                qryForDb.bindValue(":aF",att4);
                qryForDb.bindValue(":iT",att5);
                qryForDb.bindValue(":dP",att6);
                qryForDb.bindValue(":aS",att7);
                qryForDb.bindValue(":sP",att8);
                qryForDb.bindValue(":eG",att9);
                qryForDb.bindValue(":nT",att10);
                qryForDb.bindValue(":hP",att11);
                qryForDb.bindValue(":aP",att12);
                qryForDb.bindValue(":fS",finnsSize);
                qryForDb.bindValue(":b",build);
                qryForDb.bindValue(":hL",mammalHairLength);
                qryForDb.bindValue(":hC",mammalHairColour);
                qryForDb.bindValue(":wS",wingSpan);
                qryForDb.bindValue(":bL",beakLength);
                qryForDb.bindValue(":bC",beakColour);
                qryForDb.bindValue(":sT",scaleType);
                qryForDb.bindValue(":bP",bodyPattern);
                qryForDb.bindValue(":bLL",bodyLength);


                if (qryForDb.exec()){
                    qDebug("Edited CORRECT");
                }
                else{
                    qDebug("Edited NOT CORRECT");

                }
                //listForA.get(i)->incramentID();

            }

            else if (listForA.get(i)->getNewAnimal() ==true){

                //Must call :text or :integer as placeholder so that you can bind value to that placeholder and update it to the database


                qryForDb.prepare("INSERT INTO animalDb(ID,Name,Species,Age,Gender,Colour,Height,Weight,Type,Activeness, Playfulness, Individualism, Affectionism, Intelligence, Discipline,Assertiveness, Spaciousness,Energetic, Nocturnal, HabitatPreference,Appetite,FinSize,Build, HairLength, HairColour,WingSpan,BeakLength,BeakColour,ScaleType,BodyPattern,BodyLength)VALUES(:i,:n,:s,:a,:g,:c,:h,:w,:t,:a1,:a2,:a3,:a4,:a5,:a6,:a7,:a8,:a9,:a10,:a11,:a12,:fS,:b,:hL,:hC,:wS,:bL,:bC,:sT,:bP,:bLL)");

                qryForDb.bindValue(":i",ID);
                qryForDb.bindValue(":n",name1);
                qryForDb.bindValue(":s",spec1);
                qryForDb.bindValue(":a",age1);
                qryForDb.bindValue(":g",gender1);

                qryForDb.bindValue(":c",colour1);
                qryForDb.bindValue(":h",height1);
                qryForDb.bindValue(":w",weight1);
                qryForDb.bindValue(":t",type1);

                qryForDb.bindValue(":a1",att1);
                qryForDb.bindValue(":a2",att2);
                qryForDb.bindValue(":a3",att3);
                qryForDb.bindValue(":a4",att4);
                qryForDb.bindValue(":a5",att5);
                qryForDb.bindValue(":a6",att6);
                qryForDb.bindValue(":a7",att7);
                qryForDb.bindValue(":a8",att8);
                qryForDb.bindValue(":a9",att9);
                qryForDb.bindValue(":a10",att10);
                qryForDb.bindValue(":a11",att11);
                qryForDb.bindValue(":a12",att12);


                qryForDb.bindValue(":fS",finnsSize);
                qryForDb.bindValue(":b",build);
                qryForDb.bindValue(":hL",mammalHairLength);
                qryForDb.bindValue(":hC",mammalHairColour);

                qryForDb.bindValue(":wS",wingSpan);
                qryForDb.bindValue(":bC",beakColour);
                qryForDb.bindValue(":bL",beakLength);

                qryForDb.bindValue(":sT",scaleType);
                qryForDb.bindValue(":bP",bodyPattern);
                qryForDb.bindValue(":bLL",bodyLength);
\
                //listForA.get(i)->incramentID();

                if (qryForDb.exec()){
                    qDebug("Added!");
                }
                else{
                    qDebug("Not Added!");
                }
        }


    }


        for (int i = 0; i < listForC.size();i++){


            ID = listForC.get(i)->getClientId();
            firstName = QString::fromStdString(listForC.get(i)->getFirstName());
            age1 = QString::fromStdString(listForC.get(i)->getAge());
            lastName = QString::fromStdString(listForC.get(i)->getLastName());
            gender1 = QString::fromStdString(listForC.get(i)->getGender());

            email1 = QString::fromStdString(listForC.get(i)->getEmail());
            phoneNumber1 = QString::fromStdString(listForC.get(i)->getPhoneNumber());

            clientAtt1 = QString::fromStdString(listForC.get(i)->getClientActiveness());
            clientAtt2 = QString::fromStdString(listForC.get(i)->getClientAffectionism());
            clientAtt3 = QString::fromStdString(listForC.get(i)->getClientHabitaPreference());
            clientAtt4 = QString::fromStdString(listForC.get(i)->getClientDiurnalNocturnal());

            att1 = QString::fromStdString(listForC.get(i)->getClientPlayfulllnessPreference());
            att2 = QString::fromStdString(listForC.get(i)->getClientIndividualismPreference());
            att3 = QString::fromStdString(listForC.get(i)->getClientIntelligencePreference());
            att4 = QString::fromStdString(listForC.get(i)->getClientDisciplinePreference());
            att5 = QString::fromStdString(listForC.get(i)->getClientAssertivenessPreference());
            att6 = QString::fromStdString(listForC.get(i)->getClientSpaciousnessPreference());
            att7 = QString::fromStdString(listForC.get(i)->getClientEnergeticPreference());
            att8 = QString::fromStdString(listForC.get(i)->getClientAppetitePreference());



            if (listForC.get(i)->getEdited()==true){
                // && listForC.get(i)->getNewClient()==false
                cout<<"FOR EDITED CLIENT"<<endl;



                qryForDb.prepare("UPDATE clientDb SET Email=:e,PhoneNumber=:p, "
                                 "Activeness=:aT,Affectionism=:aF,HabibtatPreference=:hP,Nocturnal=:nT,"
                                 "DogRank=:dR,FurLength=:fL, FurColour=:fC,Build=:b,"
                                 "CatRank=:cR,FurLength2=:fL2, FurColour2=:fC2, Build2=:b2,"
                                 "SnakeRank=:sR,ScaleType=:sT, BodyLength=:bL, BodyPattern=:bP, "
                                 "LizardRank=:lR, ScaleType2=:sT2, BodyLength2=:bL2, BodyPattern2=:bP2, "
                                 "SalamanderRank=:sDR,Build3=:b3, BodyLength3=:bL3, BodyPattern3=:bP3, "
                                 "FrogRank=:frR, Build4=:b4, BodyLength4=:bL4, BodyPattern4=:bP4, "
                                 "BettaRank=:bR, FinSize=:fS, BodyPattern5=:bP5, BodyLength5=:bL5, "
                                 "GoldFishRank=:gR,FinSize2=:fS2, BodyPattern6=:bP6, BodyLength6=:bL6,"
                                 "ParakeetRank=:pR,WingSpan=:wS, BeakColour=:bC, BeakLength=:bL7, "
                                 "FinchRank=:fR, WingSpan2=:wS2, BeakColour2=:bC2, BeakLength2=:bL8,Playfulness=:a1, Individualism=:a2, Intelligence=:a3, Discipline=:a4, Assertiveness=:a5, Spaciousness=:a6,"
                                 "Energetic=:a7, Appetite=:a8 WHERE ID=:i");

                qryForDb.bindValue(":i",ID);
                qryForDb.bindValue(":e",email1);
                qryForDb.bindValue(":p",phoneNumber1);
                qryForDb.bindValue("a",age1);

                qryForDb.bindValue(":aT",clientAtt1);
                qryForDb.bindValue(":aF",clientAtt2);
                qryForDb.bindValue(":hP",clientAtt3);
                qryForDb.bindValue(":nT",clientAtt4);

                qryForDb.bindValue(":a1",att1);
                qryForDb.bindValue(":a2",att2);
                qryForDb.bindValue(":a3",att3);
                qryForDb.bindValue(":a4",att4);
                qryForDb.bindValue(":a5",att5);
                qryForDb.bindValue(":a6",att6);
                qryForDb.bindValue(":a7",att7);
                qryForDb.bindValue(":a8",att8);

               // listForC.get(i)->incramentID();

                //Iterates through the ranks and retreives correct info
                for (int j=0 ;j < MAX_ANIMAL_SIZE;j++){

                    rank = listForC.get(i)->getAnimalRank(listForC.get(i)->ranks.get(j)->getSpecies());

                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "dog" || listForC.get(i)->ranks.get(j)->getSpecies() == "cat"){
                        mammalHairLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getMammalHairLength());
                        mammalHairColour = QString::fromStdString(listForC.get(i)->ranks.get(j)->getMammalHairColour());
                        build = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBuild());


                      if (listForC.get(i)->ranks.get(j)->getSpecies() == "dog"){
                            qryForDb.bindValue(":dR",rank);
                            qryForDb.bindValue(":fL",mammalHairLength);
                            qryForDb.bindValue(":fC",mammalHairColour);
                            qryForDb.bindValue(":b",build);

                        }
                        else{

                            qryForDb.bindValue(":cR",rank);
                            qryForDb.bindValue(":fL2",mammalHairLength);
                            qryForDb.bindValue(":fC2",mammalHairColour);
                            qryForDb.bindValue(":b2",build);

                        }

                    }


                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "snake" || listForC.get(i)->ranks.get(j)->getSpecies() == "lizard"){
                        scaleType = QString::fromStdString(listForC.get(i)->ranks.get(j)->getScaleType());
                        bodyLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getLength());
                        bodyPattern = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBodyPattern());
                        if (listForC.get(i)->ranks.get(j)->getSpecies() == "snake"){

                            qryForDb.bindValue(":sR",rank);
                            qryForDb.bindValue(":sT",scaleType);
                            qryForDb.bindValue(":bL",bodyLength);
                            qryForDb.bindValue(":bP",bodyPattern);
                        }
                        else{
                            qryForDb.bindValue(":lR",rank);
                            qryForDb.bindValue(":sT2",scaleType);
                            qryForDb.bindValue(":bL2",bodyLength);
                            qryForDb.bindValue(":bP2",bodyPattern);

                        }




                    }
                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "frog" || listForC.get(i)->ranks.get(j)->getSpecies() == "salamander"){
                        bodyLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getLength());
                        bodyPattern = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBodyPattern());
                        build = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBuild());
                        if (listForC.get(i)->ranks.get(j)->getSpecies() == "frog"){
                            qryForDb.bindValue(":frR",rank);
                            qryForDb.bindValue(":b4",build);
                            qryForDb.bindValue(":bL4",bodyLength);
                            qryForDb.bindValue(":bP4",bodyPattern);

                        }
                        else{
                            qryForDb.bindValue(":sDR",rank);
                            qryForDb.bindValue(":b3",build);
                            qryForDb.bindValue(":bL3",bodyLength);
                            qryForDb.bindValue(":bP3",bodyPattern);
                        }


                    }
                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "parrot" || listForC.get(i)->ranks.get(j)->getSpecies() == "finch"){
                        wingSpan = QString::fromStdString(listForC.get(i)->ranks.get(j)->getWingSpan());
                        beakColour = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBeakColour());
                        beakLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBeakLength());

                        if (listForC.get(i)->ranks.get(j)->getSpecies() == "parrot"){
                            qryForDb.bindValue(":pR",rank);
                            qryForDb.bindValue(":wS",wingSpan);
                            qryForDb.bindValue(":bC",beakColour);
                            qryForDb.bindValue(":bL7",beakLength);

                        }
                        else{
                            qryForDb.bindValue(":fR",rank);
                            qryForDb.bindValue(":wS2",wingSpan);
                            qryForDb.bindValue(":bC2",beakColour);
                            qryForDb.bindValue(":bL8",beakLength);
                        }



                    }
                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "betta" || listForC.get(i)->ranks.get(j)->getSpecies() == "goldfish"){
                        finnsSize = QString::fromStdString(listForC.get(i)->ranks.get(j)->getFinnsSize());
                        bodyLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getLength());
                        bodyPattern = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBodyPattern());
                        if (listForC.get(i)->ranks.get(j)->getSpecies() == "betta"){
                            qryForDb.bindValue(":bR",rank);
                            qryForDb.bindValue(":fS",finnsSize);
                            qryForDb.bindValue(":bP5",bodyPattern);
                            qryForDb.bindValue(":bL5",bodyLength);

                        }
                        else{
                            qryForDb.bindValue(":gR",rank);
                            qryForDb.bindValue(":fS2",finnsSize);
                            qryForDb.bindValue(":bP6",bodyPattern);
                            qryForDb.bindValue(":bL6",bodyLength);

                        }


                    }

            }
           }


        else if (listForC.get(i)->getNewClient() == true){
                cout<<"FOR NEW CLIENT"<<endl;

            qryForDb.prepare("INSERT INTO clientDb(ID,FirstName,LastName,Age,"
                             "Gender,Email,PhoneNumber,"
                             "Activeness,Affectionism,HabibtatPreference,Nocturnal,"
                             "DogRank,FurLength, FurColour, Build,"
                             "CatRank,FurLength2, FurColour2, Build2,"
                             "SnakeRank,ScaleType, BodyLength, BodyPattern,"
                             "LizardRank, ScaleType2, BodyLength2, BodyPattern2, "
                             "SalamanderRank,Build3, BodyLength3, BodyPattern3, "
                             "FrogRank, Build4, BodyLength4, BodyPattern4, "
                             "BettaRank, FinSize, BodyPattern5, BodyLength5, "
                             "GoldFishRank,FinSize2, BodyPattern6, BodyLength6,"
                             "ParakeetRank,WingSpan, BeakColour, BeakLength, "
                             "FinchRank, WingSpan2, BeakColour2, BeakLength2,Playfulness, Individualism,  Intelligence , Discipline ,Assertiveness , Spaciousness ,Energetic,Appetite)"
                             "VALUES(:i,:fn,:ln,:a,:g,:e,:p,:aC,:aF,:hP,:nT,"
                             ":dR,:fL,:fC,:b,:cR,:fL2,:fC2,:b2,:sR,:sT,:bL,:bP,:lR,:sT2,:bL2,:bP2,:sDR,:b3,:bL3,:bP3,:frR,:b4,:bL4,:bP4,:bR,:fS,:bP5,:bL5,:gR,:fS2,:bP6,:bL6,:pR,:wS,:bC,:bL7,:fR,:wS2,:bC2,"
                             ":bL8,:a1,:a2,:a3,:a4,:a5,:a6,:a7,:a8)");


            qryForDb.bindValue(":i",ID);
            qryForDb.bindValue(":fn",firstName);
            qryForDb.bindValue(":ln",lastName);
            qryForDb.bindValue(":a",age1);
            qryForDb.bindValue(":g",gender1);
            qryForDb.bindValue(":e",email1);
            qryForDb.bindValue(":p",phoneNumber1);


            qryForDb.bindValue(":aC",clientAtt1);
            qryForDb.bindValue(":aF",clientAtt2);
            qryForDb.bindValue(":hP",clientAtt3);
            qryForDb.bindValue(":nT",clientAtt4);

            qryForDb.bindValue(":a1",att1);
            qryForDb.bindValue(":a2",att2);
            qryForDb.bindValue(":a3",att3);
            qryForDb.bindValue(":a4",att4);
            qryForDb.bindValue(":a5",att5);
            qryForDb.bindValue(":a6",att6);
            qryForDb.bindValue(":a7",att7);
            qryForDb.bindValue(":a8",att8);


            //listForC.get(i)->incramentID();

            //Iterates through the ranks and retreives correct info
            for (int j=0 ;j < MAX_ANIMAL_SIZE;j++){

                rank = listForC.get(i)->getAnimalRank(listForC.get(i)->ranks.get(j)->getSpecies());

                if (listForC.get(i)->ranks.get(j)->getSpecies() == "dog" || listForC.get(i)->ranks.get(j)->getSpecies() == "cat"){
                    mammalHairLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getMammalHairLength());
                    mammalHairColour = QString::fromStdString(listForC.get(i)->ranks.get(j)->getMammalHairColour());
                    build = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBuild());




                  if (listForC.get(i)->ranks.get(j)->getSpecies() == "dog"){
                        qryForDb.bindValue(":dR",rank);
                        qryForDb.bindValue(":fL",mammalHairLength);
                        qryForDb.bindValue(":fC",mammalHairColour);
                        qryForDb.bindValue(":b",build);

                    }
                    else{

                        qryForDb.bindValue(":cR",rank);
                        qryForDb.bindValue(":fL2",mammalHairLength);
                        qryForDb.bindValue(":fC2",mammalHairColour);
                        qryForDb.bindValue(":b2",build);

                    }

                }


                if (listForC.get(i)->ranks.get(j)->getSpecies() == "snake" || listForC.get(i)->ranks.get(j)->getSpecies() == "lizard"){
                    scaleType = QString::fromStdString(listForC.get(i)->ranks.get(j)->getScaleType());
                    bodyLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getLength());
                    bodyPattern = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBodyPattern());
                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "snake"){



                        qryForDb.bindValue(":sR",rank);
                        qryForDb.bindValue(":sT",scaleType);
                        qryForDb.bindValue(":bL",bodyLength);
                        qryForDb.bindValue(":bP",bodyPattern);
                    }
                    else{
                        qryForDb.bindValue(":lR",rank);
                        qryForDb.bindValue(":sT2",scaleType);
                        qryForDb.bindValue(":bL2",bodyLength);
                        qryForDb.bindValue(":bP2",bodyPattern);

                    }




                }
                if (listForC.get(i)->ranks.get(j)->getSpecies() == "frog" || listForC.get(i)->ranks.get(j)->getSpecies() == "salamander"){
                    bodyLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getLength());
                    bodyPattern = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBodyPattern());
                    build = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBuild());
                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "frog"){



                        qryForDb.bindValue(":frR",rank);
                        qryForDb.bindValue(":b4",build);
                        qryForDb.bindValue(":bL4",bodyLength);
                        qryForDb.bindValue(":bP4",bodyPattern);

                    }
                    else{
                        qryForDb.bindValue(":sDR",rank);
                        qryForDb.bindValue(":b3",build);
                        qryForDb.bindValue(":bL3",bodyLength);
                        qryForDb.bindValue(":bP3",bodyPattern);
                    }


                }
                if (listForC.get(i)->ranks.get(j)->getSpecies() == "parrot" || listForC.get(i)->ranks.get(j)->getSpecies() == "finch"){
                    wingSpan = QString::fromStdString(listForC.get(i)->ranks.get(j)->getWingSpan());
                    beakColour = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBeakColour());
                    beakLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBeakLength());

                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "parrot"){


                        qryForDb.bindValue(":pR",rank);
                        qryForDb.bindValue(":wS",wingSpan);
                        qryForDb.bindValue(":bC",beakColour);
                        qryForDb.bindValue(":bL7",beakLength);

                    }
                    else{
                        qryForDb.bindValue(":fR",rank);
                        qryForDb.bindValue(":wS2",wingSpan);
                        qryForDb.bindValue(":bC2",beakColour);
                        qryForDb.bindValue(":bL8",beakLength);
                    }



                }
                if (listForC.get(i)->ranks.get(j)->getSpecies() == "betta" || listForC.get(i)->ranks.get(j)->getSpecies() == "goldfish"){
                    finnsSize = QString::fromStdString(listForC.get(i)->ranks.get(j)->getFinnsSize());
                    bodyLength = QString::fromStdString(listForC.get(i)->ranks.get(j)->getLength());
                    bodyPattern = QString::fromStdString(listForC.get(i)->ranks.get(j)->getBodyPattern());
                    if (listForC.get(i)->ranks.get(j)->getSpecies() == "betta"){



                        qryForDb.bindValue(":bR",rank);
                        qryForDb.bindValue(":fS",finnsSize);
                        qryForDb.bindValue(":bP5",bodyPattern);
                        qryForDb.bindValue(":bL5",bodyLength);

                    }
                    else{
                        qryForDb.bindValue(":gR",rank);
                        qryForDb.bindValue(":fS2",finnsSize);
                        qryForDb.bindValue(":bP6",bodyPattern);
                        qryForDb.bindValue(":bL6",bodyLength);

                    }


                }

        }
        }
      }
   }


void Server::retrieve(LinkedList<Animal>& listForA,LinkedList<Client>& listForC){

    QSqlQuery qryForDb("SELECT * FROM animalDb",db);

    string qry1,qry2,qry3,qry4,qry5,qry6,qry7,qry8,qry9,qry10,qry11,qry12,qry13,qry14,qry15,qry16,qry17,qry18,qry19,qry20,qry21,qry22,qry23,qry24,qry25,qry26,qry27,qry28,qry29,qry30;
    //Traits that are the same for animal and clients
    QString qryValForName,qryValForFirstName,qryValForLastName,qryValForAge,qryValForGender,qryValForAtt1,qryValForAtt2,qryValForAtt3,qryValForAtt4,qryValForAtt5,qryValForAtt6,qryValForAtt7,qryValForAtt8,qryValForAtt9,qryValForAtt10,qryValForAtt11,qryValForAtt12;
    //Traits that seperate them
    QString qryValForSpecies,qryValForColour,qryValForheight,qryValForweight,qryValForType,qryValForEmail,qryValForPhoneNumber;


    QString qryValForClientAtt1,qryValForClientAtt2,qryValForClientAtt3,qryValForClientAtt4;


    int animalCount = 0;
    int IDcount = 0;
    int qryID;


    int rank;

    bool incrament = false;

    //string dogInt,catString,salamanderString,frogString,bettaString,goldFishString,snakeString,lizardString,finchString,parakreetString;
    //Traits for animal specific
    QString qryValForFinSize,qryValForBuild,qryValForHairLength,qryValForHairColour,qryValForWingSpan,qryValForBeakLength,qryValForBeakColour,qryValForScaleType,qryValForBodyPattern,qryValForBodyLength;

//Used to iterate to next record on database

    while((qryForDb.next())){


        //index at value specifies which row position to look at 0 can be for name 1 can for age
            qryID = qryForDb.value(0).toInt();
            qryValForName = qryForDb.value(1).toString();
            qryValForSpecies = qryForDb.value(2).toString();
            qryValForAge = qryForDb.value(3).toString();
            qryValForGender = qryForDb.value(4).toString();
            qryValForColour = qryForDb.value(5).toString();
            qryValForheight = qryForDb.value(6).toString();
            qryValForweight = qryForDb.value(7).toString();
            qryValForType = qryForDb.value(8).toString();
            qryValForAtt1 = qryForDb.value(9).toString();
            qryValForAtt2 = qryForDb.value(10).toString();
            qryValForAtt3 = qryForDb.value(11).toString();
            qryValForAtt4 = qryForDb.value(12).toString();
            qryValForAtt5 = qryForDb.value(13).toString();
            qryValForAtt6 = qryForDb.value(14).toString();
            qryValForAtt7 = qryForDb.value(15).toString();
            qryValForAtt8 = qryForDb.value(16).toString();
            qryValForAtt9 = qryForDb.value(17).toString();
            qryValForAtt10 = qryForDb.value(18).toString();
            qryValForAtt11= qryForDb.value(19).toString();
            qryValForAtt12 = qryForDb.value(20).toString();

            qryValForFinSize = qryForDb.value(21).toString();
            qryValForBuild = qryForDb.value(22).toString();
            qryValForHairLength = qryForDb.value(23).toString();
            qryValForHairColour = qryForDb.value(24).toString();
            qryValForWingSpan = qryForDb.value(25).toString();
            qryValForBeakLength = qryForDb.value(26).toString();
            qryValForBeakColour = qryForDb.value(27).toString();
            qryValForScaleType = qryForDb.value(28).toString();
            qryValForBodyPattern = qryForDb.value(29).toString();
            qryValForBodyLength = qryForDb.value(30).toString();


            //Converts Qstring to string
            qry1 = qryValForName.toStdString();
            qry2 = qryValForSpecies.toStdString();
            qry3= qryValForAge.toStdString();
            qry4 = qryValForGender.toStdString();
            qry5 = qryValForColour.toStdString();
            qry6 = qryValForheight.toStdString();
            qry7 = qryValForweight.toStdString();
            qry8 = qryValForType.toStdString();

            qry9 = qryValForAtt1.toStdString();
            qry10 = qryValForAtt2.toStdString();
            qry11= qryValForAtt3.toStdString();
            qry12 = qryValForAtt4.toStdString();
            qry13 = qryValForAtt5.toStdString();
            qry14 = qryValForAtt6.toStdString();
            qry15 = qryValForAtt7.toStdString();
            qry16 = qryValForAtt8.toStdString();
            qry17 = qryValForAtt9.toStdString();
            qry18 = qryValForAtt10.toStdString();
            qry19 = qryValForAtt11.toStdString();
            qry20 = qryValForAtt12.toStdString();

            qry21 = qryValForFinSize.toStdString();
            qry22 = qryValForBuild.toStdString();
            qry23 = qryValForWingSpan.toStdString();
            qry24 = qryValForBeakColour.toStdString();
            qry25 = qryValForBeakLength.toStdString();
            qry26 = qryValForHairColour.toStdString();
            qry27 = qryValForHairLength.toStdString();
            qry28 = qryValForScaleType.toStdString();
            qry29 =  qryValForBodyPattern.toStdString();
            qry30 = qryValForBodyLength.toStdString();


            //Dynmically allocations that new string need to call new to have different memeory address for every val

            //Check to see if its a mammal
            Animal *newAnimal;
            if (qry8 == "dog" || qry8 == "cat"){
                newAnimal = new Mammal(qry1,qry2);
                newAnimal->setPhysCharacteristics(qry22,qry27,qry26);

            }
            else if (qry8 == "finch" || qry8 == "parrot"){
                newAnimal = new Bird(qry1,qry2);
                newAnimal->setPhysCharacteristics(qry23,qry25,qry24);

            }
            else if (qry8 == "snake" || qry8 == "lizard"){

                newAnimal = new Reptile(qry1,qry2);
                newAnimal->setPhysCharacteristics(qry30,qry29,qry28);
            }

            else if (qry8 == "salamander" || qry8 == "frog"){
                newAnimal = new Amphibian(qry1,qry2);
                newAnimal->setPhysCharacteristics(qry29,qry30,qry22);

            }

            else{
                newAnimal = new Fish(qry1,qry2);
                newAnimal->setPhysCharacteristics(qry29,qry30,qry21);


            }
            cout << newAnimal->getAnimalID()<<endl;
            newAnimal->setID(qryID);

            newAnimal->Animal::setBasicInfo(qry3,qry4,qry5,qry6,qry7,qry8);
            newAnimal->setNonPhysicalAttributes(qry9,qry10,qry11,qry12,qry13,qry14,qry15,qry16,qry17,qry18,qry19,qry20);
            listForA.add(&newAnimal);


    }

   // listForA.print();

    qryForDb = db.exec("SELECT * FROM clientDb");


    while((qryForDb.next())){

        Client *c1;


        qryID = qryForDb.value(0).toInt();
        qryValForFirstName = qryForDb.value(1).toString();
        qryValForLastName = qryForDb.value(2).toString();
        qryValForAge = qryForDb.value(3).toString();
        qryValForGender = qryForDb.value(4).toString();
        qryValForEmail = qryForDb.value(5).toString();
        qryValForPhoneNumber = qryForDb.value(6).toString();

        qryValForAtt1 = qryForDb.value(51).toString();
        qryValForAtt2 = qryForDb.value(52).toString();
        qryValForAtt3 = qryForDb.value(53).toString();
        qryValForAtt4 = qryForDb.value(54).toString();
        qryValForAtt5 = qryForDb.value(55).toString();
        qryValForAtt6 = qryForDb.value(56).toString();
        qryValForAtt7 = qryForDb.value(57).toString();
        qryValForAtt8 = qryForDb.value(58).toString();


        qryValForClientAtt1 = qryForDb.value(7).toString();
        qryValForClientAtt2 = qryForDb.value(8).toString();
        qryValForClientAtt3 = qryForDb.value(9).toString();
        qryValForClientAtt4 = qryForDb.value(10).toString();

        qry1 = qryValForFirstName.toStdString();
        qry2 = qryValForLastName.toStdString();
        qry3 = qryValForAge.toStdString();
        qry4 = qryValForGender.toStdString();
        qry5 = qryValForEmail.toStdString();
        qry6 = qryValForPhoneNumber.toStdString();

        qry7 = qryValForClientAtt1.toStdString();
        qry8 = qryValForClientAtt2.toStdString();
        qry9= qryValForClientAtt3.toStdString();
        qry10 = qryValForClientAtt4.toStdString();

        qry11 = qryValForAtt1.toStdString();
        qry12 = qryValForAtt2.toStdString();
        qry13 = qryValForAtt3.toStdString();
        qry14 = qryValForAtt4.toStdString();
        qry15 = qryValForAtt5.toStdString();
        qry16 = qryValForAtt6.toStdString();
        qry17 = qryValForAtt7.toStdString();
        qry18 = qryValForAtt8.toStdString();


        c1 = new Client(qry1,qry2,qry3,qry5,qry6,qry4);
        c1->setCharacterTraits(qry7,qry8,qry10,qry9);
        c1->setNonPhysPreferences(qry12,qry13,qry14,qry15,qry11,qry17,qry16,qry18);
        c1->setClientId(qryID);

        //ORDERING OF RANKS AND STORING CORRECT ANIMAL DEPENDING ON THEIR ATTRIBUTES
       for (int i = 0; i < 10; i++){

            Animal *newAnimal;

           if (i == 0){
                rank =  qryForDb.value(11).toInt();
                qryValForHairLength = qryForDb.value(12).toString();
                qryValForHairColour = qryForDb.value(13).toString();
                qryValForBuild = qryForDb.value(14).toString();
                qry11 = qryValForHairLength.toStdString();
                qry12 = qryValForHairColour.toStdString();
                qry13 = qryValForBuild.toStdString();
                newAnimal = new Mammal("dog","dog");

            }
            else if (i == 1){
                rank =  qryForDb.value(15).toInt();
                qryValForHairLength = qryForDb.value(16).toString();
                qryValForHairColour = qryForDb.value(17).toString();
                qryValForBuild = qryForDb.value(18).toString();
                qry11 = qryValForHairLength.toStdString();
                qry12 = qryValForHairColour.toStdString();
                qry13 = qryValForBuild.toStdString();
                newAnimal = new Mammal("cat","cat");

            }
           else if (i == 2){
                rank =  qryForDb.value(19).toInt();
                qryValForScaleType = qryForDb.value(20).toString();
                qryValForBodyLength = qryForDb.value(21).toString();
                qryValForBodyPattern = qryForDb.value(22).toString();
                qry11 = qryValForBodyLength.toStdString();
                qry12 = qryValForBodyPattern.toStdString();
                qry13 = qryValForScaleType.toStdString();
                newAnimal = new Reptile("snake","snake");


            }
            else if (i == 3){
                rank =  qryForDb.value(23).toInt();
                qryValForScaleType = qryForDb.value(24).toString();
                qryValForBodyLength = qryForDb.value(25).toString();
                qryValForBodyPattern = qryForDb.value(26).toString();
                qry11 = qryValForBodyPattern.toStdString();
                qry12 = qryValForBodyLength.toStdString();
                qry13 = qryValForScaleType.toStdString();
                newAnimal = new Reptile("lizard","lizard");

            }
            else if (i == 4){
                rank =  qryForDb.value(27).toInt();
                qryValForBuild = qryForDb.value(28).toString();
                qryValForBodyLength = qryForDb.value(29).toString();
                qryValForBodyPattern = qryForDb.value(30).toString();
                qry11 = qryValForBodyPattern.toStdString();
                qry12 = qryValForBodyLength.toStdString();
                qry13 = qryValForBuild.toStdString();
                newAnimal = new Amphibian("salamander","salamander");

            }
            else if (i == 5){
                rank =  qryForDb.value(31).toInt();
                qryValForBuild = qryForDb.value(32).toString();
                qryValForBodyLength = qryForDb.value(33).toString();
                qryValForBodyPattern = qryForDb.value(34).toString();
                qry11 = qryValForBodyPattern.toStdString();
                qry12 = qryValForBodyLength.toStdString();
                qry13 = qryValForBuild.toStdString();
                newAnimal = new Amphibian("frog","frog");

            }
            else if (i == 6){
                rank =  qryForDb.value(35).toInt();
                qryValForFinSize = qryForDb.value(36).toString();
                qryValForBodyPattern = qryForDb.value(37).toString();
                qryValForBodyLength = qryForDb.value(38).toString();
                qry11 = qryValForBodyPattern.toStdString();
                qry12 = qryValForBodyLength.toStdString();
                qry13 = qryValForFinSize.toStdString();
                newAnimal = new Fish("betta","betta");

            }
            else if (i == 7){
                rank =  qryForDb.value(39).toInt();
                qryValForFinSize = qryForDb.value(40).toString();
                qryValForBodyPattern = qryForDb.value(41).toString();
                qryValForBodyLength = qryForDb.value(42).toString();
                qry11 = qryValForBodyPattern.toStdString();
                qry12 = qryValForBodyLength.toStdString();
                qry13 = qryValForFinSize.toStdString();
                newAnimal = new Fish("goldfish","goldfish");

            }
            else if (i == 8){
                rank =  qryForDb.value(43).toInt();
                qryValForWingSpan = qryForDb.value(44).toString();
                qryValForBeakColour = qryForDb.value(45).toString();
                qryValForBeakLength = qryForDb.value(46).toString();
                qry11 = qryValForBeakLength.toStdString();
                qry12 = qryValForBeakColour.toStdString();
                qry13 = qryValForWingSpan.toStdString();
                newAnimal = new Bird("parrot","parrot");

            }
            else if (i == 9){
                rank = qryForDb.value(47).toInt();
                qryValForWingSpan = qryForDb.value(48).toString();
                qryValForBeakColour = qryForDb.value(49).toString();
                qryValForBeakLength = qryForDb.value(50).toString();
                qry11 = qryValForBeakLength.toStdString();
                qry12 = qryValForBeakColour.toStdString();
                qry13 = qryValForWingSpan.toStdString();
                newAnimal = new Bird("finch","finch");


            }

                c1->ranks.add(&newAnimal);
                    cout<<"Rank when retrieving: "<<rank<<endl;
                c1->ranks.setRank(rank,newAnimal->getSpecies());
                c1->ranks.get(i)->setPhysCharacteristics(qry11,qry12,qry13);




        }

      // c1->incramentID();

        listForC.add(&c1);
        c1->print();


}
}



