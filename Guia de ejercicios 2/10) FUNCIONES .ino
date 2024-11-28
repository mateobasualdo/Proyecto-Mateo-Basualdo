void configurarPines(int pines[], const char* modos[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(modos[i], "INPUT") == 0) {
            pinMode(pines[i], INPUT);
        } else if (strcmp(modos[i], "OUTPUT") == 0) {
            pinMode(pines[i], OUTPUT);
        }
    }
}

void setup() {
    int pines[] = {2, 3, 4, 5};
    const char* modos[] = {"INPUT", "OUTPUT", "INPUT", "OUTPUT"};
    int cantidad = 4;

    configurarPines(pines, modos, cantidad);
}

void loop() {
   
}
