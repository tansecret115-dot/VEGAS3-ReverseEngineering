/* Module: vegas30.exe
   Function: FUN_004a2d10
   Address: 004a2d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a2f16) */
/* WARNING: Removing unreachable block (ram,0x004a2e96) */
/* WARNING: Removing unreachable block (ram,0x004a2f2a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_004a2d10(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x600);
  }
  else {
    lVar8 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
  }
  lVar2 = lVar8;
  if (param_5 < 0) {
    lVar2 = 0;
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  if ((param_2 < 0) || (iVar5 + -1 < param_2)) {
    iVar5 = 0;
  }
  else if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar5 = *(int *)(_DAT_00000008 + param_2 * 4);
  }
  else {
    iVar5 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    iVar5 = *(int *)(*(int *)(iVar5 + 8) + param_2 * 4);
  }
  lVar3 = lVar2;
  if (((iVar5 != 0) && (piVar4 = *(int **)(iVar5 + 0x28), piVar4 != (int *)0x0)) &&
     (iVar5 = *piVar4, iVar5 != 0)) {
    local_8 = param_3;
    local_4 = param_4;
    iVar6 = _SfList_FindSortedInsertIndexRange_20(piVar4,&local_8,0,0xffffffff,&LAB_005c5a20);
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + -1;
    }
    if ((iVar6 < 0) || (*piVar4 + -1 < iVar6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = piVar4[1] * iVar6 + piVar4[2];
    }
    if (param_5 < 1) {
      if (param_5 < 0) {
        iVar5 = param_5;
        if (iVar7 != 0) {
          param_4 = param_4 - (uint)(param_3 == 0);
          if ((param_4 <= *(int *)(iVar7 + 0x14)) &&
             ((param_4 < *(int *)(iVar7 + 0x14) || (param_3 - 1 <= *(uint *)(iVar7 + 0x10))))) {
            iVar6 = iVar6 + -1;
          }
        }
        for (; -1 < iVar6; iVar6 = iVar6 + -1) {
          if (-1 < iVar5) goto LAB_004a2f00;
          iVar7 = piVar4[1] * iVar6;
          iVar5 = iVar5 + 1;
          lVar3 = CONCAT44(*(undefined4 *)(iVar7 + 0x14 + piVar4[2]),
                           *(undefined4 *)(iVar7 + 0x10 + piVar4[2]));
        }
        if (iVar5 < 0) {
          lVar3 = 0;
        }
      }
    }
    else {
      iVar1 = param_5;
      if (iVar7 != 0) {
        param_4 = param_4 + (uint)(0xfffffffe < param_3);
        if ((*(int *)(iVar7 + 0x14) <= param_4) &&
           ((*(int *)(iVar7 + 0x14) < param_4 || (*(uint *)(iVar7 + 0x10) <= param_3 + 1)))) {
          iVar6 = iVar6 + 1;
        }
      }
      for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
        if (iVar1 < 1) goto LAB_004a2f00;
        iVar7 = piVar4[1] * iVar6;
        iVar1 = iVar1 + -1;
        lVar3 = CONCAT44(*(undefined4 *)(iVar7 + 0x14 + piVar4[2]),
                         *(undefined4 *)(iVar7 + 0x10 + piVar4[2]));
      }
      if ((0 < iVar1) && (lVar3 <= lVar8)) {
        lVar3 = lVar8;
      }
    }
LAB_004a2f00:
    if (param_5 < 1) {
      if (lVar3 <= lVar2) {
        return lVar2;
      }
    }
    else if (lVar2 <= lVar3) {
      return lVar2;
    }
  }
  return lVar3;
}


