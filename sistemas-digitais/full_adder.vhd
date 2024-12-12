LIBRARY library IEEE;
use IEEE.std_logic_1164.all;

ENTITY adder3bits IS
    PORT (
        A, B: in STD_LOGIC_VECTOR(2 downto 0);
        overflow: out STD_LOGIC;
        sum: out STD_LOGIC_VECTOR(2 downto 0)
    );
END ENTITY adder3bits;

ARCHITECTURE behav_estrutural OF adder3bits IS
    component full_adder IS
    PORT (
        a_f, b_f: in STD_LOGIC;
        carry_in: in STD_LOGIC;
        carry_out, sum: out STD_LOGIC
    );
    end component;
    SIGNAL c0, c1, c2: STD_LOGIC;
begin
    fa0: full_adder
    port map (
        a_f => A(0),
        b_f => B(0),
        carry_in => '0',
        carry_out => c0,
        sum => sum(0)
    );

    fa1: full_adder
    port map (
        a_f => A(1),
        b_f => B(1),
        carry_in => c0,
        carry_out => c1,
        sum => sum(1)
    );

    fa2: full_adder
    port map (
        a_f => A(2),
        b_f => B(2),
        carry_in => c1,
        carry_out => c2, -- ou mapear direto com o overflow
        sum => sum(2)
    );

    overflow <= c2;
end ARCHITECTURE;