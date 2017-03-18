#include "stdafx.h"
#include "suggestion.h"


suggestion::suggestion()
{
	similarNum = 0;
}

//takes meals and shows other meals that use similar ingredients
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


suggestion::~suggestion()
{
}
