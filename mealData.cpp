#include "stdafx.h"
#include "mealData.h"


mealData::mealData()
{
}

void mealData::insertMeal(mealData newMeal)
{
	mealList.push_back(newMeal);
}

void mealData::setName(string n)
{
	name = n;
}

void mealData::setNumIngredients(int num)
{
	numIngredients = num;
}

void mealData::setCalories(int cals)
{
	calories = cals;
}

void mealData::setSugar(int sug)
{
	sugar = sug;
}

void mealData::setFat(int f)
{
	fat = f;
}

void mealData::setProtein(int p)
{
	protein = p;
}

void mealData::setSaturatedFat(int sf)
{
	saturatedFat = sf;
}

void mealData::setSodium(int s)
{
	sodium = s;
}

void mealData::addIngredient(string n, string a)
{
	ingredientData newIngredient;
	newIngredient.name = n;
	newIngredient.amount = a;

	ingredientList.push_back(newIngredient);
}


mealData::~mealData()
{
}
