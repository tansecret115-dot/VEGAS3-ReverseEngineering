/* Module: sfppack2.dll
   Function: FUN_5cd255a0
   Address: 5cd255a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5cd255a0(undefined4 *param_1,double *param_2,uint param_3,double param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  int local_20;
  
  FUN_5cd25110(param_2,param_3);
  iVar1 = FUN_5cd264b0(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  FUN_5cd25810((int)param_2,param_3,_DAT_5cd631f0,_DAT_5cd631f8);
  iVar1 = FUN_5cd264b0(param_1,2);
  if (iVar1 == 0) {
    return false;
  }
  uVar4 = 8;
  uVar3 = param_3 >> 1;
  iVar1 = 2;
  local_20 = 2;
  if (8 < uVar3) {
    pdVar5 = (double *)&DAT_5cd63200;
    do {
      if (uVar4 * 2 == uVar3) {
        FUN_5cd25d30((int)param_2,param_3,uVar4,*pdVar5,pdVar5[1]);
        iVar1 = local_20 + 1;
        iVar2 = FUN_5cd264b0(param_1,1);
        if (iVar2 == 0) {
          return false;
        }
        break;
      }
      FUN_5cd25940((int)param_2,param_3,uVar4,*pdVar5,pdVar5[1],pdVar5[2],pdVar5[3]);
      iVar1 = FUN_5cd264b0(param_1,2);
      if (iVar1 == 0) {
        return false;
      }
      uVar4 = uVar4 << 2;
      iVar1 = local_20 + 2;
      pdVar5 = pdVar5 + 4;
      local_20 = iVar1;
    } while (uVar4 < uVar3);
  }
  FUN_5cd25760(param_2,param_3,*(double *)(iVar1 * 0x10 + 0x5cd631e0),
               *(double *)(iVar1 * 0x10 + 0x5cd631e8),param_4 / (double)param_3);
  iVar1 = FUN_5cd264b0(param_1,1);
  return iVar1 != 0;
}


