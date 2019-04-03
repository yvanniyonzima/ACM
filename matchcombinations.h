#ifndef MATCHCOMBINATIONS_H
#define MATCHCOMBINATIONS_H

#include "match.h"
#include <vector>
#include "animalheaders.h"
#include "client.h"

using namespace std;


class MatchCombinations
{

public:
    vector<vector<Match>> MakeMatchCombinations(vector<vector<string>>, vector<vector<Match>>);
    vector<vector<Match>> computeRank(Match);
    vector<Match> computeOptimalSet(vector<vector<Match>>);



private:

};

#endif // MATCHCOMBINATIONS_H
