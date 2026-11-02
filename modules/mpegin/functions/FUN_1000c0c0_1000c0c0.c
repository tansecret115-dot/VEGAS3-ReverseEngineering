/* Module: mpegin.dll
   Function: FUN_1000c0c0
   Address: 1000c0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000c0c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint local_8;
  
  bVar4 = false;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  bVar3 = false;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x114) = 0;
  iVar5 = FUN_10006440(param_1,0);
  if (iVar5 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    FUN_10007e90(param_1,(byte *)s_First_sequence_header_not_found__10019104);
    return 1;
  }
  *(int *)(*(int *)(param_1 + 0x12e54) + 0x114) = *(int *)(*(int *)(param_1 + 0x12e54) + 0x114) + 1;
  uVar2 = *(uint *)(param_1 + 0x1bc);
  uVar8 = uVar2 & 0x80000001;
  bVar9 = uVar8 == 0;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0x204);
  if ((int)uVar8 < 0) {
    bVar9 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar9) {
    *(uint *)(param_1 + 200) = (uint)(*(int *)(param_1 + 0x204) == 0);
  }
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0;
  uVar8 = uVar2;
  do {
    iVar5 = FUN_10006440(param_1,0);
    if (((iVar5 != 0) || (iVar5 = *(int *)(param_1 + 0x12e54), *(int *)(iVar5 + 0x10c) != 0)) ||
       (*(int *)(iVar5 + 0x168) != 0)) break;
    *(int *)(iVar5 + 0x114) = *(int *)(iVar5 + 0x114) + 1;
    for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (*(uint *)(param_1 + 0x1bc) < uVar2) {
        piVar1 = (int *)(*(int *)(param_1 + 0x12e54) + 0x114);
        *piVar1 = *piVar1 + 1;
      }
      uVar8 = uVar8 - 1;
    }
    if (*(int *)(param_1 + 0x204) != 0) {
      bVar4 = true;
    }
    if ((*(int *)(param_1 + 0x1f0) == 3) || (!bVar3)) {
      bVar3 = true;
      if (*(int *)(param_1 + 0x1c0) == 1) {
        if ((local_8 != 0) && (*(int *)(param_1 + 0x16c) < 0)) {
          *(undefined4 *)(param_1 + 0x16c) = 0;
        }
        local_8 = local_8 + 1;
      }
      else {
        if (-1 < *(int *)(param_1 + 0x16c)) {
          *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
        }
        if (*(int *)(param_1 + 0x1c0) == 2) {
          *(undefined4 *)(param_1 + 0x168) = 0;
        }
        else {
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
        }
      }
    }
    else {
      bVar3 = false;
    }
  } while (local_8 < 3);
  if ((*(int *)(param_1 + 0x168) < 1) || (*(int *)(param_1 + 0x16c) < 1)) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x168) + 1;
    iVar5 = *(int *)(param_1 + 0x16c) + 1;
    *(int *)(param_1 + 0x16c) = iVar5;
    *(int *)(param_1 + 0x168) = iVar7;
    if (iVar5 % iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x170) = 1;
    }
  }
  if (((!bVar4) || (iVar5 = *(int *)(param_1 + 0x178), iVar5 < 3)) || (5 < iVar5)) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x44);
    goto LAB_1000c2f5;
  }
  if (iVar5 != 3) {
    if (iVar5 == 4) {
      *(undefined4 *)(param_1 + 0x48) = 0xb5112287;
      *(undefined4 *)(param_1 + 0x4c) = 0x4037f9dc;
      goto LAB_1000c2f5;
    }
    if (iVar5 != 5) goto LAB_1000c2f5;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x40380000;
LAB_1000c2f5:
  lVar10 = __ftol();
  *(longlong *)(*(int *)(param_1 + 0x12e54) + 0xa8) = lVar10;
  if (bVar4) {
    iVar5 = *(int *)(param_1 + 0x12e54);
    uVar11 = __alldiv(*(uint *)(iVar5 + 0xa8),*(uint *)(iVar5 + 0xac),2,0);
    *(undefined8 *)(iVar5 + 0xb0) = uVar11;
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x12e54);
  *(undefined4 *)(iVar5 + 0xb0) = 0;
  *(undefined4 *)(iVar5 + 0xb4) = 0;
  return 0;
}


