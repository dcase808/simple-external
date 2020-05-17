#include "Includes.h"

void scianki(int i)
{
	DWORD ent = Entity::getEntBase(i);
	DWORD obj = Entity::getGlowObj();
	int idx = Entity::getGlowIndex(ent);
	int hp = Entity::getEntHp(ent);
	if (Entity::getSpotted(ent) == 0 && (Entity::getEntTeam(ent) != LocalPlayer::getLocalTeam()))
		Entity::setSpotted(ent, 1);
	if (hp < 25)
	{
		Entity::glowEsp(obj, idx, 255, 0, 0, 200);
		return;
	}
	else if (hp < 50)
	{
		Entity::glowEsp(obj, idx, 255, 100, 0, 200);
		return;
	}
	else if (hp < 75)
	{
		Entity::glowEsp(obj, idx, 255, 255, 0, 200);
		return;
	}
	else {
		Entity::glowEsp(obj, idx, 0, 255, 0, 200);
		return;
	}


}
void whs()
{
	for (int i = 1; i <= 32; i++)
	{
		scianki(i);
	}
}