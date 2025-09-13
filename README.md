# 💡 Raspberry Pi Simulador

Este projeto reúne uma série de simulações interativas desenvolvidas na plataforma [Wokwi](https://wokwi.com/), com o objetivo de demonstrar os princípios fundamentais de controle de hardware utilizando a linguagem **C**.  
A coleção de simulações progride de forma gradual: começando com a simples ativação de um LED até a construção de um semáforo funcional.

## Objetivos do projeto

- Aplicar os conceitos básicos de programação em C para sistemas embarcados
- Compreender o controle de hardware via GPIO (entradas e saídas digitais)
- Criar simulações interativas para consolidar o aprendizado  
- Evoluir gradualmente do simples para o complexo

## Tecnologias e ferramentas utilizadas

- Linguagem C
- Raspberry Pi Pico
- Wokwi Simulator – simulação de microcontroladores e circuitos
- CMake - sistema que automatiza o processo de compilação de software em linguagem C e C++

## Conteúdo das simulações

1. **Ativação de LED** – código básico para acender e apagar um LED  
2. **Piscar LED** – introdução a laços e temporização com `delay()`  
3. **Controle de múltiplos LEDs** – manipulação de saídas digitais  
5. **Semáforo** – ciclo de LEDs para representar sinais de trânsito  

##  Estrutura do projeto
raspeberry_SDK_simulator/
├── .vscode
├── build 
  └──file.hex
  └── file.bin
  └── file.elf
├── blink.c
├── CMakeList.txt
├── diagram.json
├── wokwi.toml

## Como executar projeto (Windows)

- Certifique-se de ter as extensões Wokwi, CMake e Raspberry Pi Pico instaladas no Visual Studio Code
- Instale o CMake no computador

1. Clone Repositorio
```bash
git clone https://github.com/fernanda-borg3s/raspeberry_SDK_simulator.git
```
2. Configure o build
```bash
mkdir build
cd build
cmake ..
cmake -build .
```
OBS: Até o momento, nesse projeto, o ```Cmake -build .``` tem quer ser executado toda vez que houver uma alteração no código


