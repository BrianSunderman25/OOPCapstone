
#include <iostream>
#include <string>
#include <fstream>
#include "ingredientData.h"
#include "mealData.h"


using namespace std;

class History 
{
public:
	History();

	void saveHistory();
	void loadHistory();
};

