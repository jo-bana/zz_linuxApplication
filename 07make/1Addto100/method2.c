int method2(int maxValue)
{
    if(1==maxValue)   /* ����ϰ��*/
    {
      return 1;
    }
    return(maxValue+method2(maxValue-1));
}
