/* Module: rmbe3260.dll
   Function: FUN_66029f60
   Address: 66029f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66029f60(int param_1,float param_2)

{
  if (_DAT_66067730 < param_2) {
    if ((param_2 <= (float)DAT_6606dda4) && (*(float *)(param_1 + 0x18) <= param_2)) {
      *(float *)(param_1 + 0x1c) = param_2;
      return 0;
    }
  }
  return 0x80070057;
}


