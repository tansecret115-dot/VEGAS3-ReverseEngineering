/* Module: erv23260.dll
   Function: FUN_63815840
   Address: 63815840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_63815840(byte *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  do {
    uVar2 = (int)((uint)*param_1 - (uint)*param_2) >> 0x1f;
    uVar3 = (int)((uint)param_1[1] - (uint)param_2[1]) >> 0x1f;
    uVar4 = (int)((uint)param_1[2] - (uint)param_2[2]) >> 0x1f;
    uVar5 = (int)((uint)param_1[3] - (uint)param_2[3]) >> 0x1f;
    uVar10 = (int)((uint)param_1[4] - (uint)param_2[4]) >> 0x1f;
    uVar11 = (int)((uint)param_1[5] - (uint)param_2[5]) >> 0x1f;
    uVar12 = (int)((uint)param_1[6] - (uint)param_2[6]) >> 0x1f;
    uVar13 = (int)((uint)param_1[7] - (uint)param_2[7]) >> 0x1f;
    uVar6 = (int)((uint)param_1[8] - (uint)param_2[8]) >> 0x1f;
    uVar7 = (int)((uint)param_1[9] - (uint)param_2[9]) >> 0x1f;
    uVar8 = (int)((uint)param_1[10] - (uint)param_2[10]) >> 0x1f;
    uVar9 = (int)((uint)param_1[0xb] - (uint)param_2[0xb]) >> 0x1f;
    uVar14 = (int)((uint)param_1[0xc] - (uint)param_2[0xc]) >> 0x1f;
    uVar15 = (int)((uint)param_1[0xd] - (uint)param_2[0xd]) >> 0x1f;
    uVar16 = (int)((uint)param_1[0xe] - (uint)param_2[0xe]) >> 0x1f;
    uVar17 = (int)((uint)param_1[0xf] - (uint)param_2[0xf]) >> 0x1f;
    iVar1 = iVar1 + ((uVar2 ^ (uint)*param_1 - (uint)*param_2) - uVar2) +
            ((uVar3 ^ (uint)param_1[1] - (uint)param_2[1]) - uVar3) +
            ((uVar4 ^ (uint)param_1[2] - (uint)param_2[2]) - uVar4) +
            ((uVar5 ^ (uint)param_1[3] - (uint)param_2[3]) - uVar5) +
            ((uVar10 ^ (uint)param_1[4] - (uint)param_2[4]) - uVar10) +
            ((uVar11 ^ (uint)param_1[5] - (uint)param_2[5]) - uVar11) +
            ((uVar12 ^ (uint)param_1[6] - (uint)param_2[6]) - uVar12) +
            ((uVar13 ^ (uint)param_1[7] - (uint)param_2[7]) - uVar13) +
            ((uVar6 ^ (uint)param_1[8] - (uint)param_2[8]) - uVar6) +
            ((uVar7 ^ (uint)param_1[9] - (uint)param_2[9]) - uVar7) +
            ((uVar8 ^ (uint)param_1[10] - (uint)param_2[10]) - uVar8) +
            ((uVar9 ^ (uint)param_1[0xb] - (uint)param_2[0xb]) - uVar9) +
            ((uVar14 ^ (uint)param_1[0xc] - (uint)param_2[0xc]) - uVar14) +
            ((uVar15 ^ (uint)param_1[0xd] - (uint)param_2[0xd]) - uVar15) +
            ((uVar16 ^ (uint)param_1[0xe] - (uint)param_2[0xe]) - uVar16) +
            ((uVar17 ^ (uint)param_1[0xf] - (uint)param_2[0xf]) - uVar17);
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_4;
    if (param_5 < iVar1) {
      return 0x7fffffff;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x10);
  return iVar1;
}


