#include "disas.h"

int main() {
   unsigned char sample[] = { 0xff, 0x74, 0x8d, 0xff };
   disassemble(sample);
}
