/* Module: espr3260.dll
   Function: FUN_632f8c90
   Address: 632f8c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632f8c90(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte local_2c [4];
  byte local_28 [12];
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  sbyte sVar7;
  sbyte sVar8;
  
  local_1c = param_3 & 7;
  local_8 = 8 - local_1c;
  pbVar13 = (byte *)(((int)param_4 >> 3) + param_2);
  local_2c[0] = 0xff;
  local_28[8] = 0xff;
  local_c = param_5 & 7;
  pbVar11 = (byte *)(((int)param_3 >> 3) + param_1);
  local_14 = param_4 & 7;
  uVar9 = ((int)param_5 >> 3) - 1;
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 3;
  local_28[3] = 7;
  local_28[4] = 0xf;
  local_28[5] = 0x1f;
  local_28[6] = 0x3f;
  local_28[7] = 0x7f;
  local_10 = 0x1e;
  local_18 = 8 - local_14;
  bVar3 = (byte)(8 - local_14);
  bVar6 = (byte)local_8;
  sVar7 = (sbyte)local_1c;
  sVar8 = (sbyte)local_14;
  if ((param_5 & 0xfffffff8) == 0) {
    bVar3 = (*pbVar13 >> sVar8) + (pbVar13[1] << (bVar3 & 0x1f)) & local_28[local_c];
    if ((int)local_c < local_8) {
      *pbVar11 = (local_28[local_1c] & *pbVar11) + (bVar3 << sVar7) +
                 (local_2c[-local_c - local_1c] & *pbVar11);
      return;
    }
    *pbVar11 = (local_28[local_1c] & *pbVar11) + (bVar3 << sVar7);
    pbVar11[1] = (local_28[(local_8 - local_c) + -4] & pbVar11[1]) + (bVar3 >> (bVar6 & 0x1f));
    return;
  }
  uVar10 = (int)param_4 >> 0x1f;
  if ((((param_4 ^ uVar10) - uVar10 & 3 ^ uVar10) == uVar10) &&
     (uVar10 = (int)param_3 >> 0x1f, ((param_3 ^ uVar10) - uVar10 & 3 ^ uVar10) == uVar10)) {
    uVar10 = (int)param_4 >> 2 & 1;
    uVar5 = (int)param_3 >> 2 & 1;
    if ((uVar10 != uVar5) || (local_10 = -(uint)(uVar10 != 0) & 3, uVar10 != uVar5)) {
      local_10 = (uVar10 != 0) + 1;
    }
    switch(local_10) {
    case 0:
      if (0 < (int)uVar9) {
        do {
          *pbVar11 = *pbVar13;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 1:
      if (0 < (int)uVar9) {
        do {
          *pbVar11 = *pbVar13 * '\x10' + (*pbVar11 & 0xf);
          bVar4 = *pbVar13;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
          uVar9 = uVar9 - 1;
          *pbVar11 = bVar4 >> 4;
        } while (uVar9 != 0);
      }
      break;
    case 2:
      if (0 < (int)uVar9) {
        do {
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          *pbVar11 = bVar4 >> 4;
          *pbVar11 = (bVar4 >> 4) + *pbVar13 * '\x10';
          pbVar11 = pbVar11 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 3:
      bVar4 = *pbVar11;
      *pbVar11 = bVar4 & 0xf;
      *pbVar11 = (*pbVar13 & 0xf0) + (bVar4 & 0xf);
      if (0 < (int)uVar9) {
        do {
          pbVar12 = pbVar13 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar11 = pbVar11 + 1;
          uVar9 = uVar9 - 1;
          *pbVar11 = *pbVar12;
        } while (uVar9 != 0);
      }
    }
  }
  else {
    uVar10 = local_1c;
    param_4 = uVar9;
    if (0 < (int)uVar9) {
      do {
        bVar4 = *pbVar13;
        pbVar12 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        bVar4 = (*pbVar12 << (bVar3 & 0x1f)) + (bVar4 >> sVar8);
        *pbVar11 = (*pbVar11 & local_28[uVar10]) + (bVar4 << (sbyte)uVar10);
        pbVar11 = pbVar11 + 1;
        *pbVar11 = bVar4 >> (bVar6 & 0x1f);
        param_4 = param_4 - 1;
        uVar10 = local_1c;
      } while (param_4 != 0);
    }
  }
  bVar4 = (pbVar13[1] << (bVar3 & 0x1f)) + (*pbVar13 >> sVar8);
  *pbVar11 = (local_28[local_1c] & *pbVar11) + (bVar4 << sVar7);
  if ((int)local_c < local_8) {
    pbVar11 = pbVar11 + 1;
    if ((local_10 != 0) || (local_c != 0)) {
      bVar1 = local_2c[-local_c - local_1c];
      bVar2 = *pbVar11;
      bVar4 = bVar4 >> (bVar6 & 0x1f);
      *pbVar11 = bVar4;
      *pbVar11 = (((pbVar13[1] >> sVar8) + (pbVar13[2] << (bVar3 & 0x1f)) & local_28[local_c]) <<
                 sVar7) + (bVar1 & bVar2) + bVar4;
    }
    return;
  }
  pbVar12 = pbVar11 + 1;
  *pbVar12 = bVar4 >> (bVar6 & 0x1f);
  bVar3 = (pbVar13[1] >> sVar8) + (pbVar13[2] << (bVar3 & 0x1f)) & local_28[local_c];
  *pbVar12 = *pbVar12 + (bVar3 << sVar7);
  pbVar11[2] = (local_28[(local_8 - local_c) + -4] & pbVar11[2]) + (bVar3 >> (bVar6 & 0x1f));
  return;
}


