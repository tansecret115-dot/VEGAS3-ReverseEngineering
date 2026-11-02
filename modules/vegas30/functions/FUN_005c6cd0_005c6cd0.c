/* Module: vegas30.exe
   Function: FUN_005c6cd0
   Address: 005c6cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005c6e9a) */
/* WARNING: Removing unreachable block (ram,0x005c6da5) */
/* WARNING: Removing unreachable block (ram,0x005c6ee6) */

void FUN_005c6cd0(int param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_8;
  
  iVar2 = DAT_00649978;
  iVar3 = DAT_00649984;
  iVar6 = DAT_00649980;
  if (*(int *)(param_1 + 4) != 3) {
    iVar2 = DAT_00647798;
    iVar3 = DAT_006477a4;
    iVar6 = DAT_006477a0;
  }
  if (iVar2 == 0) {
    return;
  }
  if ((iVar6 == 0) && (iVar3 == 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  uVar7 = __allmul(iVar6,iVar3,2,0);
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  lVar8 = CONCAT44(iVar3,iVar6);
  if ((iVar2 <= iVar4) &&
     ((iVar2 < iVar4 || (lVar8 = CONCAT44(iVar3,iVar6), *(uint *)(param_1 + 0x20) < (uint)uVar7))))
  {
    lVar8 = __alldiv(*(undefined4 *)(param_1 + 0x20),iVar2,2,0);
  }
  iVar6 = (int)((ulonglong)lVar8 >> 0x20);
  local_8 = (int)lVar8;
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x10000) == 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    if ((*(int *)(iVar3 + 8) == 0) && (*(int *)(iVar3 + 0xc) == 0)) {
      if ((*(int *)(param_1 + 0x78) == local_8) && (*(int *)(param_1 + 0x7c) == iVar6)) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) < lVar8) {
        lVar9 = lVar8;
      }
      *(longlong *)(param_1 + 0x78) = lVar9;
    }
  }
  iVar4 = *(int *)(param_1 + 0x7c);
  uVar5 = *(uint *)(param_1 + 0x78);
  if ((iVar2 < iVar4) || ((iVar2 <= iVar4 && (*(uint *)(param_1 + 0x20) <= uVar5)))) {
    uVar5 = *(uint *)(param_1 + 0x20);
    iVar4 = iVar2;
  }
  *(uint *)(param_1 + 0x78) = uVar5;
  *(int *)(param_1 + 0x7c) = iVar4;
  if ((((param_2 & 2) == 0) || (*(int *)(iVar3 + 0x18) == 0)) ||
     (iVar2 = FUN_005f13f0(*(undefined4 *)(param_1 + 4)), iVar2 == 0)) goto LAB_005c6efe;
  lVar9 = ftol();
  if ((*(uint *)(param_1 + 0x10) & 0x100) == 0) {
    iVar2 = ((int)((ulonglong)lVar9 >> 0x20) - *(int *)(iVar3 + 0xc)) -
            (uint)((uint)lVar9 < *(uint *)(iVar3 + 8));
    if ((*(int *)(param_1 + 0x24) < iVar2) ||
       ((*(int *)(param_1 + 0x24) <= iVar2 &&
        (*(uint *)(param_1 + 0x20) < (uint)lVar9 - *(uint *)(iVar3 + 8))))) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      lVar9 = *(longlong *)(param_1 + 0x80);
      goto joined_r0x005c6ee2;
    }
    if (*(int *)(param_1 + 0x80) != local_8) goto LAB_005c6efe;
    iVar2 = *(int *)(param_1 + 0x84);
  }
  else {
    if ((lVar9 == 0) ||
       (lVar9 = __allrem(*(uint *)(iVar3 + 8) + *(uint *)(param_1 + 0x20),
                         *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x24) +
                         (uint)CARRY4(*(uint *)(iVar3 + 8),*(uint *)(param_1 + 0x20)),lVar9),
       lVar9 != 0)) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      lVar9 = *(longlong *)(param_1 + 0x80);
joined_r0x005c6ee2:
      if (lVar1 < lVar8) {
        lVar9 = lVar8;
      }
      *(longlong *)(param_1 + 0x80) = lVar9;
      goto LAB_005c6efe;
    }
    if (*(int *)(param_1 + 0x80) != local_8) goto LAB_005c6efe;
    iVar2 = *(int *)(param_1 + 0x84);
  }
  if (iVar2 == iVar6) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
LAB_005c6efe:
  iVar2 = *(int *)(param_1 + 0x84);
  uVar5 = *(uint *)(param_1 + 0x20) - *(uint *)(param_1 + 0x78);
  iVar3 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x7c)) -
          (uint)(*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x78));
  if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (*(uint *)(param_1 + 0x80) < uVar5)))) {
    iVar3 = iVar2;
    uVar5 = *(uint *)(param_1 + 0x80);
  }
  *(uint *)(param_1 + 0x80) = uVar5;
  *(int *)(param_1 + 0x84) = iVar3;
  return;
}


