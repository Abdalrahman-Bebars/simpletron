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
		Execute(memory, opCode, operand, &registers);
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

void Execute(word_t *memory, word_t opCode, word_t operand, registers_t *SMLRegisters){
	switch (opCode){
		case READ: Read (memory, operand); break;
		case WRITE : Write(memory, operand); break;
		case LOAD : Load(memory, operand , SMLRegisters); break;
		case STORE : Store(memory, operand , SMLRegisters); break;
		case ADD : Add (memory, operand , SMLRegisters); break;
		case SUBTRACT : Subtract(memory, operand , SMLRegisters); break;
		case DIVIDE : Divide(memory, operand , SMLRegisters); break;
		case MULTIPLY : Multiply(memory, operand , SMLRegisters); break;
		case BRANCH : Branch(operand, SMLRegisters); break;
		case BRANCHNEG : Branchneg(operand, SMLRegisters); break;
		case BRANCHZERO: Branchzero(operand, SMLRegisters); break;
	}
}

void Read(word_t *memory, word_t operand){
	printf("Console read: ");
	scanf("%d", &memory[operand]);
}

void Write(word_t *memory, word_t operand){
	printf("console Write: %d\n", memory[operand]);
}

void Load(word_t *memory, word_t operand, registers_t *SMLRegisters){
	SMLRegisters->accumulator = memory[operand];
}

void Store(word_t *memory, word_t operand, registers_t *SMLRegisters){
	memory[operand] = SMLRegisters->accumulator;
}

void Add(word_t *memory, word_t operand, registers_t *SMLRegisters){
	SMLRegisters->accumulator += memory[operand];
	if (SMLRegisters->accumulator > 9999){
		//over flow error message
		printf("***value over flow error***/n");
		//error function
		Error();
	}
}

void Subtract(word_t *memory, word_t operand, registers_t *SMLRegisters){
	SMLRegisters->accumulator -= memory[operand];
	if (SMLRegisters->accumulator < 9999){
		//over flow error message
		printf("***value over flow error***/n");
		//error function
		Error();
	}
}

void Divide(word_t *memory, word_t operand, registers_t *SMLRegisters){
	if (memory[operand] != 0){
	SMLRegisters->accumulator /= memory[operand];
			}
	else {
		// Dividing by zero message
		printf("***Dividing by zero error***/n");
		// error function
		Error();
		 }
	}


void Multiply(word_t *memory, word_t operand, registers_t *SMLRegisters){
	SMLRegisters->accumulator *= memory[operand];
	if (SMLRegisters->accumulator > 9999 || SMLRegisters->accumulator < -9999){
		//over flow error message
		printf("***value over flow error***/n");
		//error function
		Error();
	}
}

void Branch(word_t operand, registers_t *SMLRegisters){
	SMLRegisters->instructionCounter = operand;
}

void Branchneg(word_t operand, registers_t *SMLRegisters){
	if ( SMLRegisters->accumulator < 0 ){
		SMLRegisters->instructionCounter = operand;
	}
}

void Branchzero(word_t operand, registers_t *SMLRegisters){
	if ( SMLRegisters->accumulator == 0 ){
		SMLRegisters->instructionCounter = operand;
	}
}

void Fetch(word_t *memory, registers_t *SMLRegisters){
	SMLRegisters->instructionRegister = memory [SMLRegisters->instructionCounter];
	SMLRegisters->instructionCounter++;
}

void Decode(registers_t *SMLRegisters, word_t *opCode, word_t *operand){
	*opCode = SMLRegisters->instructionRegister/100;
	*operand = SMLRegisters->instructionRegister%100;
}

void Error (){
	printf("***Simpletron system has terminated***\n");
	exit(0);
}

int Istruction_Is_Valid(word_t inst_check){
	switch ((inst_check/100)){
		case READ:case WRITE :case LOAD :case STORE :case ADD :case SUBTRACT :case DIVIDE :case MULTIPLY :case BRANCH :case BRANCHNEG :case BRANCHZERO: case HALT: return 1;
		default : return 0;
	}
}