/* Module: wavplug.dll
   Function: FUN_5f3a2e80
   Address: 5f3a2e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_5f3a2e80(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 != 0) && ((param_2 != 0 || (param_3 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xffff;
    if (uVar1 != 0) {
      while (((double)uVar1 / ((double)CONCAT44(param_3,param_2) / (double)param_4)) * _DAT_5f3cfac0
             < _DAT_5f3cfab8) {
        uVar1 = uVar1 * 2;
      }
      return uVar1;
    }
  }
  return 0;
}


