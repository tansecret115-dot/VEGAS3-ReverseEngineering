/* Module: oggplug.dll
   Function: FUN_00434110
   Address: 00434110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00434110(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_28;
  double local_20;
  
  local_20 = _DAT_0044c570;
  iVar15 = 0;
  iVar12 = 0;
  local_68 = 0;
  local_6c = 0;
  local_64 = 0;
  local_74 = 0;
  local_58 = 0.0;
  local_40 = 0.0;
  local_50 = 0.0;
  local_48 = 0.0;
  local_70 = 0;
  if (param_1 < 1) {
    return;
  }
  iVar13 = param_4 - (int)param_2;
  dVar2 = _DAT_0044c570;
  dVar3 = _DAT_0044c570;
  dVar5 = _DAT_0044c570;
  dVar6 = _DAT_0044c570;
  dVar7 = _DAT_0044c570;
  do {
    if (iVar15 < param_1) {
      iVar10 = (int)*param_2 >> 0x10;
      if (iVar15 < iVar10) {
        pfVar11 = (float *)(param_3 + iVar15 * 4);
        do {
          dVar4 = _DAT_0044c570;
          if (_DAT_0044d790 <= *pfVar11) {
            dVar4 = (double)*pfVar11 + _DAT_0044d788;
          }
          dVar1 = dVar4 * dVar4;
          pfVar11 = pfVar11 + 1;
          iVar9 = iVar15 * iVar15;
          local_20 = dVar1 + local_20;
          iVar15 = iVar15 + 1;
          dVar2 = (double)local_68 * dVar1 + dVar2;
          local_58 = dVar1 * dVar4 + local_58;
          dVar3 = (double)iVar9 * dVar1 + dVar3;
          local_50 = (double)local_68 * dVar1 * dVar4 + local_50;
          local_68 = iVar15;
        } while (iVar15 < iVar10);
      }
      uVar14 = *param_2 & 0xffff;
      if (local_6c < (int)uVar14) {
        pfVar11 = (float *)(param_3 + local_6c * 4);
        do {
          dVar4 = _DAT_0044c570;
          if (_DAT_0044d790 <= *pfVar11) {
            dVar4 = (double)*pfVar11 + _DAT_0044d788;
          }
          dVar8 = dVar4 * dVar4;
          pfVar11 = pfVar11 + 1;
          iVar10 = local_6c * local_6c;
          local_20 = local_20 - dVar8;
          dVar1 = (double)local_6c;
          local_6c = local_6c + 1;
          dVar2 = dVar2 - dVar1 * dVar8;
          local_58 = local_58 - dVar8 * dVar4;
          dVar3 = dVar3 - (double)iVar10 * dVar8;
          local_50 = local_50 - dVar1 * dVar8 * dVar4;
        } while (local_6c < (int)uVar14);
      }
    }
    if ((iVar12 < param_1) && (0 < param_5)) {
      iVar10 = param_5 / 2 + local_70;
      if (param_1 < iVar10) {
        iVar10 = param_1;
      }
      if (iVar12 < iVar10) {
        pfVar11 = (float *)(param_3 + iVar12 * 4);
        do {
          dVar4 = _DAT_0044c570;
          if (_DAT_0044d790 <= *pfVar11) {
            dVar4 = (double)*pfVar11 + _DAT_0044d788;
          }
          dVar1 = dVar4 * dVar4;
          pfVar11 = pfVar11 + 1;
          iVar9 = iVar12 * iVar12;
          local_48 = dVar1 + local_48;
          iVar12 = iVar12 + 1;
          dVar5 = (double)local_64 * dVar1 + dVar5;
          local_40 = dVar1 * dVar4 + local_40;
          dVar6 = (double)iVar9 * dVar1 + dVar6;
          dVar7 = (double)local_64 * dVar1 * dVar4 + dVar7;
          local_64 = iVar12;
        } while (iVar12 < iVar10);
      }
      iVar10 = local_70 - (param_5 + 1) / 2;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      if (local_74 < iVar10) {
        pfVar11 = (float *)(param_3 + local_74 * 4);
        do {
          dVar4 = _DAT_0044c570;
          if (_DAT_0044d790 <= *pfVar11) {
            dVar4 = (double)*pfVar11 + _DAT_0044d788;
          }
          dVar8 = dVar4 * dVar4;
          pfVar11 = pfVar11 + 1;
          iVar9 = local_74 * local_74;
          local_48 = local_48 - dVar8;
          dVar1 = (double)local_74;
          local_74 = local_74 + 1;
          dVar5 = dVar5 - dVar1 * dVar8;
          local_40 = local_40 - dVar8 * dVar4;
          dVar6 = dVar6 - (double)iVar9 * dVar8;
          dVar7 = dVar7 - dVar1 * dVar8 * dVar4;
        } while (local_74 < iVar10);
      }
    }
    dVar4 = _DAT_0044d4a8 / (local_20 * dVar3 - dVar2 * dVar2);
    local_28 = (dVar3 * local_58 - local_50 * dVar2) * dVar4 +
               (local_20 * local_50 - local_58 * dVar2) * dVar4 * (double)local_70;
    if ((0 < param_5) &&
       (dVar4 = _DAT_0044d4a8 / (local_48 * dVar6 - dVar5 * dVar5),
       dVar4 = (dVar6 * local_40 - dVar7 * dVar5) * dVar4 +
               (local_48 * dVar7 - local_40 * dVar5) * dVar4 * (double)local_70, dVar4 < local_28))
    {
      local_28 = dVar4;
    }
    param_2 = param_2 + 1;
    *(float *)(iVar13 + -4 + (int)param_2) = (float)((float10)local_28 - (float10)_DAT_0044d788);
    local_70 = local_70 + 1;
  } while (local_70 < param_1);
  return;
}


