# Intel 8080 CPU Emulator

Compile with `gcc emulator8080.c -o emu8080`

Run the cpudiag exerciser test with `./emu8080`

Implemented instructions by cross-referencing the assembly code with `cpudiag.asm` copy-pasted into Pretty 8080 Assembler and the 8080 Reference sheet at Emulator101.

# References
- Implemented with 8080 guide on Emulator101 (http://emulator101.com)

- Opcodes for 8080 reference sheet (http://www.emulator101.com/reference/8080-by-opcode.html)

- Intel 8080 Microcomputer Systems User Manual (http://bitsavers.trailing-edge.com/components/intel/MCS80/98-153B_Intel_8080_Microcomputer_Systems_Users_Manual_197509.pdf)

- cpudiag program for testing 8080 instructions (https://brainwagon.org/2011/09/08/more-on-my-8080-emulator/)

- Pretty 8080 Assembler (https://caglrc.cc/~svo/i8080/)