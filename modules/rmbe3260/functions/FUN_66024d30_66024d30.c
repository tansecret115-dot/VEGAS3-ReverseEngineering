/* Module: rmbe3260.dll
   Function: FUN_66024d30
   Address: 66024d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66024d30(int param_1,float param_2)

{
  if (param_2 <= _DAT_66066fcc) {
    return 0x80070057;
  }
  *(float *)(param_1 + 0x2e) = param_2;
  return 0;
}


