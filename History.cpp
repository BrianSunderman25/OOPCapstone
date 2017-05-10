#include "History.h"



History::History()
{
}

void History::saveHistory()
{
	ofstream readOut;

	readOut.open("saveFile.txt");

	
	if (readOut.is_open)
	{
		for (int i = 0; i < mealList.length(); i++)
		{
			readOut << mealList[i].numIngredients;
			readOut << mealList[i].calories;
			readOut << mealList[i].sugar;
			readOut << mealList[i].fat;
			readOut << mealList[i].protein;
			readOut << mealList[i].saturatedFat;
			readOut << mealList[i].sodium;
		}

	
	}

	readOut.close();

}

void History::loadHistory()
{
	ifstream readIn;

	readIn.open("saveFile.txt");

	if (readIn.is_open)
	{
		for (int i = 0; i < mealList.length(); i++)
		{
			readIn >> mealList[i].numIngredients;
			readIn >> mealList[i].calories;
			readIn >> mealList[i].sugar;
			readIn >> mealList[i].fat;
			readIn >> mealList[i].protein;
			readIn >> mealList[i].saturatedFat;
			readIn >> mealList[i].sodium;
		}


	}

	readIn.close
}
