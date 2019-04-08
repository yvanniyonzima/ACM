OPT = -Wall

testFile: testFile.o animal.o animalCareShelter.o bird.o mammal.o reptile.o amphibian.o fish.o client.o match.o matchIdCombination.o matchcombinations.o compatibility.o storagecenter.o acm.o
	g++ $(OPT) -o testFile testFile.o animal.o animalCareShelter.o bird.o mammal.o reptile.o amphibian.o fish.o client.o match.o matchIdCombination.o matchcombinations.o compatibility.o storagecenter.o acm.o

testFile.o: testFile.o animal.h animalCareShelter.h bird.h mammal.h reptile.h amphibian.h fish.h client.h matchcombinations.h matchIdCombination.h compatibility.h storagecenter.h acm.h
	g++ $(OPT) -c testFile.cpp

animalCareShelter.o: animalCareShelter.h animalCareShelter.cpp
	g++ $(OPT) -c animalCareShelter.cpp

client.o: client.h client.cpp
	g++ $(OPT) -c client.h client.cpp

animal.o: animal.h animal.cpp
	g++ $(OPT) -c animal.cpp

mammal.o: mammal.h mammal.cpp
	g++ $(OPT) -c mammal.cpp

bird.o: bird.h bird.cpp
	g++ $(OPT) -c bird.cpp

amphibian.o: amphibian.h amphibian.cpp
	g++ $(OPT) -c amphibian.cpp

reptile.o: reptile.h reptile.cpp
	g++ $(OPT) -c reptile.cpp

fish.o: fish.h fish.cpp
	g++ $(OPT) -c fish.cpp

match.o: match.h animal.h client.h match.cpp
	g++ $(OPT) -c match.cpp

matchIdCombination.o: matchIdCombination.h matchIdCombination.cpp
	g++ $(OPT) -c matchIdCombination.cpp

matchcombinations.o: matchcombinations.h matchcombinations.cpp
	g++ $(OPT) -c matchcombinations.cpp

compatibility.o: compatibility.h compatibility.cpp
	g++ $(OPT) -c compatibility.cpp

acm.o: acm.h acm.cpp
	g++ $(OPT) -c acm.cpp

storagecenter.o: storagecenter.h storagecenter.cpp
	g++ $(OPT) -c storagecenter.cpp

clean:
	rm -f *.o testFile
