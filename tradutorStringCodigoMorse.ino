int led = 13;
  
void setup() { 
 pinMode(led, OUTPUT); 
 Serial.begin(9600);
}
void leStringSerial(){
  String conteudo = "";
  char caractere;
  
  // Enquanto receber algo pela serial
  while(Serial.available() > 0) {
    // Lê byte da serial
    caractere = Serial.read();
    // Ignora caractere de quebra de linha
    if (caractere != '\n'){
      // Concatena valores
       conteudo.concat(caractere);
       traduzCaractere(caractere);
    }
    // Aguarda buffer serial ler próximo caractere
    delay(10);
  }
    
  Serial.print("Recebi: ");
  Serial.println(conteudo);
}
  
void loop() {
  // Se receber algo pela serial
  if (Serial.available() > 0){
    // Lê toda string recebida
    leStringSerial();
  }
}

//************Intervalo dos sinais*****************//
void curto(){ 
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
}

void longo(){
  delay(1000);
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
}
//**************************************************//

//***Converte caractere em sinais de código morde***//
void traduzCaractere(char caractere){
  if(caractere == 'a' || caractere == 'A'){
    curto();
    longo();
  }
  if(caractere == 'b' || caractere == 'B'){
    longo();
    curto();
    curto();
    curto();
  }
  if(caractere == 'c' || caractere == 'C'){
    longo();
    curto();
    longo();
    curto();
  }
  if(caractere == 'd' || caractere == 'D'){
    longo();
    curto();
    curto();
  }
  if(caractere == 'e' || caractere == 'E'){
    curto();
  }
  if(caractere == 'f' || caractere == 'F'){
    curto();
    curto();
    longo();
    curto();
  }
  if(caractere == 'g' || caractere == 'G'){
    longo();
    longo();
    curto();
  }
  if(caractere == 'h' || caractere == 'H'){
    curto();
    curto();
    curto();
    curto();
  }
  if(caractere == 'i' || caractere == 'I'){
    curto();
    curto();
  }
  if(caractere == 'j' || caractere == 'J'){
    curto();
    longo();
    longo();
    longo();
  }
  if(caractere == 'k' || caractere == 'K'){
    longo();
    curto();
    longo();
  }
  if(caractere == 'l' || caractere == 'L'){
    curto();
    longo();
    curto();
    curto();
  }
  if(caractere == 'm' || caractere == 'M'){
    longo();
    longo();
  }
  if(caractere == 'n' || caractere == 'N'){
    longo();
    curto();
  }
  if(caractere == 'o' || caractere == 'O'){
    longo();
    longo();
    longo();
  }
  if(caractere == 'p' || caractere == 'P'){
    curto();
    longo();
    longo();
    curto();
  }
  if(caractere == 'q' || caractere == 'Q'){
    longo();
    longo();
    curto();
    longo();
  }
  if(caractere == 'r' || caractere == 'R'){
    curto();
    longo();
    curto();
  }
  if(caractere == 's' || caractere == 'S'){
    curto();
    curto();
    curto();
  }
  if(caractere == 't' || caractere == 'T'){
    longo();
  }
  if(caractere == 'u' || caractere == 'U'){
    curto();
    curto();
    longo();
  }
  if(caractere == 'v' || caractere == 'V'){
    curto();
    curto();
    curto();
    longo();
  }
  if(caractere == 'w' || caractere == 'W'){
    curto();
    longo();
    longo();
  }
  if(caractere == 'x' || caractere == 'X'){
    longo();
    curto();
    curto();
    longo();
  }
  if(caractere == 'y' || caractere == 'Y'){
    longo();
    curto();
    longo();
    longo();
  }
  if(caractere == 'z' || caractere == 'Z'){
    longo();
    longo();
    curto();
    curto();
  }
  if(caractere == ' '){
    delay(1000);
  }
  if(caractere == '0'){
    longo();
    longo();
    longo();
    longo();
    longo();
  }
  if(caractere == '1'){
    curto();
    longo();
    longo();
    longo();
    longo();
  }
  if(caractere == '2'){
    curto();
    curto();
    longo();
    longo();
    longo();
  }
  if(caractere == '3'){
    curto();
    curto();
    curto();
    longo();
    longo();
  }
  if(caractere == '4'){
    curto();
    curto();
    curto();
    curto();
    longo();
  }
  if(caractere == '5'){
    curto();
    curto();
    curto();
    curto();
    curto();
  }
  if(caractere == '6'){
    longo();
    curto();
    curto();
    curto();
    curto();
  }
  if(caractere == '7'){
    longo();
    longo();
    curto();
    curto();
    curto();
  }
  if(caractere == '8'){
    longo();
    longo();
    longo();
    curto();
    curto();
  }
  if(caractere == '9'){
    longo();
    longo();
    longo();
    longo();
    curto();
  }
}
