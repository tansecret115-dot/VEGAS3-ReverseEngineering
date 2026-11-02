/* Module: sfppack2.dll
   Function: FUN_5cd3f765
   Address: 5cd3f765
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_5cd3f765(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return psVar2;
}


