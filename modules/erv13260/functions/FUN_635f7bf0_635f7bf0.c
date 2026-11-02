/* Module: erv13260.dll
   Function: FUN_635f7bf0
   Address: 635f7bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f7bf0(int param_1,int *param_2,int param_3)

{
  *param_2 = param_1;
  param_2[2] = param_3 + param_1;
  param_2[1] = ((int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2) + param_3 + param_1;
  return;
}


