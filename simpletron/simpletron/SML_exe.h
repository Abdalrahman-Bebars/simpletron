#ifndef _SML_EXE_h
#define _SML_EXE_h


#include <stdio.h>
#include <stdlib.h>

#define MEMORY_SIZE 100

typedef enum _istruction_set_t{
	READ = 10,
	WRITE = 11,
	
	LOAD = 20,
	STORE = 21,
	
	ADD = 30,
	SUBTRACT = 31,
	DIVIDE = 32,
	MULTIPLY = 33,
	
	BRANCH = 40,
	BRANCHNEG = 41,
	BRANCHZERO = 42,
	HALT = 43
}instruction_set_t;



typedef int word_t;
typedef struct _registers_t{
	word_t accumulator;
	word_t instructionCounter;
	word_t instructionRegister;
}registers_t;

void Run();
void Recieve_Instructions(word_t *memory);
void Fetch(word_t *memory, registers_t *SMLRegisters);
void Decode(registers_t *SMLRegisters, word_t *opCode, word_t *operand);
void Execute(word_t *memory, word_t opCode, word_t operand, registers_t *SMLRegisters);

void Read(word_t *memory, word_t operand);
void Write(word_t *memory, word_t operand);

void Load(word_t *memory, word_t operand, registers_t *SMLRegisters);
void Store(word_t *memory, word_t operand, registers_t *SMLRegisters);

void Add(word_t *memory, word_t operand, registers_t *SMLRegisters);
void Subtract(word_t *memory, word_t operand, registers_t *SMLRegisters);
void Divide(word_t *memory, word_t operand, registers_t *SMLRegisters);
void Multiply(word_t *memory, word_t operand, registers_t *SMLRegisters);

void Branch(word_t operand, registers_t *SMLRegisters);
void Branchneg(word_t operand, registers_t *SMLRegisters);
void Branchzero(word_t operand, registers_t *SMLRegisters);

void Error ();
int Istruction_Is_Valid(word_t inst_check);
#endif