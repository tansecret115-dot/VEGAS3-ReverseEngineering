/* Module: vidcap30.exe
   Function: FUN_00440040
   Address: 00440040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440040(int param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int3 iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (((*param_2 & 0x10) == 0) || ((*param_2 & 0x800) != 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
    iVar2 = FUN_0042b820(param_1 + 0xd8);
    if (iVar2 != 0) {
      uVar7 = 1;
      goto LAB_00440073;
    }
  }
  uVar7 = 0;
LAB_00440073:
  uVar5 = *param_2;
  uVar8 = uVar5 & 0x80;
  if ((uVar8 == 0) || ((uVar5 & 0xc00) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (((uVar5 & 0x40) == 0) || ((uVar8 == 0 && ((uVar5 & 0xc00) == 0)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (((uVar5 & 0x40) == 0) ||
     ((((*(byte *)(param_1 + 0x1ac4) & 2) != 0 && (uVar8 == 0)) &&
      ((*(byte *)(param_1 + 0x1ac0) & 1) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *param_3 = 0;
  if (DAT_005bba94 != 0) {
    uVar7 = uVar6;
    if ((*param_2 & 1) != 0) {
      uVar7 = *param_2 >> 4 & 1;
    }
    uVar7 = uVar7 << 4;
    *param_3 = uVar7;
    if ((((*param_2 & 0x400) == 0) && (uVar6 != 0)) &&
       (((*(uint *)(param_1 + 0x1ac0) & 2) != 0 &&
        (((*(uint *)(param_1 + 0x1ac0) & 0x100) != 0 && ((*(byte *)(param_1 + 0x1c34) & 0x20) != 0))
        )))) {
      *param_3 = uVar7 | 0x40;
      return;
    }
    *param_3 = uVar7;
    return;
  }
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) && ((uVar5 & 0x20) == 0)) {
    uVar5 = uVar7 << 10;
    *param_3 = uVar7 ^ uVar5;
    if ((uVar7 == 0) || ((*param_2 & 0x200) != 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    uVar7 = CONCAT31((int3)(uVar5 >> 8),(char)uVar7);
    uVar8 = (iVar9 << 1 | uVar8) << 1;
    *param_3 = iVar9 << 3 | uVar8 | uVar7;
    uVar8 = (iVar9 << 3 | uVar8 | uVar7) ^ *param_2 & 0x10;
    *param_3 = uVar8;
    uVar7 = *param_2;
    if (((((uVar7 & 0x10) == 0) || ((uVar7 & 0x20) != 0)) || ((uVar7 & 0x800) != 0)) ||
       ((((uVar7 & 0x40) != 0 || (DAT_005bb570 == 0)) &&
        (((uVar7 & 0x40) == 0 ||
         (((*(byte *)(param_1 + 0x1ac4) & 2) != 0 && ((*(byte *)(param_1 + 0x1ac0) & 1) == 0))))))))
    {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    uVar5 = iVar9 << 9 | (uint)CONCAT11((char)(uVar5 >> 8),(char)uVar8);
    *param_3 = uVar5;
    uVar7 = *param_2;
    if (((((uVar7 & 0x10) != 0) && ((uVar7 & 0x20) == 0)) && ((uVar7 & 0x800) == 0)) &&
       ((((uVar7 & 0x40) == 0 && (DAT_005bb570 != 0)) ||
        (((uVar7 & 0x40) != 0 &&
         (((*(byte *)(param_1 + 0x1ac4) & 2) == 0 ||
          (((uVar7 & 0x80) != 0 && ((*(byte *)(param_1 + 0x1ac0) & 1) != 0)))))))))) {
      *param_3 = uVar5 | 0x100;
      return;
    }
    *param_3 = uVar5;
    return;
  }
  if (((uVar5 & 2) != 0) && ((*(uint *)(param_1 + 0x1c34) & 0x400) == 0)) {
    if ((uVar3 == 0) || ((uVar5 & 0x100) == 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    *param_3 = uVar3 ^ iVar9 << 10;
    if ((uVar3 == 0) || ((*(byte *)(param_1 + 0x1c34) & 4) == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    uVar7 = (uVar6 << 3 | uVar3 << 2) << 1 |
            CONCAT31((int3)((uint)(iVar9 << 10) >> 8),
                     (byte)((uVar3 << 1 | uVar7) << 1) | (byte)uVar3);
    *param_3 = uVar7;
    if ((bVar1) && ((*param_2 & 0x400) == 0)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    uVar7 = iVar9 << 5 | uVar7;
    *param_3 = uVar7;
    if ((iVar9 == 0) || ((*param_2 & 0x80) == 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    *param_3 = iVar9 << 6 | uVar7;
    uVar7 = *param_2;
    if (((((uVar7 & 0x400) == 0) && (DAT_005bb4b4 != 0)) && ((uVar7 & 0x40) != 0)) &&
       ((((*(byte *)(param_1 + 0x1ac4) & 2) == 0 ||
         (((uVar7 & 0x80) != 0 &&
          (((*(byte *)(param_1 + 0x1c34) & 4) != 0 ||
           (iVar9 = FUN_004264b0(param_1 + 0xa48), iVar9 != 0)))))) ||
        (((*(byte *)(param_1 + 0x1ac4) & 2) != 0 && ((*(byte *)(param_1 + 0x1ac0) & 1) == 0)))))) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    *param_3 = iVar9 << 7 | *param_3 & 0xfffff47f;
    return;
  }
  if (((uVar5 & 4) != 0) && ((*(uint *)(param_1 + 0x1c34) & 0x400) == 0)) {
    if ((uVar3 == 0) || ((uVar5 & 0x100) == 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    *param_3 = uVar3 ^ iVar9 << 10;
    if ((uVar3 == 0) || ((*(byte *)(param_1 + 0x1c34) & 4) == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    iVar4 = (int3)((uint)(iVar9 << 10) >> 8);
    uVar7 = (uVar6 << 3 | uVar3 << 2) << 1 |
            CONCAT31(iVar4,(byte)((uVar3 << 1 | uVar7) << 1) | (byte)uVar3);
    *param_3 = uVar7;
    if ((bVar1) && ((*param_2 & 0x400) == 0)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    uVar7 = iVar9 << 5 | uVar7;
    *param_3 = uVar7;
    if (((((*param_2 & 0x400) == 0) && (uVar6 != 0)) && (iVar4 != 0)) && (4 < DAT_005bba30)) {
      *param_3 = uVar7 | 0x800;
      return;
    }
    *param_3 = uVar7;
    return;
  }
  if (((uVar5 & 8) != 0) && ((*(uint *)(param_1 + 0x1c34) & 0x400) == 0)) {
    if ((uVar3 == 0) || ((uVar5 & 0x100) == 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    uVar7 = uVar3 ^ iVar9 << 10;
    *param_3 = uVar7;
    if ((uVar3 == 0) || ((*(byte *)(param_1 + 0x1c34) & 4) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *param_3 = (uVar6 << 3 | uVar3 << 2) << 1 | (uVar3 << 1 | uVar5) << 1 | uVar7;
  }
  return;
}


