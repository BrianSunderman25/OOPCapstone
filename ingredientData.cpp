#include "stdafx.h"
#include "ingredientData.h"


ingredientData::ingredientData()
{
}

void ingredientData::setData(string n, string a)
{
	name = n;
	amount = a;

}


ingredientData::~ingredientData()
{
}

/*
void ingredientData::insertIngredient(ingredientData newInsert)
{
	ingredientList.push_back(newInsert);
}
*/