/* Module: vegas30.exe
   Function: FUN_00494da0
   Address: 00494da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00494eb0) */
/* WARNING: Removing unreachable block (ram,0x00494ec4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00494da0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_10;
  
  lVar7 = CONCAT44(param_3,param_2);
  if (DAT_006476b8 != 0) {
    iVar5 = FUN_004942c0(param_1,&param_2);
    lVar7 = CONCAT44(param_3,param_2);
    if (iVar5 == 0) {
      iVar5 = FUN_00494680(param_1,&param_2);
      lVar7 = CONCAT44(param_3,param_2);
      if (iVar5 == 0) {
        if (((DAT_00647794 < 2) && (*(int *)(param_1 + 0xb78) == 0)) &&
           (*(int *)(param_1 + 0xb7c) == 0)) {
          iVar5 = FUN_00494470(param_1,&param_2);
          lVar7 = CONCAT44(param_3,param_2);
          if (iVar5 != 0) goto LAB_00494ede;
        }
        if (DAT_006476c4 != 0) {
          iVar5 = FUN_00494fa0(param_1,&param_2);
          lVar7 = CONCAT44(param_3,param_2);
          if (iVar5 != 0) goto LAB_00494ede;
        }
        iVar5 = param_3;
        uVar4 = param_2;
        lVar7 = CONCAT44(param_3,param_2);
        lVar3 = CONCAT44(param_3,param_2);
        lVar2 = CONCAT44(param_3,param_2);
        if (DAT_006476bc != 0) {
          if (_DAT_00610fd8 == *(double *)(param_1 + 0x1c0)) {
            lVar6 = CONCAT44(param_3,param_2);
          }
          else {
            ftol();
            lVar6 = ftol();
          }
          local_10 = (uint)lVar6;
          uVar1 = *(uint *)(param_1 + 400);
          lVar7 = lVar2;
          if ((CONCAT44((iVar5 - *(int *)(param_1 + 0x194)) - (uint)(uVar4 < uVar1),uVar4 - uVar1)
               <= lVar6) &&
             (lVar7 = lVar3,
             lVar6 <= CONCAT44(*(int *)(param_1 + 0x194) + iVar5 + (uint)CARRY4(uVar1,uVar4),
                               uVar1 + uVar4))) {
            param_2 = local_10;
            param_3 = (int)((ulonglong)lVar6 >> 0x20);
            lVar7 = lVar6;
          }
        }
      }
    }
  }
LAB_00494ede:
  if (DAT_006476c0 == 0) {
    return lVar7;
  }
  if (lVar7 < 0) {
    param_2 = -(int)lVar7;
    param_3 = -((int)((ulonglong)lVar7 >> 0x20) + (uint)((int)lVar7 != 0));
    _param_2 = ftol();
    uVar8 = ftol();
    return CONCAT44(-((int)((ulonglong)uVar8 >> 0x20) + (uint)((int)uVar8 != 0)),-(int)uVar8);
  }
  _param_2 = ftol();
  lVar7 = ftol();
  return lVar7;
}


