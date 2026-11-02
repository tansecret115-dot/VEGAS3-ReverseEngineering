/* Module: sfppack2.dll
   Function: FUN_5cd25f00
   Address: 5cd25f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd25f00(undefined4 *param_1,double *param_2,uint param_3,double param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  
  iVar1 = FUN_5cd264b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_5cd25110(param_2,param_3);
  iVar1 = FUN_5cd264b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_5cd25810((int)param_2,param_3,_DAT_5cd631f0,-_DAT_5cd631f8);
  iVar1 = FUN_5cd264b0(param_1,2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = 8;
  uVar2 = param_3 >> 1;
  iVar1 = 2;
  if (8 < uVar2) {
    pdVar5 = (double *)&DAT_5cd63200;
    do {
      if (uVar4 * 2 == uVar2) {
        FUN_5cd25d30((int)param_2,param_3,uVar4,*pdVar5,-pdVar5[1]);
        iVar1 = iVar1 + 1;
        iVar3 = FUN_5cd264b0(param_1,1);
        if (iVar3 == 0) {
          return 0;
        }
        break;
      }
      FUN_5cd260a0((int)param_2,param_3,uVar4,*pdVar5,-pdVar5[1],pdVar5[2],-pdVar5[3]);
      iVar3 = FUN_5cd264b0(param_1,2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = iVar1 + 2;
      uVar4 = uVar4 << 2;
      pdVar5 = pdVar5 + 4;
    } while (uVar4 < uVar2);
  }
  FUN_5cd25760(param_2,param_3,*(double *)(iVar1 * 0x10 + 0x5cd631e0),
               -*(double *)(iVar1 * 0x10 + 0x5cd631e8),param_4 + param_4);
  return 1;
}


