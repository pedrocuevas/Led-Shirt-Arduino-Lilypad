//Declaramos los leds

int LED1 = 11;

int LED2 = 10;

int LED3 = 2;

int LED4 = 3;





//Las variables que usaremos para el silencio

int Valor;

int Valor1;

int Valor2;

int Valor3;

int Valor4;



//Configuramos los pines y el serial para poder visualizar la entrada analogica

void setup (){

 Serial.begin(9600); 

 pinMode(LED1,OUTPUT);

 pinMode(LED2,OUTPUT);

 pinMode(LED3,OUTPUT);

 pinMode(LED4,OUTPUT);



}



void loop (){

  //Leemos el valor

 Valor = analogRead(A0);

 //Transferimos los valores para saber cual era el estado anterior

 Valor4 = Valor3;

 Valor3 = Valor2;

 Valor2 = Valor1;

 Valor1 = Valor;



//Visualizamos los valores en Serial Monitor

 Serial.print("Valor: ");

 Serial.print(Valor);

 Serial.print("\t Valor1: ");

 Serial.print(Valor1);

 Serial.print("\t Valor2: ");

 Serial.print(Valor2);

 Serial.print("\t Valor3: "); 

 Serial.print(Valor3);

 Serial.print("\t Valor4: ");

 Serial.println(Valor4);

 

 //Condicionamos que si el programa lee 4 veces seguidas 0 que se apagen los leds, si no ponemos esto los leds parpadearan mucho

if (Valor1+Valor2+Valor3+Valor4==0){

  digitalWrite(LED1,LOW);

  digitalWrite(LED2,LOW);

  digitalWrite(LED3,LOW);

  digitalWrite(LED4,LOW);



}

//Encendemos los leds segun el valor de entrada. En este caso la salida de mi pc como mucho me llega a 400 asi que lo dividimos entre ocho leds.

else{

 if (Valor>20){

   digitalWrite(LED1, HIGH);

 }

 else{

   digitalWrite(LED1, LOW);

 }



 if (Valor>45){

   digitalWrite(LED2, HIGH);

 }

 else{

   digitalWrite(LED2, LOW);

 }

 if (Valor>65){

   digitalWrite(LED3, HIGH);

 }

 else{

   digitalWrite(LED3, LOW);

 }



 if (Valor>85){

   digitalWrite(LED4, HIGH);

 }

 else{

   digitalWrite(LED4, LOW);

 }





}

} 

