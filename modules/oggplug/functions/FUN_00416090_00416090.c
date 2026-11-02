/* Module: oggplug.dll
   Function: FUN_00416090
   Address: 00416090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00416090(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 != 0) && ((param_2 != 0 || (param_3 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xffff;
    if (uVar1 != 0) {
      while (((double)uVar1 / ((double)CONCAT44(param_3,param_2) / (double)param_4)) * _DAT_0044c378
             < _DAT_0044c370) {
        uVar1 = uVar1 * 2;
      }
      return uVar1;
    }
  }
  return 0;
}


