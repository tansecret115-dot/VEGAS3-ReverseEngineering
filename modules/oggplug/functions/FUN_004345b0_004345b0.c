/* Module: oggplug.dll
   Function: FUN_004345b0
   Address: 004345b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004345b0(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_b4;
  int local_a8;
  int local_a4;
  int local_94;
  int local_90;
  int local_8c;
  double local_78;
  double local_70;
  double local_60;
  double local_58;
  int local_50;
  int local_4c;
  double local_48;
  uint *local_3c;
  double local_38;
  int local_2c;
  
  iVar9 = -1;
  local_b4 = -1;
  iVar15 = 0;
  iVar16 = 0;
  iVar8 = 0;
  local_a4 = 0;
  local_2c = 0;
  iVar14 = 0;
  local_70 = 0.0;
  local_58 = 0.0;
  local_60 = 0.0;
  local_48 = 0.0;
  local_38 = 0.0;
  local_4c = 0;
  local_50 = 0;
  local_94 = 0;
  local_8c = 0;
  local_90 = 0;
  if (0 < param_1) {
    local_3c = param_2;
    dVar1 = _DAT_0044c570;
    dVar6 = _DAT_0044c570;
    dVar3 = _DAT_0044c570;
    dVar4 = _DAT_0044c570;
    dVar7 = _DAT_0044c570;
    do {
      if (iVar15 < param_1) {
        iVar11 = (int)*local_3c >> 0x10;
        if (iVar15 < iVar11) {
          pfVar12 = (float *)(param_3 + iVar15 * 4);
          do {
            dVar5 = (double)*pfVar12;
            if (_DAT_0044c570 < dVar5) {
              dVar2 = dVar5 * dVar5 * dVar5 * dVar5;
              dVar7 = dVar2 + dVar7;
              local_94 = local_94 + 1;
              local_70 = (double)iVar8 * dVar2 + local_70;
              local_58 = dVar2 * dVar5 + local_58;
              local_48 = (double)(iVar15 * iVar15) * dVar2 + local_48;
              local_38 = (double)iVar8 * dVar2 * dVar5 + local_38;
              local_4c = iVar15;
              if (iVar9 == -1) {
                iVar9 = iVar15;
              }
            }
            iVar15 = iVar15 + 1;
            pfVar12 = pfVar12 + 1;
            iVar8 = iVar15;
          } while (iVar15 < iVar11);
        }
        uVar13 = *local_3c & 0xffff;
        if (local_a4 < (int)uVar13) {
          pfVar12 = (float *)(param_3 + local_a4 * 4);
          do {
            dVar5 = (double)*pfVar12;
            if (_DAT_0044c570 < dVar5) {
              dVar2 = dVar5 * dVar5 * dVar5 * dVar5;
              dVar7 = dVar7 - dVar2;
              local_70 = local_70 - (double)local_a4 * dVar2;
              local_94 = local_94 + -1;
              local_58 = local_58 - dVar2 * dVar5;
              local_48 = local_48 - (double)(local_a4 * local_a4) * dVar2;
              local_38 = local_38 - (double)local_a4 * dVar2 * dVar5;
            }
            pfVar10 = pfVar12;
            iVar9 = local_a4;
            if (local_4c < local_a4) {
LAB_0043485a:
              iVar9 = -1;
            }
            else {
              for (; (iVar9 < iVar15 && (*pfVar10 <= _DAT_0044d6f0)); pfVar10 = pfVar10 + 1) {
                iVar9 = iVar9 + 1;
              }
              if (iVar9 == iVar15) goto LAB_0043485a;
            }
            local_a4 = local_a4 + 1;
            pfVar12 = pfVar12 + 1;
          } while (local_a4 < (int)uVar13);
        }
      }
      if ((iVar16 < param_1) && (0 < param_5)) {
        iVar11 = param_5 / 2 + local_90;
        if (param_1 < iVar11) {
          iVar11 = param_1;
        }
        if (iVar16 < iVar11) {
          pfVar12 = (float *)(param_3 + iVar16 * 4);
          do {
            dVar5 = (double)*pfVar12;
            if (_DAT_0044c570 < dVar5) {
              dVar2 = dVar5 * dVar5 * dVar5 * dVar5;
              dVar3 = dVar2 + dVar3;
              local_8c = local_8c + 1;
              dVar1 = (double)local_2c * dVar2 + dVar1;
              local_60 = dVar2 * dVar5 + local_60;
              dVar4 = (double)(iVar16 * iVar16) * dVar2 + dVar4;
              dVar6 = (double)local_2c * dVar2 * dVar5 + dVar6;
              local_50 = iVar16;
              if (local_b4 == -1) {
                local_b4 = iVar16;
              }
            }
            iVar16 = iVar16 + 1;
            pfVar12 = pfVar12 + 1;
            local_2c = iVar16;
          } while (iVar16 < iVar11);
        }
        local_a8 = local_90 - (param_5 + 1) / 2;
        if (local_a8 < 0) {
          local_a8 = 0;
        }
        if (iVar14 < local_a8) {
          pfVar12 = (float *)(param_3 + iVar14 * 4);
          do {
            dVar5 = (double)*pfVar12;
            if (_DAT_0044c570 < dVar5) {
              dVar2 = dVar5 * dVar5 * dVar5 * dVar5;
              dVar3 = dVar3 - dVar2;
              local_8c = local_8c + -1;
              dVar1 = dVar1 - (double)iVar14 * dVar2;
              local_60 = local_60 - dVar2 * dVar5;
              dVar4 = dVar4 - (double)(iVar14 * iVar14) * dVar2;
              dVar6 = dVar6 - (double)iVar14 * dVar2 * dVar5;
            }
            pfVar10 = pfVar12;
            local_b4 = iVar14;
            if (local_50 < iVar14) {
LAB_00434a3f:
              local_b4 = -1;
            }
            else {
              for (; (local_b4 < iVar16 && (*pfVar10 <= _DAT_0044d6f0)); pfVar10 = pfVar10 + 1) {
                local_b4 = local_b4 + 1;
              }
              if (local_b4 == iVar16) goto LAB_00434a3f;
            }
            iVar14 = iVar14 + 1;
            pfVar12 = pfVar12 + 1;
          } while (iVar14 < local_a8);
        }
      }
      if ((local_94 < 3) || (((local_4c - iVar9) * 3) / 2 <= iVar15 - local_a4)) {
        local_78 = 0.0;
        if (_DAT_00447a78 < dVar7) {
          local_78 = local_58 / dVar7;
          goto LAB_00434b01;
        }
      }
      else {
        dVar5 = _DAT_0044d4a8 / (dVar7 * local_48 - local_70 * local_70);
        local_78 = (local_48 * local_58 - local_38 * local_70) * dVar5 +
                   (dVar7 * local_38 - local_58 * local_70) * dVar5 * (double)local_90;
LAB_00434b01:
        if (local_78 < _DAT_0044c570) {
          local_78 = 0.0;
        }
      }
      if (0 < param_5) {
        if ((local_8c < 3) || (((local_50 - local_b4) * 3) / 2 <= iVar16 - iVar14)) {
          dVar5 = _DAT_0044c570;
          if (_DAT_00447a78 < dVar3) {
            dVar5 = local_60 / dVar3;
            goto LAB_00434bb2;
          }
        }
        else {
          dVar5 = _DAT_0044d4a8 / (dVar3 * dVar4 - dVar1 * dVar1);
          dVar5 = (dVar4 * local_60 - dVar6 * dVar1) * dVar5 +
                  (dVar3 * dVar6 - local_60 * dVar1) * dVar5 * (double)local_90;
LAB_00434bb2:
          if (dVar5 < _DAT_0044c570) {
            dVar5 = _DAT_0044c570;
          }
        }
        if ((dVar5 < local_78) && (_DAT_0044c570 < dVar5)) {
          local_78 = dVar5;
        }
      }
      *(float *)((param_4 - (int)param_2) + (int)local_3c) = (float)local_78;
      local_3c = local_3c + 1;
      local_90 = local_90 + 1;
    } while (local_90 < param_1);
  }
  return;
}


