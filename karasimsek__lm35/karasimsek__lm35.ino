float olcum; //float komutu bizlere ölçüm sonuçlarını ondalıklı
             // bir şekilde verecektir.

float deger; // Ölçüm sonuçlarına isim veriyoruz...

int lm35_pin = A1; // Analog 1 pinine bağladığımız 
                  // lm35 sensörümüzü tanıtıyoruz.
int led1 = 0;
int led2 = 1;
int led3 = 2;
int led4 = 3;                 

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT); 
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(lm35_pin,INPUT);  
}

void loop(){
  deger = analogRead(lm35_pin);

   deger = (deger/1023)*5000;

   olcum = deger /10,0;

    deger = map(olcum, 0, 1024, 0, 100);

 
 if(olcum == 25, olcum < 25){

   digitalWrite(led1, HIGH);
  
 }
 
 
 if( olcum > 30, olcum < 39){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
 }
 if(olcum > 40){

   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
 }
 
 if(olcum > 41, olcum < 50){
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH); 
 }
 }
  


