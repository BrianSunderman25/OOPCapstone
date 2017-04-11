//This class will hold the data for ingredients and any functions that deal with the ingrediants
#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ingredientData
{
private:
	


public:
	ingredientData();

	//vector<ingredientData> ingredientList;

	string amount;			//ex.) "1/4 cup"
	string name;

	void setData(string, string);

	//void insertIngredient(ingredientData);

	~ingredientData();
};

