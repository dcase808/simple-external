#include "Includes.h"

void aimbot(DWORD player)
{
	D3DXVECTOR3 w2s;
	if (player != NULL && GetAsyncKeyState(0x58))
	{
		int x = GetSystemMetrics(SM_CXSCREEN);
		int y = GetSystemMetrics(SM_CYSCREEN);
		WorldToScreen(Entity::getEntBonePos(player, 8), w2s, x, y);
		float xhead = (w2s.x - x / 2) / 2;
		float yhead = (w2s.y - y / 2) / 2;
		INPUT input;
		input.type = INPUT_MOUSE;
		input.mi.mouseData = 0;
		input.mi.time = 0;
		input.mi.dx = xhead;
		input.mi.dy = yhead;
		input.mi.dwFlags = MOUSEEVENTF_MOVE;//MOUSEEVENTF_ABSOLUTE
		if (Entity::getSpottedByMask(player) == 1)
		{
			SendInput(1, &input, sizeof(input));
		}
	}
}