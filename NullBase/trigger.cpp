#include "Includes.h"

void trig()
{
	int target = LocalPlayer::getLocalCrossID();
	if (target == -1)
		return;
	DWORD targetAim = Entity::getEntBase(target - 1);
	if (GetAsyncKeyState(VK_MENU) && (LocalPlayer::getLocalTeam() != Entity::getEntTeam(targetAim)))
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	}
}