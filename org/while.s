# while (i < 10) {
#     i++;
# }

loop:
bge s0, 10, fim   # se i >= 10 → sai

addi s0, s0, 1    # i++

j loop

fim:
