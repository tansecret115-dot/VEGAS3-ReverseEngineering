/* Module: rmbe3260.dll
   Function: FUN_6601a2c0
   Address: 6601a2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_6601a2c0(int param_1,float param_2)

{
  if (param_2 <= _DAT_660668bc) {
    return 0x80070057;
  }
  *(float *)(param_1 + 0x30) = param_2;
  return 0;
}


