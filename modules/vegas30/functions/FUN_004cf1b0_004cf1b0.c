/* Module: vegas30.exe
   Function: FUN_004cf1b0
   Address: 004cf1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cf1b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint local_3c;
  int local_30;
  uint local_24;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_2 + 0x69c);
  puVar13 = *(uint **)(param_1 + 0x5d0);
  puVar2 = *(uint **)(iVar1 + 0x54);
  _TrackbarInst_SetId_8(puVar2[0x93],param_3);
  _FaderInst_SetId_8(puVar2[0x46],param_3);
  piVar6 = (int *)_SfGetUIFontSize_4(100);
  iVar3 = *piVar6;
  iVar4 = piVar6[1];
  FUN_004cfb60(param_1,&local_10);
  iVar15 = iVar4 + 2;
  local_4 = local_c;
  local_8 = local_10;
  iVar11 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x1c);
  local_30 = iVar15;
  if (iVar15 <= DAT_0064b30c) {
    local_30 = DAT_0064b30c;
  }
  iVar7 = (iVar11 + -3) / local_30;
  local_24 = 0;
  if (iVar7 < 4) {
    if (iVar7 < 2) goto LAB_004cf2a8;
  }
  else {
    iVar7 = 3;
  }
  iVar7 = ((iVar11 - iVar7 * local_30) + -3) / iVar7;
  if (5 < iVar7) {
    iVar7 = 5;
  }
  local_30 = local_30 + iVar7;
  iVar7 = (iVar11 + -3) / local_30;
  local_24 = (iVar11 - local_30) / 2;
  local_24 = (0 < (int)local_24) - 1 & local_24;
LAB_004cf2a8:
  uVar8 = -(uint)((*puVar13 >> 0xc & 1) + *(int *)(param_1 + 0x38c) != 0) & 0x12;
  iVar12 = DAT_0064b30c;
  if (DAT_0064b30c < iVar15) {
    iVar12 = iVar15;
  }
  iVar12 = iVar12 + 3;
  if (iVar12 <= iVar11) {
    iVar11 = *(int *)(iVar1 + 0x1c);
    iVar15 = *(int *)(param_1 + 0x394);
    uVar16 = iVar11 + 1;
    uVar9 = uVar8 + 3;
    puVar2[6] = uVar16;
    puVar2[5] = uVar9;
    uVar14 = iVar15 - 2;
    puVar2[8] = iVar11 + 0x11;
    uVar8 = uVar8 + 0x13;
    puVar2[7] = uVar8;
    uVar10 = puVar2[8];
    if (*(int *)(iVar1 + 0x24) < (int)(uVar10 + 0x10)) {
      iVar15 = 0;
    }
    else {
      iVar15 = 0x10;
    }
    puVar2[9] = uVar9;
    puVar2[10] = uVar10;
    puVar2[0xc] = uVar10 + iVar15;
    puVar2[0xb] = iVar15 + uVar9;
    uVar10 = puVar13[0x13];
    puVar2[1] = uVar8;
    puVar2[4] = iVar11 + 0x13;
    puVar2[3] = uVar8 + uVar10;
    local_3c = uVar8 + uVar10 + 5;
    puVar2[2] = uVar16;
    if (iVar7 == 1) {
      iVar15 = *(int *)(iVar1 + 0x1c);
      puVar2[0x36] = iVar15 + 4;
      puVar2[0x38] = iVar15 + 0x12;
      uVar8 = uVar14 + (iVar12 * 3 + 3) * -2;
      if ((int)uVar8 < (int)local_3c) {
        uVar8 = local_3c;
      }
      uVar10 = (int)(uVar8 + local_3c * 2) / 3;
      puVar2[0x37] = uVar8;
      puVar2[0x35] = uVar10;
      if ((int)(uVar8 - uVar10) < 0x1e) {
        puVar2[0x35] = uVar8;
      }
      puVar2[0xd] = local_3c;
      puVar2[0xe] = iVar11 + 3;
      puVar2[0xf] = puVar2[0x35];
      puVar2[0x10] = iVar11 + 5 + iVar4;
      local_3c = puVar2[0x37] + 6;
    }
    uVar8 = FUN_005b87c0(2);
    iVar11 = iVar12;
    if (uVar8 < 3) {
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
    }
    else {
      if ((int)uVar14 < (int)(local_3c + iVar12)) {
        iVar11 = 0;
      }
      puVar2[0x17] = uVar14;
      uVar14 = uVar14 - iVar11;
      puVar2[0x16] = uVar16;
      puVar2[0x18] = uVar16 + iVar11;
      puVar2[0x15] = uVar14;
    }
    if ((int)uVar14 < (int)(local_3c + iVar11)) {
      iVar11 = 0;
    }
    puVar2[0x13] = uVar14;
    puVar2[0x14] = uVar16 + iVar11;
    puVar2[0x12] = uVar16;
    uVar8 = (uVar14 - iVar11) - 6;
    puVar2[0x11] = uVar14 - iVar11;
    if ((int)uVar8 < (int)(local_3c + iVar11)) {
      iVar11 = 0;
    }
    puVar2[0x27] = uVar8;
    puVar2[0x28] = uVar16 + iVar11;
    puVar2[0x25] = uVar8 - iVar11;
    uVar8 = (uVar8 - iVar11) - 6;
    puVar2[0x26] = uVar16;
    if ((int)uVar8 < (int)(local_3c + iVar11)) {
      iVar11 = 0;
    }
    puVar2[0x1f] = uVar8;
    puVar2[0x1e] = uVar16;
    puVar2[0x20] = uVar16 + iVar11;
    puVar2[0x1d] = uVar8 - iVar11;
    uVar8 = (uVar8 - iVar11) - 6;
    if ((*puVar13 & 0x100) == 0) {
      puVar2[0x1c] = uVar16;
      puVar2[0x1a] = uVar16;
      puVar2[0x19] = uVar8;
      puVar2[0x1b] = uVar8;
    }
    else {
      if ((int)uVar8 < (int)(local_3c + iVar11)) {
        iVar11 = 0;
      }
      puVar2[0x1b] = uVar8;
      uVar8 = uVar8 - iVar11;
      puVar2[0x1a] = uVar16;
      puVar2[0x1c] = uVar16 + iVar11;
      puVar2[0x19] = uVar8;
    }
    uVar10 = *puVar13;
    if (((uVar10 & 0x10) == 0) &&
       (((uVar10 & 0x100) == 0 || ((*(byte *)(param_2 + 0x10) & 0x80) == 0)))) {
      puVar2[0x24] = uVar16;
      puVar2[0x22] = uVar16;
      puVar2[0x21] = uVar8;
      puVar2[0x23] = uVar8;
    }
    else {
      if (((uVar10 & 0x100) == 0) ||
         (((*(byte *)(param_2 + 0x10) & 0x80) == 0 ||
          (iVar15 = iVar3, *(int *)(param_2 + 0x3c) < 10)))) {
        iVar15 = 0;
      }
      if ((int)uVar8 < (int)(local_3c + iVar15 + iVar11)) {
        iVar11 = 0;
      }
      puVar2[0x23] = uVar8;
      uVar8 = (uVar8 - iVar15) - iVar11;
      puVar2[0x24] = uVar16 + iVar11;
      puVar2[0x22] = uVar16;
      puVar2[0x21] = uVar8;
    }
    uVar8 = uVar8 - 3;
    if (iVar7 == 1) {
      puVar13 = puVar2 + 0x35;
      if ((int)uVar8 < (int)puVar2[0x37]) {
        uVar8 = puVar2[0x37];
      }
      puVar2[0x37] = uVar8;
      if ((int)(uVar8 - *puVar13) < 0x1e) {
        *puVar13 = uVar8;
        puVar2[0xf] = uVar8;
      }
      puVar17 = puVar2 + 0x31;
      if (local_10 + 100 + iVar3 < (int)(puVar2[0x37] - *puVar13)) {
        iVar1 = *(int *)(iVar1 + 0x1c);
        puVar2[0x32] = iVar1 + 2;
        puVar2[0x34] = iVar1 + 4 + iVar4;
        *puVar17 = *puVar13;
        uVar8 = *puVar13 + local_10;
        puVar2[0x33] = uVar8;
        *puVar13 = uVar8 + 1;
      }
      else {
        *puVar17 = *puVar13;
        puVar2[0x32] = puVar2[0x36];
        puVar2[0x33] = puVar2[0x37];
        puVar2[0x34] = puVar2[0x38];
        puVar2[0x33] = *puVar17;
      }
      uVar8 = puVar2[0x37];
      uVar10 = *puVar13;
      if (local_8 + 200 + iVar3 * 2 < (int)(uVar8 - uVar10)) {
        uVar9 = (int)((((7 - iVar3) * 2 - local_8) - uVar10) + uVar8) / 2 + uVar10;
        puVar2[0x37] = uVar9;
        if ((int)(puVar2[0x37] - uVar10) < 0x1e) {
          puVar2[0x37] = uVar10;
        }
        uVar9 = uVar9 + 6;
        puVar17 = puVar2 + 0x3d;
        puVar2[0x39] = uVar9;
        puVar2[0x3b] = uVar9 + local_8;
        puVar2[0x3a] = puVar2[0x32];
        puVar2[0x3c] = puVar2[0x34];
        puVar2[0x3f] = uVar8;
        *puVar17 = puVar2[0x3b] + 1;
        puVar2[0x3e] = puVar2[0x36];
        puVar2[0x40] = puVar2[0x38];
        if ((int)(uVar8 - *puVar17) < 0x3c) {
          uVar8 = puVar2[0x39];
          puVar2[0x3b] = uVar8;
          *puVar17 = uVar8;
          if ((int)(puVar2[0x3f] - uVar8) < 0x1e) {
            puVar2[0x3f] = uVar8;
          }
        }
      }
      else {
        puVar2[0x39] = 0;
        puVar2[0x3a] = 0;
        puVar2[0x3b] = 0;
        puVar2[0x3c] = 0;
        puVar2[0x3d] = 0;
        puVar2[0x3e] = 0;
        puVar2[0x3f] = 0;
        puVar2[0x40] = 0;
      }
      if (puVar2[0x37] != *puVar13 && -1 < (int)(puVar2[0x37] - *puVar13)) {
        _FaderInst_Move_8(puVar2[0x46],puVar13);
      }
      if (6 < (int)(puVar2[0x3f] - puVar2[0x3d])) {
        _TrackbarInst_Move_8(puVar2[0x93],puVar2 + 0x3d);
      }
    }
    else {
      puVar2[0xf] = uVar8;
      iVar11 = (uVar16 + iVar12) - iVar12;
      puVar2[0xd] = local_3c;
      puVar2[0xe] = iVar11 + 2;
      puVar2[0x10] = iVar11 + 4 + iVar4;
      local_30 = local_24 + local_30;
      iVar11 = local_30;
      if (local_30 < 0xf) {
        iVar11 = 0xe;
      }
      uVar8 = uVar16 + iVar12 + iVar11;
      iVar15 = (((*(int *)(param_1 + 0x394) + iVar3 * -6) - local_8) - local_10) - local_3c;
      iVar11 = *(int *)(param_1 + 0x394) + -2;
      if ((((*puVar13 & 0xc0) != 0) && (100 < iVar15)) && (iVar7 < 3)) {
        iVar11 = iVar11 + ((iVar3 * -2 - iVar15 / 2) - local_8);
      }
      puVar2[0x31] = puVar2[1];
      puVar2[0x33] = puVar2[1] + local_10;
      puVar2[0x34] = uVar8;
      uVar9 = *(int *)(iVar1 + 0x1c) + 5;
      uVar10 = (uVar8 - iVar4) - 5;
      if ((int)uVar10 < (int)uVar9) {
        uVar10 = uVar9;
      }
      puVar2[0x32] = uVar10;
      puVar17 = puVar2 + 0x35;
      *puVar17 = puVar2[0x33] + 1;
      puVar2[0x37] = iVar11 - 1U;
      uVar10 = puVar2[0x34] - (iVar4 + -9) / 2;
      puVar2[0x38] = uVar10;
      puVar2[0x36] = uVar10 - 0xe;
      bVar5 = true;
      if ((int)((iVar11 - 1U) - *puVar17) < 0x3c) {
        uVar10 = puVar2[0x31];
        bVar5 = false;
        puVar2[0x33] = uVar10;
        *puVar17 = uVar10;
        if ((int)(puVar2[0x37] - uVar10) < 0x1e) {
          puVar2[0x37] = uVar10;
        }
      }
      if (iVar7 < 3) {
        uVar10 = iVar11 + iVar3;
      }
      else {
        uVar10 = puVar2[0x31];
        if (local_30 < 0x10) {
          local_30 = 0xf;
        }
        uVar8 = (uVar8 - 1) + local_30;
      }
      uVar9 = *(uint *)(param_1 + 0x394);
      if ((int)uVar10 < (int)*(uint *)(param_1 + 0x394)) {
        uVar9 = uVar10;
      }
      puVar2[0x39] = uVar9;
      puVar2[0x3c] = uVar8;
      puVar2[0x3b] = uVar9 + local_8;
      uVar8 = (uVar8 - iVar4) - 5;
      uVar10 = *(int *)(iVar1 + 0x1c) + 5;
      if ((int)uVar8 < (int)uVar10) {
        uVar8 = uVar10;
      }
      puVar2[0x3a] = uVar8;
      if (puVar13[0xb7] == 0) {
        uVar8 = 0xe;
      }
      else {
        uVar8 = puVar13[0xba];
      }
      uVar10 = puVar2[0x3b] + 1;
      if ((int)*(uint *)(param_1 + 0x394) <= (int)(puVar2[0x3b] + 1)) {
        uVar10 = *(uint *)(param_1 + 0x394);
      }
      puVar2[0x3d] = uVar10;
      if ((int)uVar10 < (int)*(uint *)(param_1 + 0x394)) {
        uVar10 = *(uint *)(param_1 + 0x394);
      }
      puVar2[0x3f] = uVar10;
      uVar10 = puVar2[0x3c] - (int)((iVar4 - uVar8) + 5) / 2;
      puVar2[0x40] = uVar10;
      puVar2[0x3e] = uVar10 - uVar8;
      if (!bVar5) {
        uVar8 = puVar2[0x39];
        puVar2[0x3b] = uVar8;
        puVar2[0x3d] = uVar8;
        if ((int)(puVar2[0x3f] - uVar8) < 0x1e) {
          puVar2[0x3f] = uVar8;
        }
      }
    }
    puVar13 = puVar2 + 0x35;
    puVar17 = puVar2 + 0x3d;
    if ((int)(puVar2[0xf] - puVar2[0xd]) < iVar3 * 3) {
      puVar2[0xf] = puVar2[0xd];
    }
    if ((*(byte *)(param_2 + 0x10) & 0x80) == 0) {
      puVar2[0x41] = 0;
      puVar2[0x42] = 0;
      puVar2[0x43] = 0;
      puVar2[0x44] = 0;
    }
    else {
      puVar2[0x41] = *puVar13;
      puVar2[0x42] = puVar2[0x36];
      puVar2[0x43] = puVar2[0x37];
      puVar2[0x44] = puVar2[0x38];
      if ((int)puVar2[0x31] < (int)puVar2[0x33]) {
        puVar2[0x41] = puVar2[0x31];
      }
      puVar2[0x43] = puVar2[0x43] - 5;
      puVar2[0x41] = puVar2[0x41] + 5;
      puVar2[0x44] = puVar2[0x44] + 2;
      puVar2[0x42] = puVar2[0x42] - 1;
      puVar2[0x31] = puVar2[0x39];
      puVar2[0x32] = puVar2[0x3a];
      puVar2[0x33] = puVar2[0x3b];
      puVar2[0x34] = puVar2[0x3c];
      *puVar13 = *puVar17;
      puVar2[0x36] = puVar2[0x3e];
      puVar2[0x37] = puVar2[0x3f];
      puVar2[0x38] = puVar2[0x40];
      puVar2[0x39] = 0;
      puVar2[0x3a] = 0;
      puVar2[0x3b] = 0;
      puVar2[0x3c] = 0;
      *puVar17 = 0;
      puVar2[0x3e] = 0;
      puVar2[0x3f] = 0;
      puVar2[0x40] = 0;
      if ((*puVar2 & 0x8000) != 0) {
        puVar2[0x31] = 0;
        puVar2[0x32] = 0;
        puVar2[0x33] = 0;
        puVar2[0x34] = 0;
        *puVar13 = 0;
        puVar2[0x36] = 0;
        puVar2[0x37] = 0;
        puVar2[0x38] = 0;
      }
      if (puVar2[0xc9] == 0) {
        puVar2[0xc9] = (uint)(puVar2 + 0xca);
        _MeterInst_Init_20(puVar2 + 0xca,0x4080161c,puVar2 + 0x41,*(undefined4 *)(param_1 + 4),
                           param_3);
        _MeterInst_Message_16(puVar2[0xc9],0x613,0x10000,2);
        _MeterInst_Message_16(puVar2[0xc9],0x60d,0x10000,0x8000);
        _MeterInst_Message_16(puVar2[0xc9],0x60f,0,0x2000);
      }
      _MeterInst_Move_8(puVar2[0xc9],puVar2 + 0x41);
    }
    if (puVar2[0x37] != *puVar13 && -1 < (int)(puVar2[0x37] - *puVar13)) {
      _FaderInst_Move_8(puVar2[0x46],puVar13);
    }
    uVar8 = puVar2[0x3f];
    uVar10 = *puVar17;
    if (uVar8 != uVar10 && -1 < (int)(uVar8 - uVar10)) {
      if ((int)uVar10 <= (int)*puVar13) {
        *puVar17 = uVar10 + 3;
      }
      if ((int)puVar2[0x37] <= (int)uVar8) {
        puVar2[0x3f] = uVar8 - 6;
      }
      _TrackbarInst_Move_8(puVar2[0x93],puVar17);
    }
  }
  return;
}


