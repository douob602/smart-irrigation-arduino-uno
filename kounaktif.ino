// Broches
const int pompePin = 5;             // Pompe connectée via relais
const int humiditePin = A0;         // Capteur d’humidité
const int ldrPin = A1;              // LDR

// Seuils ajustables
int seuilHumidite = 500;           // Seuil de sécheresse du sol (à ajuster)
int seuilLuminosite = 30;         // Seuil pour détecter le soir (plus haut = plus sombre)

// Durée d’arrosage pour 500 ml (ajuster après test)
unsigned long dureeArrosage = 10000;  // en millisecondes (ici 10 secondes)

void setup() {
  pinMode(pompePin, OUTPUT);
  digitalWrite(pompePin, HIGH);
  Serial.begin(9600);
}

void loop() {
  int humidite = analogRead(humiditePin);
  int luminosite = analogRead(ldrPin);

  Serial.print("Humidite: ");
  Serial.print(humidite);
  Serial.print("  | Luminosite: ");
  Serial.println(luminosite);

  // Condition : sol sec ET il fait sombre (soir)
  if (humidite > seuilHumidite && luminosite < seuilLuminosite) {
    Serial.println(">>> Conditions remplies : début arrosage de 500 ml...");
    digitalWrite(pompePin, LOW);
    delay(dureeArrosage);  // Pompe ON pendant X secondes
    digitalWrite(pompePin, HIGH);
    Serial.println(">>> Arrosage terminé !");
    
    delay(60 * 60 * 1000 *8 );  // Pause d'24h pour éviter de relancer trop souvent
  } else {
    Serial.println(">>> Conditions non remplies. Pas d'arrosage.");
  }

  delay(2000); // Pause entre chaque vérification
}
