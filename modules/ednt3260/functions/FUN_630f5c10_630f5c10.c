/* Module: ednt3260.dll
   Function: FUN_630f5c10
   Address: 630f5c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f5c10(undefined4 *param_1,short param_2,undefined4 *param_3,short param_4,short param_5)

{
  int iVar1;
  
  if (param_5 != 0) {
    iVar1 = (short)(param_5 + -1) + 1;
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_1 = param_1 + param_2 * 2;
      param_3 = param_3 + param_4 * 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


