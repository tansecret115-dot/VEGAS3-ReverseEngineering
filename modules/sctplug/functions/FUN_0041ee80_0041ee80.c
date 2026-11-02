/* Module: sctplug.dll
   Function: FUN_0041ee80
   Address: 0041ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0041ee80(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 != 0) && ((param_2 != 0 || (param_3 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xffff;
    if (uVar1 != 0) {
      while (((double)uVar1 / ((double)CONCAT44(param_3,param_2) / (double)param_4)) * _DAT_00437f20
             < _DAT_00437f18) {
        uVar1 = uVar1 * 2;
      }
      return uVar1;
    }
  }
  return 0;
}


