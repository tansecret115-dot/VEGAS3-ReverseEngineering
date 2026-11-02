/* Module: vidcap30.exe
   Function: FUN_0051ee70
   Address: 0051ee70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051ee70(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_4;
  
  puVar4 = param_1;
  puVar1 = param_1 + 0xf;
  param_1[0x14] = *puVar1;
  param_1[0x15] = param_1[0x10];
  param_1[0x16] = param_1[0x11];
  param_1[0x17] = param_1[0x12];
  uVar5 = param_1[0x11] - *puVar1;
  uVar7 = param_1[0x12] - param_1[0x10];
  if ((param_1[3] & 0x10) != 0) {
    if ((param_1[3] & 8) == 0) {
      if (((uVar7 & 1) == 0) && (0 < (int)uVar7)) {
        uVar7 = uVar7 - 1;
        param_1[0x12] = param_1[0x12] - 1;
      }
    }
    else if (((uVar5 & 1) == 0) && (0 < (int)uVar5)) {
      param_1[0x11] = param_1[0x11] - 1;
      uVar5 = uVar5 - 1;
    }
  }
  param_1 = (uint *)uVar5;
  if (puVar4[0x43] != 0) {
    puVar4[3] = puVar4[3] | 0x20000;
  }
  puVar4[0x21] = 2;
  puVar4[0x22] = 2;
  if (puVar4[0x45] == 0) {
    if ((puVar4[3] & 0x800) == 0) {
      if (((byte)*puVar4 & 0x30) == 0x10) {
        puVar4[0x20] = 10;
      }
      else {
        puVar4[0x20] = 0x14;
      }
    }
    else {
      puVar4[0x20] = 0x12;
    }
  }
  uVar5 = puVar4[3];
  if ((uVar5 & 0x800) == 0) {
    if ((*puVar4 & 0xf00) != 0x100) {
      puVar4[0x1e] = 2;
      puVar4[0x1f] = 2;
      puVar4[0x1c] = 8;
      bVar3 = true;
      goto LAB_0051ef95;
    }
    puVar4[0x1c] = 10;
    puVar4[0x1e] = 1;
    puVar4[0x1f] = 1;
  }
  else {
    puVar4[0x1c] = 5;
    puVar4[0x1e] = 1;
    puVar4[0x1f] = 1;
  }
  bVar3 = false;
LAB_0051ef95:
  uVar8 = puVar4[0x20];
  iVar9 = (uVar8 >> 1) - puVar4[0x1e];
  iVar10 = (uVar8 - puVar4[0x1e]) - (uVar8 >> 1);
  if ((uVar5 & 8) == 0) {
    local_4 = uVar8 + iVar10 + iVar9;
    uVar8 = puVar4[0x1c];
    if (((uVar5 & 0x10) != 0) && ((int)uVar8 < 0x1d)) {
      uVar8 = 0x1c;
    }
  }
  else {
    local_4 = puVar4[0x1c];
    if (((uVar5 & 0x10) != 0) && ((int)local_4 < 0xf)) {
      local_4 = 0xe;
    }
    uVar8 = uVar8 + iVar10 + iVar9;
  }
  if (((int)param_1 < (int)local_4) || ((int)uVar7 < (int)uVar8)) {
    puVar4[3] = uVar5 | 0xe0;
    if ((HGDIOBJ)puVar4[0x44] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar4[0x44]);
    }
    puVar4[0x44] = 0;
  }
  else {
    uVar8 = (uint)((*puVar4 & 0xf000) == 0) << 5 | uVar5 & 0xffffff9f;
    uVar8 = ((int)(uVar5 << 0x1f) >> 0x18 ^ uVar8) & 0x80 ^ uVar8;
    puVar4[3] = uVar8;
    if ((uVar8 & 8) == 0) {
      if ((uVar8 & 0x10) == 0) {
        puVar4[0x2e] = *puVar1;
        puVar4[0x2f] = puVar4[0x10];
        puVar4[0x30] = puVar4[0x11];
        puVar4[0x31] = puVar4[0x12];
        if ((puVar4[3] & 0x800) != 0) {
          if (0xd < (int)(puVar4[0x31] - puVar4[0x2f])) {
            uVar5 = (int)((puVar4[0x2f] - 0xd) + puVar4[0x31]) / 2;
            puVar4[0x2f] = uVar5;
            puVar4[0x31] = uVar5 + 0xd;
          }
        }
      }
      else {
        puVar4[0x2f] = puVar4[0x10];
        puVar4[0x31] = (int)uVar7 / 2 + puVar4[0x10];
        puVar4[0x3a] = puVar4[0x12];
        puVar4[0x38] = puVar4[0x31];
        if ((uVar7 & 1) != 0) {
          puVar4[0x31] = puVar4[0x31] + 1;
        }
        iVar6 = (int)(puVar4[0x31] - puVar4[0x2f]) / 2;
        puVar4[0x32] = puVar4[0x2f] + iVar6;
        puVar4[0x3b] = (puVar4[0x3a] - iVar6) - 2;
      }
      puVar2 = puVar4 + 0x18;
      puVar4[0x13] = uVar7 - puVar4[0x1c] >> 1;
      *puVar2 = *puVar1;
      puVar4[0x19] = puVar4[0x10];
      puVar4[0x1a] = puVar4[0x11];
      puVar4[0x1b] = puVar4[0x12];
      uVar7 = *puVar2 + iVar9;
      uVar8 = puVar4[0x1a] - iVar10;
      *puVar2 = uVar7;
      puVar4[0x1a] = uVar8;
      uVar5 = puVar4[0x1b];
      puVar4[0x19] = puVar4[0x19] + puVar4[0x13];
      puVar4[0x1b] = uVar5 - puVar4[0x13];
      if (bVar3) {
        puVar4[0x1b] = (uVar5 - puVar4[0x13]) + 1;
      }
      uVar5 = puVar4[0x1e];
    }
    else {
      if ((uVar8 & 0x10) == 0) {
        puVar2 = puVar4 + 0x2e;
        *puVar2 = *puVar1;
        puVar4[0x2f] = puVar4[0x10];
        puVar4[0x30] = puVar4[0x11];
        puVar4[0x31] = puVar4[0x12];
        if ((puVar4[3] & 0x800) != 0) {
          if (0xd < (int)(puVar4[0x30] - *puVar2)) {
            uVar5 = (int)((*puVar2 - 0xd) + puVar4[0x30]) / 2;
            *puVar2 = uVar5;
            puVar4[0x30] = uVar5 + 0xd;
          }
        }
      }
      else {
        uVar5 = *puVar1;
        puVar4[0x2e] = uVar5;
        puVar4[0x30] = (int)param_1 / 2 + uVar5;
        puVar4[0x39] = puVar4[0x11];
        puVar4[0x37] = puVar4[0x30];
        if (((uint)param_1 & 1) != 0) {
          puVar4[0x30] = puVar4[0x30] + 1;
        }
        iVar6 = (int)(puVar4[0x30] - puVar4[0x2e]) / 2;
        puVar4[0x32] = puVar4[0x2e] + iVar6;
        puVar4[0x3b] = (puVar4[0x39] - iVar6) - 2;
      }
      puVar2 = puVar4 + 0x18;
      puVar4[0x13] = (int)param_1 - puVar4[0x1c] >> 1;
      *puVar2 = *puVar1;
      puVar4[0x19] = puVar4[0x10];
      puVar4[0x1a] = puVar4[0x11];
      puVar4[0x1b] = puVar4[0x12];
      *puVar2 = *puVar2 + puVar4[0x13];
      puVar4[0x1a] = puVar4[0x1a] - puVar4[0x13];
      uVar8 = puVar4[0x1b] - iVar10;
      uVar7 = puVar4[0x19] + iVar9;
      puVar4[0x1b] = uVar8;
      puVar4[0x19] = uVar7;
      if (bVar3) {
        puVar4[0x1a] = puVar4[0x1a] + 1;
      }
      uVar5 = puVar4[0x1f];
    }
    puVar4[0x1d] = (uVar8 + uVar5 * -2) - uVar7;
    puVar4[3] = (uint)((int)(puVar4[5] - puVar4[4]) <= (int)puVar4[0x1d]) << 0xc |
                puVar4[3] & 0xffffefff;
    FUN_0051d310(puVar4,0);
    if ((puVar4[3] & 0x200) != 0) {
      FUN_0051e590(puVar4);
      return;
    }
  }
  return;
}


