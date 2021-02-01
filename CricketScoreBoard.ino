int a=29;
int b=31;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;
int h=7;
int i=8;

int j=9;
int k=10;
int l=11;
int m=12;
int n=13;
int o=14;
int p=15;
int q=16;
int r=17;
int s=18;
int t=19;
int u=20;

int aa=21;
int ab=22;
int ac=23;
int ad=24;
int ae=25;
int af=26;
int ag=27;



int oa = 45;
int ob = 46;
int oc = 47;
int od = 48;
int oe = 49;
int of = 50;
int og = 51;

int oh = 38;
int oi = 39;
int oj = 40;
int ok = 41;
int ol = 42;
int om = 43;
int on = 44;

int oo = 36;
int op = 30;
int oq = 32;
int orr = 33;
int os = 34;
int ot = 35;
int ou = 37;

int pnt = 52;
int opr = 53;



int ex=28;

int cou,index,d1,d2,d3,nn;

int o0,o1,o2,mkl;

int sc,wk,ovr;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  pinMode(i,OUTPUT);
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(l,OUTPUT);
  pinMode(m,OUTPUT);
  pinMode(n,OUTPUT);
  pinMode(o,OUTPUT);
  pinMode(p,OUTPUT);
  pinMode(q,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(s,OUTPUT);
  pinMode(t,OUTPUT);
  pinMode(u,OUTPUT);
  
  pinMode(aa,OUTPUT);
  pinMode(ab,OUTPUT);
  pinMode(ac,OUTPUT);
  pinMode(ad,OUTPUT);
  pinMode(ae,OUTPUT);
  pinMode(af,OUTPUT);
  pinMode(ag,OUTPUT);
  
  pinMode(ex,OUTPUT);


  pinMode(oa,OUTPUT);
  pinMode(ob,OUTPUT);
  pinMode(oc,OUTPUT);
  pinMode(od,OUTPUT);
  pinMode(oe,OUTPUT);
  pinMode(of,OUTPUT);
  pinMode(og,OUTPUT);
  pinMode(oh,OUTPUT);
  pinMode(oi,OUTPUT);
  pinMode(oj,OUTPUT);
  pinMode(ok,OUTPUT);
  pinMode(ol,OUTPUT);
  pinMode(om,OUTPUT);
  pinMode(on,OUTPUT);
  pinMode(op,OUTPUT);
  pinMode(oq,OUTPUT);
  pinMode(orr,OUTPUT);
  pinMode(os,OUTPUT);
  pinMode(ot,OUTPUT);
  pinMode(ou,OUTPUT);

  pinMode(pnt,OUTPUT);
  pinMode(opr,OUTPUT);
  
  Serial.begin(9600);
  
  all_clear();
  sc=0;
  wk=0;
  ovr = 0;
  
  score_print(sc);
  over_print(ovr);
  ss();
  digit0(wk);
  Word();
}

void loop() {

  Word();
  int x=analogRead(A0);
  int y=analogRead(A1);

  int w=analogRead(A2);
  int z=analogRead(A3);
  if(x>=500)
  {
    if(sc>0)
    {
      sc=sc-1;
      score_print(sc);
    }
    delay(200);
  }
  else if(y>=500)
  {
    if(sc<999)
    {
      sc=sc+1;
      score_print(sc);
    }
    delay(200);
  }

  if(w>=500)
  {
    if(wk>0)
    {
      
      wk=wk-1;
      digit0(wk);
    }
    delay(200);
  }
  else if(z>=500)
  {
    if(wk<9)
    {
      ss();
      wk=wk+1;
      digit0(wk);
    }
    else
    {
      s_clear();
      digit0_clear();
      wk=-1;
    }
    delay(200);
  }



  int xx=analogRead(A4);
  int yy=analogRead(A5);


  if(xx>=500)
  {
    if(ovr>0)
    {
      ovr = ovr-1;
      over_print(ovr);
    }
    delay(200);
  }
  else if(yy>=500)
  {
    if(ovr<100)
    {
      ovr=ovr+1;
      over_print(ovr);
    }
    delay(200);
  }

 
  /*
  cou=-1;
  for(index=0;index<1000;index++)
  {
    if(index%100==0)
      cou++;
    d1=0;
    d2=0;
    d3=0;
    nn=index;
    d1=nn%10;
    nn/=10;
    d2=nn%10;
    nn/=10;
    d3=nn%10;
    nn/=10;
    
    digit1(d1);
    if(d2>0 || d3!=0)
      digit2(d2);
    if(d3>0)
      digit3(d3);
    delay(100);
    if(cou>=0)
    {
      ss();
      digit0(cou);
    }
    
  }
  */
}





void score_print(int val)
{
  
  digit1_clear();
  digit2_clear();
  digit3_clear();
  nn=val;
  d1=nn%10;
  nn/=10;
  d2=nn%10;
  nn/=10;
  d3=nn%10;
  nn/=10;
  Serial.print(d3);
  Serial.print(d2);
  Serial.println(d1);
  digit1(d1);
  if(d2>0 || d3!=0)
    digit2(d2);
  if(d3>0)
    digit3(d3);
  delay(100);
}

void over_print(int val)
{
  
  over0_clear();
  over1_clear();
  over2_clear();
  
  mkl=val;
  o0 = nn%6;
  o1=nn%6;
  mkl/=6;
  o2=nn%6;
  mkl/=6;
  if(o0==0)
  {
    point_clear();
    over1(o1);
    if(o2>0)
      over2(o2);
  }
  else
  {
    over0(o0);
    over1(o1);
    if(o2>0)
      over2(d2);
  }
    
 
  //d3=nn%10;
  //nn/=10;
  Serial.print(o0);
  Serial.print(o1);
  Serial.println(o2);
 // digit1(d1);
  //if(d2>0)
   // digit2(d2);
  //if(d3>0)
    //digit3(d3);
  delay(100);
}


void s_clear()
{
  digitalWrite(ex,0);
}


void ss()
{
  digitalWrite(ex,1);
}

void point_clear()
{
  digitalWrite(pnt,0);
}

void Word()
{
  digitalWrite(opr,1);
}

void point()
{
  digitalWrite(pnt,1);
}

void all_clear()
{
  digit0_clear();
  digit1_clear();
  digit2_clear();
  digit3_clear();
  over0_clear();
  over2_clear();
  s_clear();
  point_clear();
}

