#include "stdafx.h"
#include "suggestion.h"


suggestion::suggestion()
{

}

/*
returns a meal that is similar to the entered meal.
*/
mealData suggestion::singleSuggestion(mealData inputMeal)
{
	
	mealData currentHighest;
	int maxSimilar = 0;

	int mealListSize = mealList.size();
	int ingredientListSize = ingredientList.size();

	//loop through list and find meal with the most similar ingredients and return it
	for (int i = 0; i < mealListSize; i++)
	{
		int similarNum = 0;
		//loop through ingredients in a meal and tally how many ingredients are the same between inputMeal and the meal in the list
		for (int j = 0; j < ingredientListSize; j++)
		{
			if (mealList[i].ingredientList[j].name == inputMeal.name)
			{
				similarNum++;
			}
		}

		if (similarNum > maxSimilar)
		{
			currentHighest = mealList[i];
			
		}

		
	}

	return currentHighest;
}

//this method is going to take the inputted meal and give multiple suggestions based on similarities
void suggestion::dailySuggestion(mealData input)
{
	//to avoid duplicates
	first = singleSuggestion(input);

	second = singleSuggestion(first);

	third = singleSuggestion(second);

	
}


//takes meals and shows other meals that use similar ingredients

/*
string suggestion::getSuggestion(mealData meal)
{
	for (int i = 0; i < ingredientList.size; i++)
	{
		if (ingredientName == meal.ingredientList[i].ingredientName)
		{
			similarNum++;
		}
	}

	if (similarNum > 5)
	{
		return name;
	}

}
*/

suggestion::~suggestion()
{
}
