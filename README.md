# smart-irrigation-arduino-uno
DIY Arduino Smart Irrigation System based on humidity and light sensors
# 💧 Système d'Arrosage Intelligent avec Arduino UNO

Ce projet propose un système simple d’arrosage automatique pour plantes basé sur :
- 🌱 Capteur d’humidité du sol (YL-69 ou capacitif)
- 🌤️ Capteur de lumière (LDR + résistance 10kΩ)
- 🔁 Pompe 5V activée via relais
- 🤖 Contrôle via Arduino UNO

## 🧠 Fonctionnement

Le système arrose uniquement :
- Si l’humidité du sol est inférieure à un seuil
- Et si la luminosité ambiante est faible (soir ou matin)

Arrosage d’environ 500 ml toutes les 24h si besoin.

---

## 🧩 Matériel

| Composant              | Rôle                         |
|------------------------|------------------------------|
| Arduino UNO            | Microcontrôleur principal    |
| LDR + résistance 10kΩ  | Mesure de la lumière         |
| Capteur humidité A0    | Lecture humidité du sol      |
| Relais + Pompe 5V      | Arrosage contrôlé            |
| Breadboard + câblage   | Connexions                   |

---

## 🔧 Code Arduino

> Le code est disponible dans [`code/arrosage_intelligent.ino`](https://github.com/douob602/smart-irrigation-arduino-uno/blob/main/kounaktif.ino)

---

## 📜 Licence

MIT — libre d’utilisation, modification et partage 🌿

---

## 🙌 Crédits

Atelier animé par [Yassine Doubaji](https://www.linkedin.com/in/yassine-doubaji-a66b5b235/) dans le cadre de [KounAktif](https://www.instagram.com/koun.aktif/)
