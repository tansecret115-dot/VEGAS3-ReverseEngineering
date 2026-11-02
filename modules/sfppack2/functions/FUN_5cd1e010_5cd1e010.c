/* Module: sfppack2.dll
   Function: FUN_5cd1e010
   Address: 5cd1e010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1e010(uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_4;
  
  puVar3 = param_1;
  puVar1 = param_1 + 0xf;
  param_1[0x14] = *puVar1;
  param_1[0x15] = param_1[0x10];
  param_1[0x16] = param_1[0x11];
  param_1[0x17] = param_1[0x12];
  puVar4 = (uint *)(param_1[0x11] - *puVar1);
  uVar6 = param_1[0x12] - param_1[0x10];
  if ((param_1[3] & 0x10) != 0) {
    if ((param_1[3] & 8) == 0) {
      if (((uVar6 & 1) == 0) && (0 < (int)uVar6)) {
        uVar6 = uVar6 - 1;
        param_1[0x12] = param_1[0x12] - 1;
      }
    }
    else if ((((uint)puVar4 & 1) == 0) && (0 < (int)puVar4)) {
      param_1[0x11] = param_1[0x11] - 1;
      puVar4 = (uint *)((int)puVar4 - 1);
    }
  }
  param_1 = puVar4;
  if (puVar3[0x43] != 0) {
    puVar3[3] = puVar3[3] | 0x20000;
  }
  puVar3[0x21] = 2;
  puVar3[0x22] = 2;
  if (puVar3[0x45] == 0) {
    if ((puVar3[3] & 0x800) == 0) {
      if (((byte)*puVar3 & 0x30) == 0x10) {
        puVar3[0x20] = 10;
      }
      else {
        puVar3[0x20] = 0x14;
      }
    }
    else {
      puVar3[0x20] = 0x12;
    }
  }
  uVar8 = puVar3[3];
  if ((uVar8 & 0x800) == 0) {
    if ((*puVar3 & 0xf00) != 0x100) {
      puVar3[0x1e] = 2;
      puVar3[0x1f] = 2;
      puVar3[0x1c] = 8;
      bVar2 = true;
      goto LAB_5cd1e135;
    }
    puVar3[0x1c] = 10;
    puVar3[0x1e] = 1;
    puVar3[0x1f] = 1;
  }
  else {
    puVar3[0x1c] = 5;
    puVar3[0x1e] = 1;
    puVar3[0x1f] = 1;
  }
  bVar2 = false;
LAB_5cd1e135:
  uVar7 = puVar3[0x20];
  iVar9 = (uVar7 >> 1) - puVar3[0x1e];
  iVar10 = (uVar7 - puVar3[0x1e]) - (uVar7 >> 1);
  if ((uVar8 & 8) == 0) {
    local_4 = uVar7 + iVar10 + iVar9;
    uVar7 = puVar3[0x1c];
    if (((uVar8 & 0x10) != 0) && ((int)uVar7 < 0x1d)) {
      uVar7 = 0x1c;
    }
  }
  else {
    local_4 = puVar3[0x1c];
    if (((uVar8 & 0x10) != 0) && ((int)local_4 < 0xf)) {
      local_4 = 0xe;
    }
    uVar7 = uVar7 + iVar10 + iVar9;
  }
  if (((int)param_1 < (int)local_4) || ((int)uVar6 < (int)uVar7)) {
    puVar3[3] = uVar8 | 0xe0;
    if ((HGDIOBJ)puVar3[0x44] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar3[0x44]);
    }
    puVar3[0x44] = 0;
  }
  else {
    uVar7 = (uint)((*puVar3 & 0xf000) == 0) << 5 | uVar8 & 0xffffff9f;
    uVar7 = ((int)(uVar8 << 0x1f) >> 0x18 ^ uVar7) & 0x80 ^ uVar7;
    puVar3[3] = uVar7;
    if ((uVar7 & 8) == 0) {
      if ((uVar7 & 0x10) == 0) {
        puVar3[0x2e] = *puVar1;
        puVar3[0x2f] = puVar3[0x10];
        puVar3[0x30] = puVar3[0x11];
        puVar3[0x31] = puVar3[0x12];
        if ((puVar3[3] & 0x800) != 0) {
          if (0xd < (int)(puVar3[0x31] - puVar3[0x2f])) {
            uVar8 = (int)((puVar3[0x2f] - 0xd) + puVar3[0x31]) / 2;
            puVar3[0x2f] = uVar8;
            puVar3[0x31] = uVar8 + 0xd;
          }
        }
      }
      else {
        puVar3[0x2f] = puVar3[0x10];
        puVar3[0x31] = (int)uVar6 / 2 + puVar3[0x10];
        puVar3[0x3a] = puVar3[0x12];
        puVar3[0x38] = puVar3[0x31];
        if ((uVar6 & 1) != 0) {
          puVar3[0x31] = puVar3[0x31] + 1;
        }
        iVar5 = (int)(puVar3[0x31] - puVar3[0x2f]) / 2;
        puVar3[0x32] = puVar3[0x2f] + iVar5;
        puVar3[0x3b] = (puVar3[0x3a] - iVar5) - 2;
      }
      puVar4 = puVar3 + 0x18;
      puVar3[0x13] = uVar6 - puVar3[0x1c] >> 1;
      *puVar4 = *puVar1;
      puVar3[0x19] = puVar3[0x10];
      puVar3[0x1a] = puVar3[0x11];
      puVar3[0x1b] = puVar3[0x12];
      uVar8 = *puVar4 + iVar9;
      uVar7 = puVar3[0x1a] - iVar10;
      *puVar4 = uVar8;
      puVar3[0x1a] = uVar7;
      uVar6 = puVar3[0x1b];
      puVar3[0x19] = puVar3[0x19] + puVar3[0x13];
      puVar3[0x1b] = uVar6 - puVar3[0x13];
      if (bVar2) {
        puVar3[0x1b] = (uVar6 - puVar3[0x13]) + 1;
      }
      uVar6 = puVar3[0x1e];
    }
    else {
      if ((uVar7 & 0x10) == 0) {
        puVar4 = puVar3 + 0x2e;
        *puVar4 = *puVar1;
        puVar3[0x2f] = puVar3[0x10];
        puVar3[0x30] = puVar3[0x11];
        puVar3[0x31] = puVar3[0x12];
        if ((puVar3[3] & 0x800) != 0) {
          if (0xd < (int)(puVar3[0x30] - *puVar4)) {
            uVar6 = (int)((*puVar4 - 0xd) + puVar3[0x30]) / 2;
            *puVar4 = uVar6;
            puVar3[0x30] = uVar6 + 0xd;
          }
        }
      }
      else {
        uVar6 = *puVar1;
        puVar3[0x2e] = uVar6;
        puVar3[0x30] = (int)param_1 / 2 + uVar6;
        puVar3[0x39] = puVar3[0x11];
        puVar3[0x37] = puVar3[0x30];
        if (((uint)param_1 & 1) != 0) {
          puVar3[0x30] = puVar3[0x30] + 1;
        }
        iVar5 = (int)(puVar3[0x30] - puVar3[0x2e]) / 2;
        puVar3[0x32] = puVar3[0x2e] + iVar5;
        puVar3[0x3b] = (puVar3[0x39] - iVar5) - 2;
      }
      puVar4 = puVar3 + 0x18;
      puVar3[0x13] = (int)param_1 - puVar3[0x1c] >> 1;
      *puVar4 = *puVar1;
      puVar3[0x19] = puVar3[0x10];
      puVar3[0x1a] = puVar3[0x11];
      puVar3[0x1b] = puVar3[0x12];
      *puVar4 = *puVar4 + puVar3[0x13];
      puVar3[0x1a] = puVar3[0x1a] - puVar3[0x13];
      uVar7 = puVar3[0x1b] - iVar10;
      uVar8 = puVar3[0x19] + iVar9;
      puVar3[0x1b] = uVar7;
      puVar3[0x19] = uVar8;
      if (bVar2) {
        puVar3[0x1a] = puVar3[0x1a] + 1;
      }
      uVar6 = puVar3[0x1f];
    }
    puVar3[0x1d] = (uVar7 + uVar6 * -2) - uVar8;
    puVar3[3] = (uint)((int)(puVar3[5] - puVar3[4]) <= (int)puVar3[0x1d]) << 0xc |
                puVar3[3] & 0xffffefff;
    FUN_5cd1c520((byte *)puVar3,0);
    if ((puVar3[3] & 0x200) != 0) {
      FUN_5cd1d730(puVar3);
      return;
    }
  }
  return;
}


