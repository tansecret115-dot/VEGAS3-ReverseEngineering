/* Module: oggplug.dll
   Function: FUN_0043f2d0
   Address: 0043f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0043f2d0(int param_1,float *param_2,float *param_3,float *param_4,int param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  uint local_1c;
  float *local_c;
  
  iVar14 = param_1 * (int)param_2;
  if (0 < (int)param_2) {
    pfVar11 = param_3 + param_1 * 2;
    local_38 = param_4;
    local_30 = param_4 + iVar14 * 2;
    local_34 = param_4 + iVar14;
    local_2c = param_2;
    pfVar8 = param_3;
    do {
      fVar1 = pfVar11[-1] + pfVar11[-1];
      fVar2 = _DAT_004532b4 * fVar1 + *pfVar8;
      *local_38 = fVar1 + *pfVar8;
      fVar1 = (*pfVar11 + *pfVar11) * _DAT_004532b8;
      *local_34 = fVar2 - fVar1;
      *local_30 = fVar1 + fVar2;
      local_38 = local_38 + param_1;
      local_34 = local_34 + param_1;
      local_30 = local_30 + param_1;
      pfVar11 = pfVar11 + param_1 * 3;
      pfVar8 = pfVar8 + param_1 * 3;
      local_2c = (float *)((int)local_2c + -1);
    } while (local_2c != (float *)0x0);
  }
  if ((param_1 != 1) && (0 < (int)param_2)) {
    local_2c = (float *)0x0;
    local_34 = (float *)0x0;
    local_38 = param_3;
    pfVar11 = param_4 + iVar14 * 2;
    pfVar8 = param_3 + param_1 * 2;
    local_c = param_2;
    do {
      if (2 < param_1) {
        param_3 = param_6;
        local_1c = param_1 - 1U >> 1;
        pfVar6 = (float *)(param_5 + 4);
        pfVar9 = pfVar8;
        pfVar12 = pfVar8;
        pfVar15 = local_38;
        pfVar17 = param_4 + ((int)local_34 - (int)local_2c);
        param_2 = pfVar11;
        local_30 = param_4 + ((int)local_34 - (int)local_2c) + iVar14;
        do {
          pfVar13 = pfVar12 + -2;
          pfVar10 = pfVar9 + 2;
          pfVar16 = pfVar15 + 2;
          pfVar7 = pfVar6 + 2;
          fVar1 = _DAT_004532b4 * (pfVar12[-3] + pfVar9[1]) + pfVar15[1];
          pfVar17[1] = pfVar12[-3] + pfVar9[1] + pfVar15[1];
          fVar2 = _DAT_004532b4 * (*pfVar10 - *pfVar13) + *pfVar16;
          pfVar17[2] = (*pfVar10 - *pfVar13) + *pfVar16;
          fVar3 = (pfVar9[1] - pfVar12[-3]) * _DAT_004532b8;
          fVar4 = (*pfVar10 + *pfVar13) * _DAT_004532b8;
          fVar5 = fVar1 - fVar4;
          fVar4 = fVar4 + fVar1;
          fVar1 = fVar3 + fVar2;
          fVar2 = fVar2 - fVar3;
          local_30[1] = fVar5 * pfVar6[-1] - fVar1 * *pfVar6;
          local_30[2] = fVar1 * pfVar6[-1] + fVar5 * *pfVar6;
          param_2[1] = fVar4 * *param_3 -
                       fVar2 * *(float *)((int)param_6 + (-8 - param_5) + (int)pfVar7);
          param_2[2] = fVar2 * *param_3 +
                       fVar4 * *(float *)((int)param_6 + (-8 - param_5) + (int)pfVar7);
          param_3 = param_3 + 2;
          local_1c = local_1c - 1;
          pfVar6 = pfVar7;
          pfVar9 = pfVar10;
          pfVar12 = pfVar13;
          pfVar15 = pfVar16;
          pfVar17 = pfVar17 + 2;
          param_2 = param_2 + 2;
          local_30 = local_30 + 2;
        } while (local_1c != 0);
      }
      pfVar8 = pfVar8 + param_1 * 3;
      pfVar11 = pfVar11 + param_1;
      local_34 = (float *)((int)local_34 + param_1 * 3);
      local_38 = local_38 + param_1 * 3;
      local_2c = (float *)((int)local_2c + param_1 * 2);
      local_c = (float *)((int)local_c + -1);
    } while (local_c != (float *)0x0);
  }
  return;
}


