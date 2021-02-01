void over0_clear()
{
  digitalWrite(oa,0);
  digitalWrite(ob,0);
  digitalWrite(oc,0);
  digitalWrite(od,0);
  digitalWrite(oe,0);
  digitalWrite(of,0);
  digitalWrite(og,0);
}

void over0_zero()
{
  digitalWrite(oa,1);
  digitalWrite(ob,1);
  digitalWrite(oc,1);
  digitalWrite(od,1);
  digitalWrite(oe,1);
  digitalWrite(of,1);
}

void over0_one()
{
  digitalWrite(ob,1);
  digitalWrite(oc,1);
}

void over0_two()
{
  digitalWrite(oa,1);
  digitalWrite(ob,1);
  
  digitalWrite(og,1);
  digitalWrite(oe,1);
  
  digitalWrite(od,1);
}

void over0_three()
{
  digitalWrite(ob,1);
  digitalWrite(oa,1);
  
  digitalWrite(og,1);
  digitalWrite(oc,1);
  
  digitalWrite(od,1);
}

void over0_four()
{
  digitalWrite(of,1);
  digitalWrite(og,1);
  
  digitalWrite(ob,1);
  digitalWrite(oc,1);
  
}

void over0_five()
{
  digitalWrite(of,1);
  digitalWrite(oa,1);
  
  digitalWrite(og,1);
  digitalWrite(oc,1);
  
  digitalWrite(od,1);
}

void over0_six()
{
  digitalWrite(of,1);
  digitalWrite(oa,1);
  
  digitalWrite(og,1);
  digitalWrite(oc,1);
  
  digitalWrite(od,1);
  digitalWrite(oe,1);
}

void over0_seven()
{
  digitalWrite(oa,1);
  
  digitalWrite(ob,1);
  digitalWrite(oc,1);
  
}

void over0_eight()
{
  digitalWrite(of,1);
  digitalWrite(oa,1);
  
  digitalWrite(og,1);
  digitalWrite(oc,1);
  
  digitalWrite(od,1);
  digitalWrite(oe,1);
  digitalWrite(ob,1);
}

void over0_nine()
{
  digitalWrite(of,1);
  digitalWrite(oa,1);
  
  digitalWrite(og,1);
  digitalWrite(oc,1);
  
  digitalWrite(od,1);
  digitalWrite(ob,1);
}


void over0(int val)
{
  if(val==0)
  {
    over0_clear();
    over0_zero();
  }
  else if(val==1)
  {
    over0_clear();
    over0_one();
  }
  else if(val==2)
  {
    over0_clear();
    over0_two();
  }
  
  else if(val==3)
  {
    over0_clear();
    over0_three();
  }

  
  else if(val==4)
  {
    over0_clear();
    over0_four();
  }
  
  else if(val==5)
  {
    over0_clear();
    over0_five();
  }
  
  else if(val==6)
  {
    over0_clear();
    over0_six();
  }
  
  else if(val==7)
  {
    over0_clear();
    over0_seven();
  }
  
  else if(val==8)
  {
    over0_clear();
    over0_eight();
  }
  
  else if(val==9)
  {
    over0_clear();
    over0_nine();
  }
}
