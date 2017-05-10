#pragma once
#include "mealData.h"

using namespace std;

class suggestion : public mealData
{
private:
	

public:
	suggestion();

	mealData singleSuggestion(mealData);
	void dailySuggestion(mealData);
	mealData first;
	mealData second;
	mealData third;

	virtual ~suggestion();
};

