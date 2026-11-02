/* Module: rmbe3260.dll
   Function: FUN_66024c80
   Address: 66024c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66024c80(int param_1,float param_2)

{
  if (param_2 < _DAT_66066fc8) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x20) = param_2;
  return 0;
}


