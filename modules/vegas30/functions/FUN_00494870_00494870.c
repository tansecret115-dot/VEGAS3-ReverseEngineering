/* Module: vegas30.exe
   Function: FUN_00494870
   Address: 00494870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00494870(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_8;
  uint local_4;
  
  uVar7 = *(uint *)(param_1 + 400);
  local_8 = *param_2;
  local_4 = param_2[1];
  uVar10 = local_8 - uVar7;
  iVar11 = (local_4 - *(int *)(param_1 + 0x194)) - (uint)(local_8 < uVar7);
  uVar3 = uVar7 + local_8;
  iVar8 = *(int *)(param_1 + 0x194) + local_4 + (uint)CARRY4(uVar7,local_8);
  piVar5 = *(int **)(param_3 + 0x28);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar6 = *piVar5;
  if (iVar6 < 2) {
    return 0;
  }
  iVar4 = _SfList_FindSortedInsertIndexRange_20(piVar5,&local_8,0,0xffffffff,&LAB_005c5a20);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      return 0;
    }
  }
  iVar1 = piVar5[2];
  piVar5 = (int *)(iVar4 * 0xd0 + iVar1);
  uVar7 = piVar5[5];
  uVar2 = piVar5[4];
  if (((int)uVar7 < iVar11) ||
     (((((int)uVar7 <= iVar11 && (uVar2 < uVar10)) || (iVar8 < (int)uVar7)) ||
      ((iVar8 <= (int)uVar7 && (uVar3 < uVar2)))))) {
    if (iVar6 <= iVar4 + 1) {
      return 0;
    }
    uVar7 = piVar5[0x38];
    uVar2 = piVar5[0x39];
    if ((int)uVar2 < iVar11) {
      return 0;
    }
    if (((int)uVar2 <= iVar11) && (uVar7 < uVar10)) {
      return 0;
    }
    if (iVar8 < (int)uVar2) {
      return 0;
    }
    if ((iVar8 <= (int)uVar2) && (uVar3 < uVar7)) {
      return 0;
    }
    *param_2 = uVar7;
    param_2[1] = uVar2;
    iVar6 = *(int *)((iVar4 + 1) * 0xd0 + iVar1);
    if (iVar6 == 0) goto LAB_00494a1d;
    uVar7 = *(uint *)(iVar6 + 0x1c);
    uVar2 = *(uint *)(iVar6 + 0x18);
    if (((iVar11 <= (int)uVar7) &&
        (((iVar11 < (int)uVar7 || (uVar10 <= uVar2)) && ((int)uVar7 <= iVar8)))) &&
       (((int)uVar7 < iVar8 || (uVar2 <= uVar3)))) {
      *param_2 = uVar2;
      param_2[1] = uVar7;
      return 1;
    }
    uVar9 = *(uint *)(iVar6 + 0x20) + uVar2;
    iVar6 = *(int *)(iVar6 + 0x24) + uVar7 + (uint)CARRY4(*(uint *)(iVar6 + 0x20),uVar2);
  }
  else {
    *param_2 = uVar2;
    param_2[1] = uVar7;
    iVar6 = *piVar5;
    if (iVar6 == 0) {
LAB_00494a1d:
      uVar3 = *param_2 - 1;
      uVar7 = param_2[1] - (uint)(*param_2 == 0);
      if (((int)uVar7 < 1) && ((int)uVar7 < 0)) {
        *param_2 = 0;
        param_2[1] = 0;
        return 1;
      }
      goto LAB_00494aa4;
    }
    uVar7 = *(uint *)(iVar6 + 0x1c);
    uVar2 = *(uint *)(iVar6 + 0x18);
    if (((iVar11 <= (int)uVar7) &&
        (((iVar11 < (int)uVar7 || (uVar10 <= uVar2)) && ((int)uVar7 <= iVar8)))) &&
       (((int)uVar7 < iVar8 || (uVar2 <= uVar3)))) {
      *param_2 = uVar2;
      param_2[1] = uVar7;
      return 1;
    }
    uVar9 = *(uint *)(iVar6 + 0x20) + uVar2;
    iVar6 = *(int *)(iVar6 + 0x24) + uVar7 + (uint)CARRY4(*(uint *)(iVar6 + 0x20),uVar2);
  }
  if (iVar6 < iVar11) {
    return 1;
  }
  if ((iVar6 <= iVar11) && (uVar9 < uVar10)) {
    return 1;
  }
  if (iVar8 < iVar6) {
    return 1;
  }
  if ((iVar8 <= iVar6) && (uVar3 < uVar9)) {
    return 1;
  }
  uVar3 = uVar9 - 1;
  uVar7 = iVar6 - (uint)(uVar9 == 0);
LAB_00494aa4:
  *param_2 = uVar3;
  param_2[1] = uVar7;
  return 1;
}


