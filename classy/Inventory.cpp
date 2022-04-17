#include"Inventory.h"
#include"time.h"

void Inventory::setItem()
{ 
	srand(time(NULL));
	int x = rand() % 5;

	item = list[x];

}

string Inventory::getItem() const
{
	return item;
}

void Inventory::setGold()
{
	srand(time(NULL));
	gold = rand() % 500 + (lvl * 7);

}

void Inventory::setWeight()
{
	srand(time(NULL));
	weight = rand() % 50 + (lvl + 2);
}

void Inventory::setDamage()
{
	srand(time(NULL));
	

	if(lvl > 1 && lvl < 5)
	{
		die = rand() % 5 + 1;
		sides = 4;
	}

	else if(lvl > 4 && lvl < 9)
	{
		die = rand() % 5 + 1;
		sides = 8;
	}

	else if (lvl > 8 && lvl < 13)
	{
		die = rand() % 5 + 1;
		sides = 10;
	}

	else if (lvl > 12 && lvl < 17)
	{
		die = rand() % 5 + 1;
		sides = 12;
	}

	else if (lvl > 16 && lvl < 21)
	{
		die = rand() % 5 + 1;
		sides = 20;
	}
	else {
	die = 0;
	sides = 0;
}

}


int Inventory::getGold() const
{
	return gold;
}

int Inventory::getWeight() const
{
	return weight;
}

int Inventory::getLevel() const
{
	return lvl;
}

int Inventory::getDie() const
{
	return die;
	 
}
int Inventory::getSides() const
{
	return sides;
}

