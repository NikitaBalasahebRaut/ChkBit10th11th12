/*
    Problem statement :
 Accept number from user and check whether 10th,11th and 12th bit is on or off.
 
 Input :   2400
 Binary :    0000   0000    0000    0000    0000    1001    0110    0000
 Output : TRUE
 
 Input :   35
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output : FALSE
 
 */
 
    #include<stdio.h>
 #define TRUE 1
 #define FALSE 0
 typedef int BOOL;
 
 BOOL ChkBit(int iValue)
 {
	int iMask = 0x00000e00;
    int iResult = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
 
    iResult = iValue & iMask;

    if(iResult == iMask	)
	{
		 return TRUE;
	}
	else
	{
		return FALSE;
	}
	 
 }
 
 int main()
 {
  int iNo = 0;
  BOOL bRet = FALSE;
  
  printf("enter the number \n");
  scanf("%d",&iNo);
  
  bRet = ChkBit(iNo);
  
  if(bRet == TRUE)
  {
     printf("10th ,11th and 12th Bit is on \n");
  }
  else
  {
     printf("10th ,11th and 12th Bit is off \n");
  }
 
 return 0;
 }
 
 /*
 
 output
 
 enter the number
2400
6th ,7th and 12th Bit is off

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\ChkBit10Tth11th12th>myexe
enter the number
35
6th ,7th and 12th Bit is off

*/