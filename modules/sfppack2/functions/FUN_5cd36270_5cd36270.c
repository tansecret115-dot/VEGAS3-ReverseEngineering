/* Module: sfppack2.dll
   Function: FUN_5cd36270
   Address: 5cd36270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd36270(undefined4 *param_1,undefined4 *param_2,uint param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_5cd264b0(param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_5cd346f0(param_2,param_3);
  iVar2 = FUN_5cd264b0(param_1,1);
  if (iVar2 != 0) {
    FUN_5cd34f10((int)param_2,param_3,_DAT_5cd59348,-_DAT_5cd5934c);
    iVar2 = FUN_5cd264b0(param_1,2);
    if (iVar2 == 0) {
      return 0;
    }
    uVar5 = 4;
    iVar2 = 2;
    if (0x10 < param_3) {
      pfVar4 = (float *)&DAT_5cd59358;
      uVar6 = uVar5;
      do {
        FUN_5cd356b0((int)param_2,param_3,uVar6,pfVar4[-2],-pfVar4[-1],*pfVar4,-pfVar4[1]);
        iVar3 = FUN_5cd264b0(param_1,2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar5 = uVar6 << 2;
        iVar2 = iVar2 + 2;
        pfVar4 = pfVar4 + 4;
        uVar1 = uVar6 * 0x10;
        uVar6 = uVar5;
      } while (uVar1 < param_3);
    }
    if (uVar5 * 4 - param_3 == 0) {
      FUN_5cd34bf0((int)param_2,param_3,*(float *)(&UNK_5cd59340 + iVar2 * 8),
                   -*(float *)(&UNK_5cd59344 + iVar2 * 8),*(float *)(&DAT_5cd59348 + iVar2 * 8),
                   -*(float *)(&DAT_5cd5934c + iVar2 * 8),param_4 + param_4);
      iVar2 = FUN_5cd264b0(param_1,1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      FUN_5cd347d0((int)param_2,param_3,*(float *)(&UNK_5cd59340 + iVar2 * 8),
                   -*(float *)(&UNK_5cd59344 + iVar2 * 8),param_4 + param_4);
    }
    return 1;
  }
  return 0;
}


