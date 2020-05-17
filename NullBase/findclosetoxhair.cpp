#include "Includes.h"


DWORD findPlayer()
{
	D3DXVECTOR3 w2s;
	DWORD player = NULL;
	double lowDistance = 9999;
	for (int i = 1; i < 32; i++)
	{
		DWORD address = Entity::getEntBase(i);
		if (Entity::isValid(address) && (Entity::getEntTeam(address) != LocalPlayer::getLocalTeam()))
		{
			int x = GetSystemMetrics(SM_CXSCREEN);
			int y = GetSystemMetrics(SM_CYSCREEN);
			WorldToScreen(Entity::getEntBonePos(address, 8), w2s, x, y);
			double distance = sqrt(pow((x / 2) - w2s.x, 2) + pow((x / 2) - w2s.y, 2));
			if (distance < lowDistance && Entity::getSpottedByMask(address))
			{
				lowDistance = distance;
				player = address;
			}
		}
	}
	return player;
}