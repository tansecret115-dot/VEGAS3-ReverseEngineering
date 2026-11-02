/* Module: vegas30.exe
   Function: FUN_00492c20
   Address: 00492c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00492cc9) */

void FUN_00492c20(int param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int local_28;
  int local_20;
  uint local_14;
  int iStack_10;
  
  uVar9 = *(uint *)(param_1 + 0xac0);
  local_28 = *(int *)(param_1 + 0xac4);
  uVar2 = *(uint *)(param_1 + 0xa8);
  uVar8 = *(uint *)(param_1 + 0xac8);
  local_20 = *(int *)(param_1 + 0xacc);
  iVar7 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    local_14 = 0xffffffff;
  }
  else {
    lVar10 = ftol();
    uVar3 = lVar10 + (int)*(uint *)(param_1 + 0xac0);
    local_14 = (uint)uVar3;
    if ((uVar3 < 0x8000000000000000) ||
       ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_14)))) {
      if (0x3fff < (longlong)uVar3) {
        local_14 = 0x3fff;
      }
    }
    else {
      local_14 = 0xffffc000;
    }
  }
  uVar6 = *(uint *)(param_1 + 0xbac);
  if (uVar6 == 0) {
    iStack_10 = -1;
  }
  else {
    uVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) >> 1;
    lVar10 = (longlong)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xba8)) *
             (longlong)*(int *)(param_1 + 0xbb0);
    if (lVar10 < 0) {
      lVar10 = CONCAT44((int)((ulonglong)lVar10 >> 0x20) - (uint)((uint)lVar10 < uVar4),
                        (uint)lVar10 - uVar4);
      uVar4 = 0;
    }
    iStack_10 = *(int *)(param_1 + 0xac4) +
                (int)((longlong)(lVar10 + (ulonglong)uVar4) / (longlong)(int)uVar6);
  }
  iVar5 = *(int *)(param_1 + 0xb8c);
  uVar6 = *(uint *)(param_1 + 0xb88);
  if ((-1 < iVar5) && ((0 < iVar5 || (uVar6 != 0)))) {
    uVar9 = uVar9 - 1;
  }
  iVar5 = *(int *)(param_1 + 0xb94) + iVar5 + (uint)CARRY4(*(uint *)(param_1 + 0xb90),uVar6);
  if ((iVar5 <= *(int *)(param_1 + 0x604)) &&
     ((iVar5 < *(int *)(param_1 + 0x604) ||
      (*(uint *)(param_1 + 0xb90) + uVar6 < *(uint *)(param_1 + 0x600))))) {
    uVar8 = uVar8 + 1;
  }
  if (0 < *(int *)(param_1 + 0xba8)) {
    local_28 = local_28 + -1;
  }
  if (*(int *)(param_1 + 0xba8) + *(int *)(param_1 + 0xbac) < *(int *)(param_1 + 0x674)) {
    local_20 = local_20 + 1;
  }
  puVar1 = (uint *)(param_1 + 500);
  *puVar1 = uVar9;
  *(int *)(param_1 + 0x1f8) = local_28;
  *(uint *)(param_1 + 0x1fc) = uVar8;
  *(int *)(param_1 + 0x200) = local_20;
  if (*(int *)(param_1 + 0x208) == 0) {
    uVar6 = uVar9;
    if (((int)uVar9 <= (int)local_14) && (uVar6 = local_14, (int)uVar8 < (int)local_14)) {
      uVar6 = uVar8;
    }
    *puVar1 = uVar6;
    if (((int)uVar9 <= (int)uVar2) && (uVar9 = uVar8, (int)uVar2 <= (int)uVar8)) {
      uVar9 = uVar2;
    }
    *(uint *)(param_1 + 0x1fc) = uVar9;
  }
  else if (*(int *)(param_1 + 0x208) != 2) {
    uVar6 = uVar9;
    if (((int)uVar9 <= (int)local_14) && (uVar6 = local_14, (int)uVar8 < (int)local_14)) {
      uVar6 = uVar8;
    }
    *puVar1 = uVar6;
    if ((int)uVar2 < (int)uVar9) {
      *(uint *)(param_1 + 0x1fc) = uVar9;
      FUN_00492e90(puVar1);
      return;
    }
    if ((int)uVar2 <= (int)uVar8) {
      uVar8 = uVar2;
    }
    *(uint *)(param_1 + 0x1fc) = uVar8;
    FUN_00492e90(puVar1);
    return;
  }
  iVar5 = local_28;
  if ((local_28 <= iStack_10) && (iVar5 = iStack_10, local_20 < iStack_10)) {
    iVar5 = local_20;
  }
  *(int *)(param_1 + 0x1f8) = iVar5;
  if (iVar7 < local_28) {
    *(int *)(param_1 + 0x200) = local_28;
    FUN_00492e90(puVar1);
    return;
  }
  if (local_20 < iVar7) {
    iVar7 = local_20;
  }
  *(int *)(param_1 + 0x200) = iVar7;
  FUN_00492e90(puVar1);
  return;
}


