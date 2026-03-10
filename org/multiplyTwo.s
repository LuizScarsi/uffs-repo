.data
valor: .word 3

.text
.globl_start
_start:

  la a0, valor

  lw a5, 0(a0)
  add a6, a5, a5
  sw a6, 0(a0)