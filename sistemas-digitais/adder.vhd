library IEEE;
use IEEE.std_logic_1164.all;

ENTITY full_adder IS
    PORT (
        a_f, b_f: in STD_LOGIC;
        c_in_f: in STD_LOGIC;
        c_out_f, sum_f: out STD_LOGIC
    );
END ENTITY full_adder;

ARCHITECTURE behav_estrutural OF full_adder IS
    component half_adder IS
    PORT (
        a, b: in STD_LOGIC;
        carry, sum: out STD_LOGIC
    );
    end component;

    signal carry1, carry2, sum_int: STD_LOGIC;

BEGIN
    ha1: half_adder
        port map(
            a => a_f,
            b => b_f,
            carry => carry1,
            sum => sum_int
        );
    ha2: half_adder
        port map(
            a => sum_int,
            b => c_in_f,
            sum => sum_f,
            carry => carry2
        );

    c_out_f <= carry1 or carry2;
end behav_estrutural;

-----------------------------------------------
-- ENTITY half_adder
-- Isso estaria em outro arquivo, o component half_adder chamaria esse arquivo
-----------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;

ENTITY half_adder IS
    PORT (
        a, b: in STD_LOGIC;
        carry, sum: out STD_LOGIC
    );
END ENTITY half_adder;

ARCHITECTURE behav_fluxo OF half_adder IS
BEGIN
    carry <= a AND b;
    sum <= a XOR b;
END behav_fluxo;

-- architecture behav_fluxo2 of half_adder is
-- begin
--     sum <= '1' when b < a
--         else '0';
-- end behav_fluxo2;

-- ARCHITECTURE behav_algo OF half_adder IS
-- BEGIN
--     process(a, b)
--     begin
--         if (a = '1' and b = '1') then
--             sum <= '0';
--             carry <= '1';
--         elsif (a > b or b > a) then
--             sum <= '1';
--             carry <= '0';
--         else
--             sum <= '0';
--             carry <= '0';
--         end if;
--     end process;
-- END behav_algo;
