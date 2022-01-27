from machine import Pin, ADC

try:
    remote = ADC(Pin(32))
    while True:
        print(remote.read())
except KeyboardInterrupt:
    print("Interrupted")