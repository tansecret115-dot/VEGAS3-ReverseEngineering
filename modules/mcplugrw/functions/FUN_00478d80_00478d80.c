/* Module: mcplugrw.dll
   Function: FUN_00478d80
   Address: 00478d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478d80(int *param_1,byte *param_2,uint param_3)

{
  FUN_004788a0(param_1,(byte *)&DAT_004a6e14,param_2,param_3);
  param_1[0x18] = param_1[0x18] | 4;
  return;
}


