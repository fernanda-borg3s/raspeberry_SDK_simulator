#include <stdio.h>
#include "pico/stdlib.h"

// Define o GPIO pin onde o LED esta conectado
const uint LED_PIN = 2;

int main() 
{
   //inicializa o stdio e o GPIO 
    stdio_init_all();
    gpio_init(LED_PIN);
    //Define o GPIO como saida (output)
    gpio_set_dir(LED_PIN, GPIO_OUT);
   // Liga o LED
    gpio_put(LED_PIN, 1);
    printf("LED on\n");
    sleep_ms(5000);  // espera 5 segundos
    // Desliga o LED
    gpio_put(LED_PIN, 0);
    printf("LED off\n");
    sleep_ms(2000);  // espera 2 segundos
    return 0;
}

 // codigo para loop infinito para ligar e desligar o LED
    // while (true) {
    //     gpio_put(LED_PIN, 1);
    //     printf("LED on\n");
    //     sleep_ms(2000);
    //     gpio_put(LED_PIN, 0);
    //     printf("LED off\n");
    //     sleep_ms(2000);
    // }
    // return 0;