#include "Simpletron_UI.h"

void Run_Program()
{
	Welcome_Message();
	Run();
	printf("***Simpletron execution terminated***\n");
}

void Welcome_Message()
{
	printf("*** Welcome to Simpletron! ***\n");
	printf("*** Please enter your program one instruction ***\n");
	printf("*** (or data word) at a time. I will type the ***\n");
	printf("*** location number and a question mark (?). ***\n");
	printf("*** You then type the word for that location. ***\n");
	printf("*** Type the sentinel -99999 to stop entering ***\n");
	printf("*** your program. ***\n");
}