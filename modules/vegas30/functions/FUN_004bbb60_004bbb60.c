/* Module: vegas30.exe
   Function: FUN_004bbb60
   Address: 004bbb60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004bbc73) */
/* WARNING: Removing unreachable block (ram,0x004bbc10) */
/* WARNING: Removing unreachable block (ram,0x004bbceb) */

longlong FUN_004bbb60(int param_1,uint param_2,uint param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  uint local_8;
  uint local_4;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x600);
  }
  else {
    lVar8 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
  }
  if (param_5 != (int *)0x0) {
    *param_5 = -1;
  }
  piVar1 = *(int **)(param_1 + 0xc50);
  if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 < 1)) {
    if (param_4 < 0) {
      return 0;
    }
    return lVar8;
  }
  iVar6 = iVar2 + -1;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(piVar1[1] * iVar6 + piVar1[2]);
  }
  if (lVar8 <= *plVar5) {
    lVar8 = *plVar5;
  }
  local_8 = param_2;
  local_4 = param_3;
  iVar6 = _SfList_FindSortedInsertIndexRange_20(piVar1,&local_8,0,0xffffffff,&LAB_004ba800);
  piVar1 = *(int **)(param_1 + 0xc50);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)(piVar1[1] * iVar6 + piVar1[2]);
  }
  lVar3 = lVar8;
  if (CONCAT44(param_3,param_2) < lVar8) {
    lVar3 = CONCAT44(param_3,param_2);
  }
  if (param_4 < 1) {
    if (param_4 < 0) {
      while (iVar6 = iVar6 + -1, -1 < iVar6) {
        if (-1 < param_4) {
          return lVar3;
        }
        lVar3 = *(longlong *)
                 (*(int *)(*(int *)(param_1 + 0xc50) + 4) * iVar6 +
                 *(int *)(*(int *)(param_1 + 0xc50) + 8));
        if (param_5 != (int *)0x0) {
          *param_5 = iVar6;
        }
        param_4 = param_4 + 1;
      }
      if (param_4 < 0) {
        lVar3 = 0;
        if (param_5 != (int *)0x0) {
          *param_5 = -1;
          lVar3 = 0;
        }
      }
    }
  }
  else {
    if (((puVar7 != (uint *)0x0) && (*puVar7 == param_2)) && (puVar7[1] == param_3)) {
      iVar6 = iVar6 + 1;
    }
    for (; iVar6 < iVar2; iVar6 = iVar6 + 1) {
      if (param_4 < 1) {
        return lVar3;
      }
      lVar3 = *(longlong *)
               (*(int *)(*(int *)(param_1 + 0xc50) + 4) * iVar6 +
               *(int *)(*(int *)(param_1 + 0xc50) + 8));
      if (param_5 != (int *)0x0) {
        *param_5 = iVar6;
      }
      param_4 = param_4 + -1;
    }
    if (0 < param_4) {
      if (lVar3 <= lVar8) {
        lVar3 = lVar8;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = -1;
        return lVar3;
      }
    }
  }
  return lVar3;
}


