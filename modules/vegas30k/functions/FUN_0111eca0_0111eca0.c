/* Module: vegas30k.dll
   Function: FUN_0111eca0
   Address: 0111eca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111eca0(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  LPRECT ptVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = param_1 + 0xd;
  param_1[0x1f] = 2;
  param_1[0x20] = 2;
  if (param_1[0x21] == 0) {
    if ((param_1[3] & 0x4000) == 0) {
      if (((byte)*param_1 & 0x30) == 0x10) {
        param_1[0x1e] = 8;
      }
      else {
        param_1[0x1e] = 10;
      }
    }
    else {
      param_1[0x1e] = 0xc;
    }
  }
  uVar8 = *param_1;
  if ((uVar8 & 0x300) == 0x100) {
    param_1[0x16] = 10;
    param_1[0x18] = 1;
    param_1[0x19] = 1;
    bVar5 = false;
  }
  else if ((param_1[3] & 0x4000) == 0) {
    param_1[0x18] = 2;
    param_1[0x19] = 2;
    param_1[0x16] = 8;
    bVar5 = true;
  }
  else {
    param_1[0x16] = 3;
    param_1[0x18] = 1;
    param_1[0x19] = 1;
    bVar5 = true;
  }
  uVar7 = param_1[0x1e];
  iVar9 = (uVar7 + 1 >> 1) - param_1[0x18];
  uVar4 = param_1[3];
  if ((uVar4 & 8) == 0) {
    uVar10 = uVar7 + iVar9 * 2;
    uVar7 = param_1[0x16];
  }
  else {
    uVar10 = param_1[0x16];
    uVar7 = uVar7 + iVar9 * 2;
  }
  if (((int)uVar10 <= (int)(param_1[0xf] - param_1[0xd])) &&
     ((int)uVar7 <= (int)(param_1[0x10] - param_1[0xe]))) {
    uVar8 = ((uint)((uVar8 & 0xc00) == 0x400) << 4 | (uint)((uVar8 & 0x3000) == 0)) << 4 |
            uVar4 & 0xfffffecf;
    uVar8 = ((int)(uVar4 << 0x1f) >> 0x19 ^ uVar8) & 0x40 ^ uVar8;
    param_1[3] = uVar8;
    if ((uVar8 & 0x100) != 0) {
      param_1[0x24] = 0;
      param_1[0x26] = 0;
      param_1[0x25] = 0;
      param_1[0x27] = 0;
    }
    puVar2 = param_1 + 0x1a;
    if ((uVar8 & 8) == 0) {
      *puVar2 = *puVar1;
      param_1[0x1b] = param_1[0xe];
      param_1[0x1c] = param_1[0xf];
      param_1[0x1d] = param_1[0x10];
      if ((param_1[3] & 0x4000) != 0) {
        if (0x12 < (int)(param_1[0x1d] - param_1[0x1b])) {
          uVar8 = (int)((param_1[0x1b] - 0x12) + param_1[0x1d]) / 2;
          param_1[0x1b] = uVar8;
          param_1[0x1d] = uVar8 + 0x12;
        }
      }
      puVar2 = param_1 + 0x12;
      param_1[0x11] = (param_1[0x10] - param_1[0xe]) - param_1[0x16] >> 1;
      *puVar2 = *puVar1;
      param_1[0x13] = param_1[0xe];
      param_1[0x14] = param_1[0xf];
      param_1[0x15] = param_1[0x10];
      *puVar2 = *puVar2 + iVar9;
      param_1[0x14] = param_1[0x14] - iVar9;
      uVar8 = param_1[0x15];
      param_1[0x13] = param_1[0x13] + param_1[0x11];
      param_1[0x15] = uVar8 - param_1[0x11];
      if (bVar5) {
        param_1[0x15] = (uVar8 - param_1[0x11]) + 1;
      }
      if ((param_1[3] & 0x100) == 0) {
        ptVar3 = (LPRECT)(param_1 + 0x24);
        iVar6 = ((param_1[3] & 0x4000) != 0) + 0x13;
        ptVar3->left = *puVar2;
        param_1[0x25] = param_1[0x13];
        param_1[0x26] = param_1[0x14];
        param_1[0x27] = param_1[0x15];
        param_1[0x14] = param_1[0x14] - iVar6;
        ptVar3->left = param_1[0x26] - iVar6;
        OffsetRect(ptVar3,iVar9,0);
        iVar9 = param_1[0x10] - param_1[0xe];
        iVar6 = ((param_1[3] & 0x4000) != 0) + 0xb;
        if (iVar6 < iVar9) {
          iVar9 = iVar6;
        }
        uVar8 = (int)((param_1[0xe] - iVar9) + 1 + param_1[0x10]) / 2;
        param_1[0x25] = uVar8;
        param_1[0x27] = uVar8 + iVar9;
      }
      iVar9 = param_1[0x14] + param_1[0x18] * -2;
      uVar8 = *puVar2;
    }
    else {
      *puVar2 = *puVar1;
      param_1[0x1b] = param_1[0xe];
      param_1[0x1c] = param_1[0xf];
      param_1[0x1d] = param_1[0x10];
      if ((param_1[3] & 0x4000) != 0) {
        if (0x12 < (int)(param_1[0x1c] - *puVar2)) {
          uVar8 = (int)((*puVar2 - 0x12) + param_1[0x1c]) / 2;
          *puVar2 = uVar8;
          param_1[0x1c] = uVar8 + 0x12;
        }
      }
      puVar2 = param_1 + 0x12;
      param_1[0x11] = (param_1[0xf] - param_1[0xd]) - param_1[0x16] >> 1;
      *puVar2 = *puVar1;
      param_1[0x13] = param_1[0xe];
      param_1[0x14] = param_1[0xf];
      param_1[0x15] = param_1[0x10];
      uVar8 = param_1[0x14];
      *puVar2 = *puVar2 + param_1[0x11];
      param_1[0x14] = uVar8 - param_1[0x11];
      param_1[0x13] = param_1[0x13] + iVar9;
      param_1[0x15] = param_1[0x15] - iVar9;
      if (bVar5) {
        param_1[0x14] = (uVar8 - param_1[0x11]) + 1;
      }
      if ((param_1[3] & 0x100) == 0) {
        ptVar3 = (LPRECT)(param_1 + 0x24);
        ptVar3->left = *puVar2;
        param_1[0x25] = param_1[0x13];
        param_1[0x26] = param_1[0x14];
        param_1[0x27] = param_1[0x15];
        param_1[0x15] = param_1[0x15] - 0x13;
        param_1[0x25] = param_1[0x27] - 0x13;
        OffsetRect(ptVar3,0,iVar9);
        InflateRect(ptVar3,1,0);
      }
      iVar9 = param_1[0x15] + param_1[0x19] * -2;
      uVar8 = param_1[0x13];
    }
    param_1[0x17] = iVar9 - uVar8;
    uVar8 = (uint)((int)(param_1[5] - param_1[4]) <= (int)(iVar9 - uVar8)) << 0xf |
            param_1[3] & 0xffff7fff;
    param_1[3] = uVar8;
    if ((*param_1 & 4) != 0) {
      param_1[3] = uVar8 | 0x8000;
    }
    FUN_0111e080(param_1,param_1[7],0);
    return;
  }
  param_1[3] = uVar4 | 0x170;
  return;
}


