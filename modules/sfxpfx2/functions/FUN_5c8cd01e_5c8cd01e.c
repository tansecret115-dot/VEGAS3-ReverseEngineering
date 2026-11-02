/* Module: sfxpfx2.dll
   Function: FUN_5c8cd01e
   Address: 5c8cd01e
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_5c8cd01e(short *param_1,short *param_2)

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


