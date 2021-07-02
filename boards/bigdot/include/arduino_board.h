static const adc_t arduino_analog_map[] = {
    ADC_LINE(3),
    ADC_LINE(2),
    ADC_LINE(1),
};

static const gpio_t arduino_pinmap[] = {
    GPIO_PIN(PORT_A, 2),
    GPIO_PIN(PORT_A, 3),
    GPIO_PIN(PORT_A, 4),
    GPIO_PIN(PORT_A, 5),
    GPIO_PIN(PORT_A, 6),
    GPIO_PIN(PORT_A, 7),
    GPIO_PIN(PORT_A, 8),
    GPIO_PIN(PORT_A, 9),
    GPIO_PIN(PORT_A, 10),
    GPIO_PIN(PORT_A, 11),
    GPIO_PIN(PORT_A, 14),
    GPIO_PIN(PORT_A, 15),
    GPIO_PIN(PORT_A, 16),
    GPIO_PIN(PORT_A, 17),
    GPIO_PIN(PORT_A, 18),
    GPIO_PIN(PORT_A, 19),
    GPIO_PIN(PORT_A, 22),
    GPIO_PIN(PORT_A, 23),
    GPIO_PIN(PORT_A, 26),
};

#define ARDUINO_LED         (6)
#define ARDUINO_UART_DEV    (UART_DEV(0))
