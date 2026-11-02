/* Module: vegas30.exe
   Function: FUN_004cfc80
   Address: 004cfc80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cfc80(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  int local_3c;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8 [2];
  
  iVar10 = *(int *)(param_2 + 0x69c);
  puVar2 = *(uint **)(param_1 + 0x5d0);
  iVar3 = *(int *)(iVar10 + 0x54);
  _TrackbarInst_SetId_8(*(undefined4 *)(iVar3 + 0x134),param_3);
  piVar5 = (int *)_SfGetUIFontSize_4(100);
  local_10 = *piVar5;
  local_c = piVar5[1];
  FUN_004606f0(param_2,*(int *)(iVar10 + 0x24) - *(int *)(iVar10 + 0x1c),3,&local_2c,local_14);
  local_2c = local_2c + *(int *)(iVar10 + 0x1c);
  if (*(int *)(iVar10 + 0x24) < local_2c) {
    local_2c = *(int *)(iVar10 + 0x24);
  }
  if (((*(uint *)(param_2 + 0x10) & 0x80000) == 0) ||
     (iVar6 = local_2c, (*(uint *)(param_2 + 0x10) & 0x10000) != 0)) {
    iVar6 = *(int *)(iVar10 + 0x24);
  }
  iVar6 = iVar6 - *(int *)(iVar10 + 0x1c);
  local_28 = local_c + 2;
  iVar9 = DAT_0064b30c;
  if (DAT_0064b30c < local_28) {
    iVar9 = local_28;
  }
  iVar9 = iVar9 + 3;
  local_1c = (iVar6 + iVar9 * -2 + -3) / 2;
  if (5 < local_1c) {
    local_1c = 5;
  }
  local_1c = iVar9 + local_1c;
  iVar7 = DAT_0064b30c;
  if (DAT_0064b30c < local_28) {
    iVar7 = local_28;
  }
  iVar7 = iVar7 + 3;
  bVar15 = (iVar6 + -3) / iVar9 == 1;
  FUN_004cfb60(param_1,local_8);
  iVar4 = *(int *)(iVar10 + 0x1c);
  iVar13 = *(int *)(param_1 + 0x394);
  local_28 = local_8[0];
  local_18 = local_10 * 3;
  uVar14 = -(uint)((*puVar2 >> 0xc & 1) + *(int *)(param_1 + 0x38c) != 0) & 0x12;
  iVar12 = iVar4 + 1;
  *(int *)(iVar3 + 0x18) = iVar12;
  iVar6 = uVar14 + 3;
  *(int *)(iVar3 + 0x20) = iVar4 + 0x11;
  iVar9 = uVar14 + 0x13;
  *(int *)(iVar3 + 0x14) = iVar6;
  *(int *)(iVar3 + 0x1c) = iVar9;
  local_24 = *(uint *)(iVar3 + 0x20);
  iVar13 = iVar13 + -2;
  if (*(int *)(iVar10 + 0x24) < (int)(local_24 + 0x10)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0x10;
  }
  *(int *)(iVar3 + 0x24) = iVar6;
  *(uint *)(iVar3 + 0x28) = local_24;
  *(uint *)(iVar3 + 0x30) = local_24 + iVar11;
  *(int *)(iVar3 + 0x2c) = iVar11 + iVar6;
  local_3c = puVar2[0x13] + iVar9;
  *(int *)(iVar3 + 4) = iVar9;
  *(int *)(iVar3 + 0xc) = local_3c;
  *(int *)(iVar3 + 8) = iVar12;
  *(int *)(iVar3 + 0x10) = iVar4 + 0x13;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  local_20 = *(uint *)(iVar3 + 0x30);
  iVar6 = FUN_005be610(1,0);
  local_24 = (uint)(0 < iVar6);
  uVar8 = local_20;
  if ((int)((-(uint)(local_24 != 0) & 0x10) + 0x10) <= (int)(*(int *)(iVar10 + 0x24) - local_20)) {
    *(uint *)(iVar3 + 0x38) = local_20;
    uVar8 = local_20 + 0x10;
    *(uint *)(iVar3 + 0x40) = uVar8;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x24);
    *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x24) + 0x10;
  }
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  if ((local_24 != 0) && (0xf < (int)(*(int *)(iVar10 + 0x24) - uVar8))) {
    *(uint *)(iVar3 + 0x48) = uVar8;
    *(uint *)(iVar3 + 0x50) = uVar8 + 0x10;
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x24);
    *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x24) + 0x10;
  }
  local_3c = local_3c + 5;
  if (bVar15) {
    iVar6 = *(int *)(iVar10 + 0x1c);
    *(int *)(iVar3 + 0xf8) = iVar6 + 4;
    *(int *)(iVar3 + 0x100) = iVar6 + 0x12;
    iVar6 = iVar13 + (iVar7 * 3 + 3) * -2;
    if (iVar6 < local_3c) {
      iVar6 = local_3c;
    }
    *(int *)(iVar3 + 0xfc) = iVar6;
    *(int *)(iVar3 + 0xf4) = (iVar6 + local_3c * 2) / 3;
    *(int *)(iVar3 + 0x54) = local_3c;
    *(int *)(iVar3 + 0x58) = iVar4 + 3;
    *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0xf4);
    *(int *)(iVar3 + 0x60) = iVar4 + 5 + local_c;
    local_3c = *(int *)(iVar3 + 0xfc) + 6;
  }
  uVar8 = FUN_005b87c0(3);
  param_3 = iVar7;
  if (uVar8 < 3) {
    *(undefined4 *)(iVar3 + 0x74) = 0;
    *(undefined4 *)(iVar3 + 0x78) = 0;
    *(undefined4 *)(iVar3 + 0x7c) = 0;
    *(undefined4 *)(iVar3 + 0x80) = 0;
  }
  else {
    if (iVar13 < local_3c + iVar7) {
      param_3 = 0;
    }
    *(int *)(iVar3 + 0x7c) = iVar13;
    iVar13 = iVar13 - param_3;
    *(int *)(iVar3 + 0x78) = iVar12;
    *(int *)(iVar3 + 0x74) = iVar13;
    *(int *)(iVar3 + 0x80) = iVar12 + param_3;
  }
  if (iVar13 < local_3c + param_3) {
    param_3 = 0;
  }
  *(int *)(iVar3 + 0x6c) = iVar13;
  *(int *)(iVar3 + 0x70) = iVar12 + param_3;
  *(int *)(iVar3 + 100) = iVar13 - param_3;
  iVar6 = (iVar13 - param_3) + -6;
  *(int *)(iVar3 + 0x68) = iVar12;
  if (iVar6 < local_3c + param_3) {
    param_3 = 0;
  }
  if (DAT_0064b4e4 == 0) {
    iVar9 = FUN_00601ab0(&local_24,&local_20,1);
    if (iVar9 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar8 = (local_20 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar8) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_24;
        DAT_0064b4e4 = uVar8;
      }
    }
  }
  if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
    *(int *)(iVar3 + 0xac) = iVar6;
    *(int *)(iVar3 + 0xb0) = iVar12 + param_3;
    *(int *)(iVar3 + 0xa4) = iVar6 - param_3;
    iVar6 = (iVar6 - param_3) + -6;
    *(int *)(iVar3 + 0xa8) = iVar12;
    if (iVar6 < local_3c + param_3) {
      param_3 = 0;
    }
    *(int *)(iVar3 + 0xbc) = iVar6;
    *(int *)(iVar3 + 0xb4) = iVar6 - param_3;
    iVar6 = (iVar6 - param_3) + -3;
    *(int *)(iVar3 + 0xb8) = iVar12;
    *(int *)(iVar3 + 0xc0) = iVar12 + param_3;
    if (iVar6 < param_3 + local_3c) {
      param_3 = 0;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0xa4) = 0;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(undefined4 *)(iVar3 + 0xb0) = 0;
    *(undefined4 *)(iVar3 + 0xb4) = 0;
    *(undefined4 *)(iVar3 + 0xb8) = 0;
    *(undefined4 *)(iVar3 + 0xbc) = 0;
    *(undefined4 *)(iVar3 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0x38c) < (int)uVar14) {
    iVar9 = *(int *)(iVar10 + 0x1c);
    *(undefined4 *)(iVar3 + 0xd4) = 1;
    *(int *)(iVar3 + 0xd8) = iVar9;
    *(int *)(iVar3 + 0xe0) = iVar9 + 0x12;
    *(undefined4 *)(iVar3 + 0xdc) = 0x13;
  }
  else {
    *(undefined4 *)(iVar3 + 0xd4) = 0;
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0xdc) = 0;
    *(undefined4 *)(iVar3 + 0xe0) = 0;
  }
  *(undefined4 *)(iVar3 + 0x124) = 1;
  *(undefined4 *)(iVar3 + 300) = 0x13;
  *(undefined4 *)(iVar3 + 0x128) = *(undefined4 *)(iVar3 + 0xe0);
  *(int *)(iVar3 + 0x130) = *(int *)(iVar10 + 0x24) + 6;
  if (!bVar15) {
    *(int *)(iVar3 + 0x54) = local_3c;
    *(int *)(iVar3 + 0x5c) = iVar6;
    iVar9 = (iVar12 + iVar7) - iVar7;
    *(int *)(iVar3 + 0x58) = iVar9 + 2;
    *(int *)(iVar3 + 0x60) = iVar9 + 4 + local_c;
  }
  piVar5 = (int *)(iVar3 + 0xe4);
  *piVar5 = 0;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0xf0) = 0;
  *(undefined4 *)(iVar3 + 0x104) = 0;
  *(undefined4 *)(iVar3 + 0x108) = 0;
  *(undefined4 *)(iVar3 + 0x10c) = 0;
  *(undefined4 *)(iVar3 + 0x110) = 0;
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  *(undefined4 *)(iVar3 + 200) = 0;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  *(undefined4 *)(iVar3 + 0xd0) = 0;
  if (DAT_0064b4e4 == 0) {
    iVar9 = FUN_00601ab0(&local_24,&local_20,1);
    if (iVar9 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar14 = (local_20 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar14) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_24;
        DAT_0064b4e4 = uVar14;
      }
    }
  }
  if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
    if (bVar15) {
      piVar1 = (int *)(iVar3 + 0xf4);
      *(int *)(iVar3 + 0x108) = *(int *)(iVar10 + 0x1c) + 1;
      *(int *)(iVar3 + 0x110) = *(int *)(iVar10 + 0x1c) + 1 + param_3;
      *(int *)(iVar3 + 0x10c) = iVar6;
      *(int *)(iVar3 + 0x104) = iVar6 - param_3;
      iVar6 = (iVar6 - param_3) + -6;
      if (iVar6 < *(int *)(iVar3 + 0xfc)) {
        iVar6 = *(int *)(iVar3 + 0xfc);
      }
      *(int *)(iVar3 + 0xfc) = iVar6;
      if (iVar6 - *piVar1 < 0x1e) {
        *piVar1 = iVar6;
        *(int *)(iVar3 + 0x5c) = iVar6;
      }
      if (local_10 + 100 + local_28 < *(int *)(iVar3 + 0xfc) - *piVar1) {
        iVar6 = *(int *)(iVar10 + 0x1c);
        *(int *)(iVar3 + 0xe8) = iVar6 + 2;
        *(int *)(iVar3 + 0xf0) = iVar6 + 4 + local_c;
        *piVar5 = *piVar1;
        iVar6 = *piVar1 + local_28;
        *(int *)(iVar3 + 0xec) = iVar6;
        *piVar1 = iVar6;
      }
      else {
        *piVar5 = *piVar1;
        *(undefined4 *)(iVar3 + 0xe8) = *(undefined4 *)(iVar3 + 0xf8);
        *(undefined4 *)(iVar3 + 0xec) = *(undefined4 *)(iVar3 + 0xfc);
        *(undefined4 *)(iVar3 + 0xf0) = *(undefined4 *)(iVar3 + 0x100);
        *(int *)(iVar3 + 0xec) = *piVar5;
      }
    }
    else {
      iVar6 = local_1c + -1;
      if (local_1c + -1 <= iVar7) {
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + iVar12 + iVar7;
      iVar9 = *(int *)(param_1 + 0x394) + -6;
      *(int *)(iVar3 + 0x108) = iVar6 - iVar7;
      *(int *)(iVar3 + 0x10c) = iVar9;
      iVar9 = iVar9 - iVar7;
      *(int *)(iVar3 + 0x110) = iVar6;
      *(int *)(iVar3 + 0x104) = iVar9;
      *piVar5 = *(int *)(iVar3 + 4);
      *(int *)(iVar3 + 0xec) = *(int *)(iVar3 + 4) + local_28;
      *(int *)(iVar3 + 0xf0) = iVar6;
      iVar6 = (iVar6 - local_c) + -5;
      iVar7 = *(int *)(iVar10 + 0x1c) + 5;
      if (iVar6 < iVar7) {
        iVar6 = iVar7;
      }
      *(int *)(iVar3 + 0xe8) = iVar6;
      piVar1 = (int *)(iVar3 + 0xf4);
      iVar9 = iVar9 + -7;
      *piVar1 = *(int *)(iVar3 + 0xec) + 6;
      *(int *)(iVar3 + 0xfc) = iVar9;
      iVar6 = *(int *)(iVar3 + 0xf0) - (local_c + -9) / 2;
      *(int *)(iVar3 + 0x100) = iVar6;
      *(int *)(iVar3 + 0xf8) = iVar6 + -0xe;
      if (iVar9 - *piVar1 < 0x3c) {
        iVar6 = *piVar5;
        *(int *)(iVar3 + 0xec) = iVar6;
        *piVar1 = iVar6;
        if (*(int *)(iVar3 + 0xfc) - iVar6 < 0x1e) {
          *(int *)(iVar3 + 0xfc) = iVar6;
        }
      }
    }
    if (((*(byte *)(param_2 + 0x44) & 0x40) != 0) &&
       (*(int *)(iVar3 + 0xdc) - *(int *)(iVar3 + 0xd4) <=
        *(int *)(iVar10 + 0x24) - *(int *)(iVar3 + 0xe0))) {
      *(int *)(iVar3 + 0xc4) = *(int *)(iVar3 + 0xd4);
      *(int *)(iVar3 + 0xcc) = *(int *)(iVar3 + 0xdc);
      *(undefined4 *)(iVar3 + 200) = *(undefined4 *)(iVar3 + 0xe0);
      iVar10 = (*(int *)(iVar3 + 0xdc) - *(int *)(iVar3 + 0xc4)) + *(int *)(iVar3 + 0xe0);
      *(int *)(iVar3 + 0xd0) = iVar10;
      *(int *)(iVar3 + 0x128) = iVar10;
    }
    if (param_4 != 0) {
      *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0xd4);
    }
    if (*(int *)(iVar3 + 0xfc) == *(int *)(iVar3 + 0xf4)) {
      iVar10 = *(int *)(iVar3 + 0x10c);
      *(int *)(iVar3 + 0x104) = iVar10;
      *(int *)(iVar3 + 0xfc) = iVar10;
      *(int *)(iVar3 + 0xf4) = iVar10;
      if (bVar15) {
        *(int *)(iVar3 + 0x5c) = iVar10;
      }
    }
    if (*(int *)(iVar3 + 0x5c) - *(int *)(iVar3 + 0x54) < local_18) {
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x54);
    }
    *(undefined4 *)(iVar3 + 0x114) = 0;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    iVar10 = FUN_005be610(1,0);
    if (iVar10 != 0) {
      *(undefined4 *)(iVar3 + 0x114) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar3 + 0x11c) = *(int *)(param_1 + 0x394) + -3;
      *(int *)(iVar3 + 0x118) = local_2c;
      *(undefined4 *)(iVar3 + 0x120) = *(undefined4 *)(*(int *)(param_2 + 0x69c) + 0x24);
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0xf4) = 0;
    *(undefined4 *)(iVar3 + 0xf8) = 0;
    *(undefined4 *)(iVar3 + 0xfc) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0;
  }
  iVar10 = *(int *)(iVar3 + 0xf4);
  if (*(int *)(iVar3 + 0xfc) != iVar10 && -1 < *(int *)(iVar3 + 0xfc) - iVar10) {
    _TrackbarInst_Move_8(*(undefined4 *)(iVar3 + 0x134),(int *)(iVar3 + 0xf4));
  }
  return;
}


