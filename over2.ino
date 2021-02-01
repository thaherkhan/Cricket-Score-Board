void over2_clear()
{
  digitalWrite(oo,0);
  digitalWrite(op,0);
  digitalWrite(oq,0);
  digitalWrite(orr,0);
  digitalWrite(os,0);
  digitalWrite(ot,0);
  digitalWrite(ou,0);
}

void over2_zero()
{
  digitalWrite(oo,1);
  digitalWrite(op,1);
  digitalWrite(oq,1);
  digitalWrite(orr,1);
  digitalWrite(os,1);
  digitalWrite(ot,1);
}

void over2_one()
{
  digitalWrite(op,1);
  digitalWrite(oq,1);
}

void over2_two()
{
  digitalWrite(oo,1);
  digitalWrite(op,1);
  
  digitalWrite(ou,1);
  digitalWrite(os,1);
  
  digitalWrite(orr,1);
}

void over2_three()
{
  digitalWrite(oo,1);
  digitalWrite(op,1);
  
  digitalWrite(ou,1);
  digitalWrite(oq,1);
  
  digitalWrite(orr,1);
}

void over2_four()
{
  digitalWrite(op,1);
  digitalWrite(oq,1);
  
  digitalWrite(ot,1);
  digitalWrite(ou,1);
  
}

void over2_five()
{
  digitalWrite(oo,1);
  digitalWrite(ot,1);
  
  digitalWrite(ou,1);
  digitalWrite(oq,1);
  
  digitalWrite(orr,1);
}

void over2_six()
{
  digitalWrite(oo,1);
  digitalWrite(oq,1);
  
  digitalWrite(orr,1);
  digitalWrite(os,1);
  
  digitalWrite(ot,1);
  digitalWrite(ou,1);
}

void over2_seven()
{
  digitalWrite(oo,1);
  
  digitalWrite(op,1);
  digitalWrite(oq,1);
  
}

void over2_eight()
{
  digitalWrite(oo,1);
  digitalWrite(op,1);
  
  digitalWrite(oq,1);
  digitalWrite(orr,1);
  
  digitalWrite(os,1);
  digitalWrite(ot,1);
  digitalWrite(ou,1);
}

void over2_nine()
{
  digitalWrite(oo,1);
  digitalWrite(op,1);
  
  digitalWrite(oq,1);
  digitalWrite(orr,1);
  
  digitalWrite(ot,1);
  digitalWrite(ou,1);
}


void over2(int val)
{
  if(val==0)
  {
    over2_clear();
    over2_zero();
  }
  else if(val==1)
  {
    over2_clear();
    over2_one();
  }
  else if(val==2)
  {
    over2_clear();
    over2_two();
  }
  
  else if(val==3)
  {
    over2_clear();
    over2_three();
  }

  
  else if(val==4)
  {
    over2_clear();
    over2_four();
  }
  
  else if(val==5)
  {
    over2_clear();
    over2_five();
  }
  
  else if(val==6)
  {
    over2_clear();
    over2_six();
  }
  
  else if(val==7)
  {
    over2_clear();
    over2_seven();
  }
  
  else if(val==8)
  {
    over2_clear();
    over2_eight();
  }
  
  else if(val==9)
  {
    over2_clear();
    over2_nine();
  }
}
