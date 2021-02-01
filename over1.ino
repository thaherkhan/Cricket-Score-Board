void over1_clear()
{
  digitalWrite(oh,0);
  digitalWrite(oi,0);
  digitalWrite(oj,0);
  digitalWrite(ok,0);
  digitalWrite(ol,0);
  digitalWrite(om,0);
  digitalWrite(on,0);
}

void over1_zero()
{
  digitalWrite(oh,1);
  digitalWrite(oi,1);
  digitalWrite(oj,1);
  digitalWrite(ok,1);
  digitalWrite(ol,1);
  digitalWrite(om,1);
}

void over1_one()
{
  digitalWrite(oi,1);
  digitalWrite(oj,1);
}

void over1_two()
{
  digitalWrite(oh,1);
  digitalWrite(oi,1);
  
  digitalWrite(on,1);
  digitalWrite(ol,1);
  
  digitalWrite(ok,1);
}

void over1_three()
{
  digitalWrite(oh,1);
  digitalWrite(oi,1);
  
  digitalWrite(oj,1);
  digitalWrite(ok,1);
  
  digitalWrite(on,1);
}

void over1_four()
{
  digitalWrite(oj,1);
  digitalWrite(oi,1);
  
  digitalWrite(om,1);
  digitalWrite(on,1);
  
}

void over1_five()
{
  digitalWrite(oh,1);
  digitalWrite(om,1);
  
  digitalWrite(on,1);
  digitalWrite(oj,1);
  
  digitalWrite(ok,1);
}

void over1_six()
{
  digitalWrite(oh,1);
  digitalWrite(oj,1);
  
  digitalWrite(ok,1);
  digitalWrite(ol,1);
  
  digitalWrite(om,1);
  digitalWrite(on,1);
}

void over1_seven()
{
  digitalWrite(oh,1);
  
  digitalWrite(oi,1);
  digitalWrite(oj,1);
  
}

void over1_eight()
{
  digitalWrite(oh,1);
  digitalWrite(oi,1);
  
  digitalWrite(oj,1);
  digitalWrite(ok,1);
  
  digitalWrite(ol,1);
  digitalWrite(om,1);
  digitalWrite(on,1);
}

void over1_nine()
{
  digitalWrite(oh,1);
  digitalWrite(oi,1);
  
  digitalWrite(oj,1);
  digitalWrite(ok,1);
  
  digitalWrite(om,1);
  digitalWrite(on,1);
}


void over1(int val)
{
  if(val==0)
  {
    over1_clear();
    over1_zero();
  }
  else if(val==1)
  {
    over1_clear();
    over1_one();
  }
  else if(val==2)
  {
    over1_clear();
    over1_two();
  }
  
  else if(val==3)
  {
    over1_clear();
    over1_three();
  }

  
  else if(val==4)
  {
    over1_clear();
    over1_four();
  }
  
  else if(val==5)
  {
    over1_clear();
    over1_five();
  }
  
  else if(val==6)
  {
    over1_clear();
    over1_six();
  }
  
  else if(val==7)
  {
    over1_clear();
    over1_seven();
  }
  
  else if(val==8)
  {
    over1_clear();
    over1_eight();
  }
  
  else if(val==9)
  {
    over1_clear();
    over1_nine();
  }
}
