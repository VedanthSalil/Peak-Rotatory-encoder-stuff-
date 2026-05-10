const int re_clk = 3;
const int re_dt = 4 ;

volatile int CLK ;
volatile int DT;
volatile int prv_CLK;
volatile int prv_DT;

volatile int re_pos = 0;

void setup(){
  pinMode(re_clk,INPUT);
  pinMode(re_dt,INPUT);

  prv_CLK = digitalRead(re_clk);
  prv_DT = digitalRead(re_dt);
  Serial.begin(9600);
}

void loop(){
 

  CLK = digitalRead(re_clk);
  DT = digitalRead(re_dt);

  if(CLK != prv_CLK){
    if( DT != CLK){
      re_pos++;
      Serial.println("MOVING RIGHT(CW)");
      Serial.print("ENCODER POS:");
      Serial.print(re_pos);
      prv_CLK = digitalRead(re_clk);
      prv_DT = digitalRead(re_dt);
    }
  
  if(CLK == DT){
    re_pos--;
    Serial.println("MOVING LEFT(CCW)");
    Serial.print("ENCODER POS:");
    Serial.print(re_pos);
    prv_CLK = digitalRead(re_clk);
    prv_DT = digitalRead(re_dt);

  }



  }


}
