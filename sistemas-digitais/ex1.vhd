library library IEEE;
use IEEE.std_logic_1164.all;

entity hw is
    port (
        A: in STD_LOGIC;
        B: in STD_LOGIC;
        S: out STD_LOGIC
    );
end hw;

architecture behave of hw is
begin
    -- Quando é uma varíavel usa := para receber valor
    -- Quando é saída ou sinal usa o <= para receber valor
    S <= A and B;
end behave;