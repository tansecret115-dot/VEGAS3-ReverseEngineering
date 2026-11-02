/* Module: sfmarket2.dll
   Function: FUN_00481570
   Address: 00481570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481570(int *param_1,byte *param_2,uint param_3)

{
  FUN_00481090(param_1,(byte *)&DAT_004a8690,param_2,param_3);
  param_1[0x18] = param_1[0x18] | 4;
  return;
}


