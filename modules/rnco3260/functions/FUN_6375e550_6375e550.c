/* Module: rnco3260.dll
   Function: FUN_6375e550
   Address: 6375e550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6375e550(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5)

{
  if ((*param_1 & 1) != 0) {
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
    *param_3 = *param_3 + param_5;
    *param_4 = *param_4 - param_5;
  }
  if ((*param_2 & 1) != 0) {
    *param_2 = *param_2 - 1;
    *param_4 = *param_4 - param_5;
  }
  if ((0 < (int)*param_2) && (0 < *param_4)) {
    return 1;
  }
  return 0;
}


