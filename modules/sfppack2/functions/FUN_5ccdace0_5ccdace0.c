/* Module: sfppack2.dll
   Function: FUN_5ccdace0
   Address: 5ccdace0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccdace0(int param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 != 0) && (param_2 != *param_3 - 1U)) {
    if (param_2 < *param_3 - 1U) {
      puVar1 = (undefined4 *)(param_1 + 0xc + param_2 * 8);
      do {
        param_2 = param_2 + 1;
        puVar1[-3] = puVar1[-1];
        puVar1[-2] = *puVar1;
        puVar1 = puVar1 + 2;
      } while (param_2 < *param_3 - 1U);
    }
    *param_3 = *param_3 + -1;
  }
  return;
}


