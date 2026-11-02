/* Module: sfppack2.dll
   Function: FUN_5cd3f783
   Address: 5cd3f783
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_5cd3f783(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      sVar1 = *param_2;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (sVar1 != 0);
    if (param_3 == 0) {
      *param_1 = 0;
    }
  }
  return psVar2;
}


