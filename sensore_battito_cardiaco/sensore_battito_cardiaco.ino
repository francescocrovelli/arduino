int stato = 0; // variabile nella quale acquisire lo stato del sensore (battito si oppure battito no)
void setup()
{
 pinMode(12, OUTPUT); // definisce la porta 12 (il led) come porta di output
 pinMode(3, INPUT); // definisce la porta 3 (il sensore) come porta di input
}
void loop()
{
 stato = digitalRead(3); // rileva lo stato de sensore
 if (stato == HIGH) // se lo stato e' "alto" (se c'e' stato un battito)
 {
 digitalWrite(12, HIGH); // accende il led
 delay (1000); // attende un secondo
 }
 else // in caso contrario (se non c'e' stato alcun battito)
 {
 digitalWrite(12, LOW); // spegne il led
 }
}
