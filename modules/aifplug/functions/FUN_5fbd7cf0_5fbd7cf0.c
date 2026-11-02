/* Module: aifplug.dll
   Function: FUN_5fbd7cf0
   Address: 5fbd7cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_5fbd7cf0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xffff;
    if (uVar1 != 0) {
      while (((double)uVar1 / ((double)param_2 / (double)param_3)) * _DAT_5fbff840 < _DAT_5fbff848)
      {
        uVar1 = uVar1 * 2;
      }
      return uVar1;
    }
  }
  return 0;
}


