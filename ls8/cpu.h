#ifndef _CPU_H_
#define _CPU_H_

struct cpu {
  unsigned char PC;
  unsigned char FL;
  unsigned char E;
  unsigned char L;
  unsigned char G;
  unsigned char registers[8];
  unsigned char ram[256];
};

enum alu_op {
  ALU_ADD,
  ALU_CMP,
	ALU_MUL
};

#define LDI  0b10000010
#define HLT  0b00000001
#define PRN  0b01000111
#define MUL  0b10100010
#define POP  0b01000110
#define PUSH 0b01000101
#define ADD  0b10100000
#define CALL 0b01010000
#define RET  0b00010001
#define CMP  0b10100111
#define JEQ  0b01010101
#define JMP  0b01010100
#define JNE  0b01010110

extern void cpu_load(struct cpu *cpu, char *file);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif