////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Copyright 2018 Null Terminator																								  //
//
Permission is hereby granted, free of charge, to any person																		  //
obtaining a copy of this software and associated documentation                                                                    //
files(the "Software"), to deal in the Software without restriction,                                                               //
including without limitation the rights to use, copy, modify, merge,                                                              //
publish, distribute, sublicense, and/or sell copies of the Software,                                                              //
and to permit persons to whom the Software is furnished to do so,                                                                 //
subject to the following conditions :                                                                                             //
//
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.    //
//
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,																	  //
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF																  //
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.                                                            //
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,                                                       //
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR                                                             //
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR                                                             //
THE USE OR OTHER DEALINGS IN THE SOFTWARE.																						  //
*/																																  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
NEED SOME HELP? FULL TUTORIALS ON HOW TO USE THIS BASE AND CODE CHEATS ON MY YOUTUBE CHANNEL:
Null Terminator
https://www.youtube.com/channel/UCZF93Qrt6yMAabRnlND4YsQ

GITHUB LINK:
https://github.com/NullTerminatorr/NullBase
*/

#include "NullMemory.h"

//Vars for our cheat :D
int plrFlags;

int main()
{
	//Constructing nullbase object to access the functions/vars inside
	nullbase null;

	//If we attatch successfully
	if (null.attatchProc("csgo.exe"))
	{
		//Getting base address of client.dll so we can offset from it
		if (null.baseAddress = null.getModule("client.dll"))
		{

			//F10 = panic key
			while (!GetAsyncKeyState(VK_F10))
			{
				/*BHOP*/

				//If we're on the ground and we're holding space (bhop)
				if (null.getLocalFlags() == FL_ON_GROUND && GetAsyncKeyState(VK_SPACE) || null.getLocalFlags() == FL_ON_GROUND && GetAsyncKeyState(VK_SPACE))
				{
					//JUMP!
					null.forceJump();
				}
			}
		}
	}
	//Deconstruct nullbase (Close handle to hproc)
	null.~nullbase();
}