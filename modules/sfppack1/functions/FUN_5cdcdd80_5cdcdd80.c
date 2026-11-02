/* Module: sfppack1.dll
   Function: FUN_5cdcdd80
   Address: 5cdcdd80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_5cdcdd80(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  
  if (param_5[5] == 0) {
    iVar1 = *param_5;
    *param_5 = iVar1 - param_2;
    if (0 < (int)(iVar1 - param_2)) {
      return 0;
    }
    uVar2 = rand();
    *param_5 = (uVar2 & 3) * (param_4 >> 4) + param_4 * 4;
    uVar2 = rand();
    param_5[3] = (uVar2 & 0x1f) + 1;
    uVar2 = rand();
    param_5[4] = (uVar2 & 0x1f) + 1;
    param_5[5] = param_4 >> 3;
    _DAT_5ce2a0fc = 0;
    _DAT_5ce2a100 = 0;
  }
  uVar2 = param_5[5];
  if (uVar2 <= param_2) {
    param_2 = uVar2;
  }
  param_5[5] = uVar2 - param_2;
  return param_2;
}


