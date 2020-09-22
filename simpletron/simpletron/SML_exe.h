#ifndef _SML_EXE_h
#define _SML_EXE_h

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
void Execute(word_t *memory, word_t opCode, word_t operand);


#endif