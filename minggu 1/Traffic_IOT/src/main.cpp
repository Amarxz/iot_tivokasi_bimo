#include <Arduino.h>

int ledm = 27; // Lampu Merah di GPIO 27
int ledk = 25; // Lampu Kuning di GPIO 25
int ledh = 32; // Lampu Hijau di GPIO 32

void setup()
{
  Serial.begin(9600);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}

void loop()
{
  // Lampu Merah Menyala
  digitalWrite(ledm, HIGH);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
  Serial.println("Merah Menyala");
  Serial.println("Kuning Mati");
  Serial.println("Hijau Mati");
  delay(3000);

  // Lampu Kuning Menyala
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH);
  digitalWrite(ledh, LOW);
  Serial.println("Merah Mati");
  Serial.println("Kuning Menyala");
  Serial.println("Hijau Mati");
  delay(1000);

  // Lampu Hijau Menyala
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH);
  Serial.println("Merah Mati");
  Serial.println("Kuning Mati");
  Serial.println("Hijau Menyala");
  delay(2000);
}
