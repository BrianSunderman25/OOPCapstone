#pragma once
#include "ingredientData.h"

using namespace std;

class mealData : public ingredientData
{
private:

public:
	mealData();

	vector<mealData> mealList;

	//ingredient list has been inherited
	vector<ingredientData> ingredientList;

	void insertMeal(mealData);

	string name;
	int numIngredients;
	int calories;
	int sugar;
	int fat;
	int protein;
	int saturatedFat;
	int sodium;

	void setName(string);
	void setNumIngredients(int);
	void setCalories(int);
	void setSugar(int);
	void setFat(int);
	void setProtein(int);
	void setSaturatedFat(int);
	void setSodium(int);

	void addIngredient(string, string);

	virtual ~mealData();
};

