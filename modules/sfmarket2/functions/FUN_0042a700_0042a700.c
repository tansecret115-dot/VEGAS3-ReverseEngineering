/* Module: sfmarket2.dll
   Function: FUN_0042a700
   Address: 0042a700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042a700(int param_1,int *param_2,int param_3,uchar *param_4)

{
  int iVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == 0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_0042a420(param_1,"keycode",3,param_2,0,param_4);
    if (iVar1 < 0) {
      *param_2 = param_3;
      return iVar1;
    }
  }
  return iVar1;
}


