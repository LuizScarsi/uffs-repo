library IEEE;
use IEEE.std_logic_1164.all;

entity sistema is
    port(
        botao_seguranca, sensor_janela, sensor_porta: in STD_LOGIC;
        -- sensor é um botão sw
        caixa_a: in STD_LOGIC_VECTOR(1 downto 0);
        caixa_b_cheia: in STD_LOGIC;
        -- led(0) = bomba, led(1) = eletrovalvula
        -- led(2) = alerta
        led: out STD_LOGIC_VECTOR(9 downto 0)
    );
end sistema;

ARCHITECTURE behav_sistema OF sistema IS
    component sistema_seguranca is
    PORT (
        botao_seguranca, sensor_janela, sensor_porta: in STD_LOGIC;
        -- led(2) = alerta
        led: out STD_LOGIC_VECTOR(9 downto 0)
    );
    end component;

    component sistema_caixa_agua is
    PORT (
        -- sensor é um botão sw
        caixa_a: in STD_LOGIC_VECTOR(1 downto 0);
        caixa_b_cheia: in STD_LOGIC;
        -- led(0) = bomba, led(1) = eletrovalvula
        led: out STD_LOGIC_VECTOR(9 downto 0)
    );
    end component;
BEGIN
    security: sistema_seguranca
    port map(
        botao_seguranca => botao_seguranca,
        sensor_janela => sensor_janela,
        sensor_porta => sensor_porta,
        led => led
    );

    water_tank: sistema_caixa_agua
    port map(
        caixa_a => caixa_a,
        caixa_b_cheia => caixa_b_cheia,
        led => led
    );
end behav_sistema;

--------------------------------------------------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;

ENTITY sistema_seguranca IS
    PORT (
        botao_seguranca, sensor_janela, sensor_porta: in STD_LOGIC;
        -- led(2) = alerta
        led: out STD_LOGIC_VECTOR(9 downto 0)
    );
END ENTITY sistema_seguranca;

architecture behav_seguranca of sistema_seguranca is
begin
    led(2) <= '1' when botao_seguranca = '1' and (sensor_janela = '1' or sensor_porta = '1') else '0';
end behav_seguranca;

--------------------------------------------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;

ENTITY sistema_caixa_agua IS
    PORT (
        -- sensor é um botão sw
        caixa_a: in STD_LOGIC_VECTOR(1 downto 0);
        caixa_b_cheia: in STD_LOGIC;
        -- led(0) = bomba, led(1) = eletrovalvula
        led: out STD_LOGIC_VECTOR(9 downto 0)
    );
END ENTITY sistema_caixa_agua;

ARCHITECTURE behav_caixa_agua OF sistema_caixa_agua IS
BEGIN
    led(0) <= '0' when caixa_a = "00" or caixa_b_cheia = '1' else '1';
    led(1) <= '0' when caixa_a = "11" else '1';
end behav_caixa_agua;

