/* Module: 28_83260.dll
   Function: FUN_10001d70
   Address: 10001d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001d70(float *param_1,short *param_2,int param_3)

{
  if (0 < param_3) {
    do {
      _DAT_1000b8f8 = *param_1;
      DAT_1000b8fc = (int)ROUND(_DAT_1000b8f8);
      param_1 = param_1 + 1;
      *param_2 = (short)DAT_1000b8fc * 6;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return 0;
}


