/* Module: vegas30.exe
   Function: FUN_004955e0
   Address: 004955e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004956d4) */
/* WARNING: Removing unreachable block (ram,0x004956e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_004955e0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint local_10;
  
  lVar5 = CONCAT44(param_3,param_2);
  if (DAT_006476b8 != 0) {
    iVar3 = FUN_004942c0(param_1,&param_2);
    lVar5 = CONCAT44(param_3,param_2);
    if (iVar3 == 0) {
      iVar3 = FUN_00494680(param_1,&param_2);
      lVar5 = CONCAT44(param_3,param_2);
      if (iVar3 == 0) {
        if (((DAT_00647794 < 2) && (*(int *)(param_1 + 0xb78) == 0)) &&
           (*(int *)(param_1 + 0xb7c) == 0)) {
          iVar3 = FUN_00494470(param_1,&param_2);
          lVar5 = CONCAT44(param_3,param_2);
          if (iVar3 != 0) goto LAB_00495716;
        }
        iVar3 = param_3;
        uVar2 = param_2;
        lVar5 = CONCAT44(param_3,param_2);
        if (DAT_006476bc != 0) {
          if (_DAT_00610fd8 == *(double *)(param_1 + 0x1c0)) {
            lVar4 = CONCAT44(param_3,param_2);
          }
          else {
            ftol();
            lVar4 = ftol();
          }
          local_10 = (uint)lVar4;
          uVar1 = *(uint *)(param_1 + 400);
          if ((CONCAT44((iVar3 - *(int *)(param_1 + 0x194)) - (uint)(uVar2 < uVar1),uVar2 - uVar1)
               <= lVar4) &&
             (lVar4 <= CONCAT44(*(int *)(param_1 + 0x194) + iVar3 + (uint)CARRY4(uVar1,uVar2),
                                uVar1 + uVar2))) {
            param_2 = local_10;
            param_3 = (int)((ulonglong)lVar4 >> 0x20);
            lVar5 = lVar4;
            goto LAB_00495716;
          }
        }
        if (DAT_006476c4 != 0) {
          FUN_00494fa0(param_1,&param_2);
          lVar5 = CONCAT44(param_3,param_2);
        }
      }
    }
  }
LAB_00495716:
  if (DAT_006476c0 == 0) {
    return lVar5;
  }
  if (lVar5 < 0) {
    param_2 = -(int)lVar5;
    param_3 = -((int)((ulonglong)lVar5 >> 0x20) + (uint)((int)lVar5 != 0));
    _param_2 = ftol();
    uVar6 = ftol();
    return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
  }
  _param_2 = ftol();
  lVar5 = ftol();
  return lVar5;
}


