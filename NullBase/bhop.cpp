#include "Includes.h"

void hopsa()
{
	if (GetAsyncKeyState(VK_SPACE) && (LocalPlayer::getLocalFlags() == 257 || LocalPlayer::getLocalFlags() == 263 || LocalPlayer::getLocalFlags() == (1 << 18)))
	{
		LocalPlayer::forceJump();
	}
}