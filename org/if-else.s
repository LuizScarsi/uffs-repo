# if (a > b) {
#     c = 1;
# } else {
#     c = 2;
# }

ble s0, s1, else   # se a <= b → else

li s2, 1           # c = 1
j fim

else:
li s2, 2           # c = 2

fim:
