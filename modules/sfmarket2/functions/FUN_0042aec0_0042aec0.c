/* Module: sfmarket2.dll
   Function: FUN_0042aec0
   Address: 0042aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042aec0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0042a420(param_1,"globalpageheight",3,param_2,0,(uchar *)0x0);
  if (iVar1 < 0) {
    *param_2 = param_3;
  }
  return;
}


