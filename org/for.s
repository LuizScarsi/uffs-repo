# for (i = 0; i < 5; i++) {
#     soma += i;
# }

li s0, 0      # i
li s1, 0      # soma

loop:
bge s0, 5, fim

add s1, s1, s0

addi s0, s0, 1

j loop

fim:
