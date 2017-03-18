#pragma once
#include "mealData.h"

using namespace std;

class suggestion :public mealData
{
private:
	string singleSuggestion;
	int similarNum;
	

public:
	suggestion();
	string getSuggestion(mealData);


	virtual ~suggestion();
};

