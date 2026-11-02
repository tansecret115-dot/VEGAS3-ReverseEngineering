/* Module: rmbe3260.dll
   Function: FUN_6604cc00
   Address: 6604cc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6604cc00(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte local_2c [4];
  byte local_28 [12];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  sbyte sVar5;
  sbyte sVar6;
  
  local_10 = param_4 & 7;
  local_1c = param_3 & 7;
  local_c = 8 - local_10;
  local_8 = 8 - local_1c;
  local_2c[0] = 0xff;
  pbVar13 = (byte *)(((int)param_4 >> 3) + param_2);
  local_28[8] = 0xff;
  pbVar11 = (byte *)(((int)param_3 >> 3) + param_1);
  local_14 = param_5 & 7;
  uVar7 = ((int)param_5 >> 3) - 1;
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 3;
  local_28[3] = 7;
  local_28[4] = 0xf;
  local_28[5] = 0x1f;
  local_28[6] = 0x3f;
  local_28[7] = 0x7f;
  local_18 = 0x1e;
  bVar8 = (byte)(8 - local_10);
  bVar4 = (byte)local_8;
  sVar5 = (sbyte)local_1c;
  sVar6 = (sbyte)local_10;
  if ((param_5 & 0xfffffff8) == 0) {
    bVar8 = (*pbVar13 >> sVar6) + (pbVar13[1] << (bVar8 & 0x1f)) & local_28[local_14];
    if ((int)local_14 < local_8) {
      *pbVar11 = (local_28[local_1c] & *pbVar11) + (bVar8 << sVar5) +
                 (local_2c[-local_14 - local_1c] & *pbVar11);
      return;
    }
    *pbVar11 = (local_28[local_1c] & *pbVar11) + (bVar8 << sVar5);
    pbVar11[1] = (local_28[(local_8 - local_14) + -4] & pbVar11[1]) + (bVar8 >> (bVar4 & 0x1f));
    return;
  }
  uVar9 = (int)param_4 >> 0x1f;
  if ((((param_4 ^ uVar9) - uVar9 & 3 ^ uVar9) != uVar9) ||
     (uVar9 = (int)param_3 >> 0x1f, ((param_3 ^ uVar9) - uVar9 & 3 ^ uVar9) != uVar9)) {
    uVar9 = local_1c;
    param_4 = uVar7;
    if (0 < (int)uVar7) {
      do {
        bVar3 = *pbVar13;
        pbVar12 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        bVar3 = (bVar3 >> sVar6) + (*pbVar12 << (bVar8 & 0x1f));
        *pbVar11 = (*pbVar11 & local_28[uVar9]) + (bVar3 << (sbyte)uVar9);
        pbVar11 = pbVar11 + 1;
        *pbVar11 = bVar3 >> (bVar4 & 0x1f);
        param_4 = param_4 - 1;
        uVar9 = local_1c;
      } while (param_4 != 0);
    }
    goto switchD_6604cdaf_default;
  }
  uVar9 = (int)param_4 >> 2 & 1;
  uVar10 = (int)param_3 >> 2 & 1;
  if (uVar9 == uVar10) {
    local_18 = -(uint)(uVar9 != 0) & 3;
    if (uVar9 != uVar10) goto LAB_6604cd97;
  }
  else {
LAB_6604cd97:
    local_18 = (uVar9 != 0) + 1;
  }
  switch(local_18) {
  case 0:
    if (0 < (int)uVar7) {
      do {
        *pbVar11 = *pbVar13;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 1:
    if (0 < (int)uVar7) {
      do {
        *pbVar11 = *pbVar13 * '\x10' + (*pbVar11 & 0xf);
        bVar3 = *pbVar13;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
        uVar7 = uVar7 - 1;
        *pbVar11 = bVar3 >> 4;
      } while (uVar7 != 0);
    }
    break;
  case 2:
    if (0 < (int)uVar7) {
      do {
        bVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar11 = bVar3 >> 4;
        *pbVar11 = (bVar3 >> 4) + *pbVar13 * '\x10';
        pbVar11 = pbVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 3:
    bVar3 = *pbVar11;
    *pbVar11 = bVar3 & 0xf;
    *pbVar11 = (*pbVar13 & 0xf0) + (bVar3 & 0xf);
    if (0 < (int)uVar7) {
      do {
        pbVar12 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        pbVar11 = pbVar11 + 1;
        uVar7 = uVar7 - 1;
        *pbVar11 = *pbVar12;
      } while (uVar7 != 0);
    }
  }
switchD_6604cdaf_default:
  bVar3 = (*pbVar13 >> sVar6) + (pbVar13[1] << (bVar8 & 0x1f));
  *pbVar11 = (local_28[local_1c] & *pbVar11) + (bVar3 << sVar5);
  if ((int)local_14 < local_8) {
    pbVar11 = pbVar11 + 1;
    bVar1 = local_2c[-local_14 - local_1c];
    bVar2 = *pbVar11;
    bVar3 = bVar3 >> (bVar4 & 0x1f);
    *pbVar11 = bVar3;
    *pbVar11 = (((pbVar13[1] >> sVar6) + (pbVar13[2] << (bVar8 & 0x1f)) & local_28[local_14]) <<
               sVar5) + bVar3 + (bVar1 & bVar2);
    return;
  }
  pbVar12 = pbVar11 + 1;
  *pbVar12 = bVar3 >> (bVar4 & 0x1f);
  bVar8 = (pbVar13[1] >> sVar6) + (pbVar13[2] << (bVar8 & 0x1f)) & local_28[local_14];
  *pbVar12 = *pbVar12 + (bVar8 << sVar5);
  pbVar11[2] = (local_28[(local_8 - local_14) + -4] & pbVar11[2]) + (bVar8 >> (bVar4 & 0x1f));
  return;
}


