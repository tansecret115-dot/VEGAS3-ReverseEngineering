/* Module: vegas30.exe
   Function: FUN_004976f0
   Address: 004976f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00497879) */
/* WARNING: Removing unreachable block (ram,0x00497889) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004976f0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint local_8;
  
  if (DAT_006476b8 == 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (param_4 < 0) {
      bVar4 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(param_4 + (uint)bVar4);
      _param_3 = ftol();
      uVar5 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar5 >> 0x20) + (uint)((int)uVar5 != 0)),-(int)uVar5);
    }
    _param_3 = ftol();
    uVar5 = ftol();
    return uVar5;
  }
  iVar2 = FUN_004942c0(param_1,&param_3);
  if ((iVar2 == 0) && (iVar3 = FUN_00494870(param_1,&param_3,param_2), iVar2 = param_4, iVar3 == 0))
  {
    if (DAT_006476bc != 0) {
      if (_DAT_00610fd8 == *(double *)(param_1 + 0x1c0)) {
        lVar6 = CONCAT44(param_4,param_3);
      }
      else {
        ftol();
        lVar6 = ftol();
      }
      local_8 = (uint)lVar6;
      uVar1 = *(uint *)(param_1 + 400);
      if ((CONCAT44((iVar2 - *(int *)(param_1 + 0x194)) - (uint)(param_3 < uVar1),param_3 - uVar1)
           <= lVar6) &&
         (lVar6 <= CONCAT44(*(int *)(param_1 + 0x194) + iVar2 + (uint)CARRY4(uVar1,param_3),
                            uVar1 + param_3))) {
        param_3 = local_8;
        param_4 = (int)((ulonglong)lVar6 >> 0x20);
        goto LAB_004978ac;
      }
    }
    FUN_00494680(param_1,&param_3);
  }
LAB_004978ac:
  if (DAT_006476c0 != 0) {
    if (-1 < param_4) {
      _param_3 = ftol();
      uVar5 = ftol();
      return uVar5;
    }
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + (uint)bVar4);
    _param_3 = ftol();
    uVar5 = ftol();
    param_3 = -(int)uVar5;
    param_4 = -((int)((ulonglong)uVar5 >> 0x20) + (uint)((int)uVar5 != 0));
  }
  return CONCAT44(param_4,param_3);
}


