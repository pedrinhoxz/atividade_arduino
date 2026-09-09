# 💡 Projeto: Sensor de Luminosidade com LDR e Arduino

## 📌 Descrição

Este projeto utiliza um **Arduino Uno** e um **sensor LDR (Light Dependent Resistor)** para medir a intensidade da luminosidade do ambiente.

O sensor realiza uma leitura analógica e envia o valor para o Arduino. A partir dessa leitura, o sistema verifica a intensidade da luz e controla o acionamento de um **LED**.

Quando o valor lido pelo LDR é **maior que 1000**, o LED é ligado. Caso contrário, o LED permanece desligado.

Além disso, o valor captado pelo sensor é enviado para o **Monitor Serial**, permitindo acompanhar as variações de luminosidade em tempo real.

---

## 👨‍🏫 Integrante da Equipe

- **Pedro Arthur - Instrutor**

---

## 🛠️ Materiais Necessários

| Componente | Quantidade | Observação |
|---|---:|---|
| Arduino Uno | 1 un. | Ou modelo equivalente |
| Sensor LDR (5mm) | 1 un. | Leitura de luminosidade |
| LED (5mm) | 1 un. | Cor à escolha |
| Resistor 220 Ω | 1 un. | Limitador de corrente para o LED |
| Protoboard | 1 un. | Matriz de contatos |
| Jumpers Macho-Macho | Vários | Conexões do circuito |

---

## 📷 Circuito em Funcionamento

As imagens abaixo apresentam a montagem do circuito na protoboard e a conexão dos componentes com o Arduino Uno.

### 🔌 Montagem na Protoboard

![Montagem do circuito](circuito-protoboard.png)

### 🤖 Circuito conectado ao Arduino Uno

![Circuito com Arduino](circuito-arduino.png)

---

## ⚙️ Funcionamento do Circuito

O funcionamento do projeto ocorre da seguinte maneira:

1. O **LDR** detecta a luminosidade do ambiente.
2. O sensor está conectado à entrada analógica **A0** do Arduino.
3. O Arduino realiza a leitura através da função `analogRead()`.
4. O valor da leitura é armazenado na variável `valor_LDR`.
5. O valor é enviado ao **Monitor Serial** utilizando `Serial.println()`.
6. O Arduino compara o valor recebido com o limite definido de **1000**.
7. Caso o valor seja maior que 1000, o LED conectado ao pino **13** é ligado.
8. Caso contrário, o LED é desligado.
9. O sistema aguarda 1 segundo e realiza uma nova leitura.

---

## 💻 Trecho do Código — Sensores → INPUT

O trecho abaixo representa a configuração do **sensor LDR como entrada (INPUT)**.

O LDR está conectado ao pino analógico **A0**, que será utilizado pelo Arduino para receber o sinal do sensor.

```cpp
int LDR = A0;  // Entrada do sensor LDR (INPUT)

void setup() {
  pinMode(LDR, INPUT);  // Define o pino A0 como Entrada
}
