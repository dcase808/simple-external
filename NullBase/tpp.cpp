#include "Includes.h"

void third()
{
	int status = LocalPlayer::getObserveMode();
	if (status == 0 && GetAsyncKeyState(VK_NUMPAD0))
	{
		LocalPlayer::setObserveMode(1);
		Sleep(100);
	}
	else if (status == 1 && GetAsyncKeyState(VK_NUMPAD0))
	{
		LocalPlayer::setObserveMode(0);
		Sleep(100);
	}
}