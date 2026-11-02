/* Module: erv23260.dll
   Function: FUN_63816450
   Address: 63816450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_63816450(byte *param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

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
    uVar2 = (uint)*param_1 - ((int)((uint)*param_2 + (uint)*param_3) >> 1);
    uVar10 = (int)uVar2 >> 0x1f;
    uVar3 = (uint)param_1[1] - ((int)((uint)param_2[1] + (uint)param_3[1]) >> 1);
    uVar11 = (int)uVar3 >> 0x1f;
    uVar4 = (uint)param_1[2] - ((int)((uint)param_3[2] + (uint)param_2[2]) >> 1);
    uVar12 = (int)uVar4 >> 0x1f;
    uVar5 = (uint)param_1[3] - ((int)((uint)param_2[3] + (uint)param_3[3]) >> 1);
    uVar13 = (int)uVar5 >> 0x1f;
    uVar6 = (uint)param_1[4] - ((int)((uint)param_3[4] + (uint)param_2[4]) >> 1);
    uVar14 = (int)uVar6 >> 0x1f;
    uVar7 = (uint)param_1[5] - ((int)((uint)param_2[5] + (uint)param_3[5]) >> 1);
    uVar15 = (int)uVar7 >> 0x1f;
    uVar8 = (uint)param_1[6] - ((int)((uint)param_3[6] + (uint)param_2[6]) >> 1);
    uVar16 = (int)uVar8 >> 0x1f;
    uVar9 = (uint)param_1[7] - ((int)((uint)param_2[7] + (uint)param_3[7]) >> 1);
    uVar17 = (int)uVar9 >> 0x1f;
    param_1 = param_1 + param_4;
    param_2 = param_2 + param_5;
    param_3 = param_3 + param_5;
    iVar1 = iVar1 + ((uVar10 ^ uVar2) - uVar10) + ((uVar11 ^ uVar3) - uVar11) +
            ((uVar12 ^ uVar4) - uVar12) + ((uVar13 ^ uVar5) - uVar13) + ((uVar14 ^ uVar6) - uVar14)
            + ((uVar15 ^ uVar7) - uVar15) + ((uVar16 ^ uVar8) - uVar16) +
            ((uVar17 ^ uVar9) - uVar17);
    if (param_6 < iVar1) {
      return 0x7fffffff;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  return iVar1;
}


