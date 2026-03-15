.data
b: .word 5
c: .word 2
d: .word 3
i: .word 1
a: .word 0
f: .word 0

.text
.globl _start
_start:

  # carregar endereços
  la s2, b
  la s3, c
  la s4, d
  la s5, i
  la s0, a
  la s1, f

  # carregar valores
  lw s6, 0(s2)
  lw s7, 0(s3)
  lw s8, 0(s4)
  lw s9, 0(s5)

  # a = b + c - d
  add t0, s6, s7
  sub t1, t0, s8
  sw t1, 0(s0)

  # f = (a - b) + (a - i)
  sub t2, t1, s6
  sub t3, t1, s9
  add t4, t2, t3
  sw t4, 0(s1)

  # encerrar programa
  li a7, 10
  ecall
