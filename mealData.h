#pragma once
#include "ingredientData.h"

using namespace std;

class mealData : public ingredientData
{
private:

public:
	mealData();

	//copy constructor
	mealData(const mealData &obj);

	vector<mealData> mealList;

	//ingredient list that the meal has
	vector<ingredientData> ingredientList;

	//puts a meal in the vector
	void insertMeal(mealData);

	//values for the meal
	string meal_name;
	int numIngredients;
	int calories;
	int sugar;
	int fat;
	int protein;
	int saturatedFat;
	int sodium;

	//functions that set 
	void setName(string);
	void setNumIngredients(int);
	void setCalories(int);
	void setSugar(int);
	void setFat(int);
	void setProtein(int);
	void setSaturatedFat(int);
	void setSodium(int);

	//pushes an ingredient into the ingredient list
	void addIngredient(string, string);

	virtual ~mealData();
};

