#include "SML_exe.h"
#include <stdio.h>


void Run()
{
	word_t memory[MEMORY_SIZE] = {0};
	registers_t registers = {0, 0, 0};
	word_t opCode = 0;
	word_t operand = 0;
	
	Recieve_Instructions(memory);
	while(opCode != HALT)
	{
		Fetch(memory, &registers);
		Decode(&registers, &opCode, &operand);
		Execute(memory, opCode, operand);
	}
}

void Recieve_Instructions(word_t *memory)
{
	word_t instruction = 0;
	int location = 0;
	while(instruction != -99999)
	{
		printf("%2d ?", location);
		scanf("%d", &instruction);
		if(Istruction_Is_Valid(instruction))
		{
			memory[location] = instruction;
			location++;
		}
	}
}

