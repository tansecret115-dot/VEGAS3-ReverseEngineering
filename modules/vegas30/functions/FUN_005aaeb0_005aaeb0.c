/* Module: vegas30.exe
   Function: FUN_005aaeb0
   Address: 005aaeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aaeb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  float10 fVar17;
  undefined8 uVar18;
  int local_48;
  code *local_44;
  double local_40;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  
  iVar15 = 0;
  iVar12 = param_1[0x90];
  if (0 < iVar12) {
    puVar11 = param_1 + 0x10;
    puVar10 = param_1;
    do {
      puVar13 = puVar11;
      iVar9 = iVar15;
      uVar18 = *(undefined8 *)puVar11;
      for (iVar16 = iVar15; iVar16 < iVar12; iVar16 = iVar16 + 1) {
        local_28._4_4_ = (int)((ulonglong)uVar18 >> 0x20);
        if (((int)puVar13[1] <= local_28._4_4_) &&
           (((int)puVar13[1] < local_28._4_4_ ||
            (local_28._0_4_ = (uint)uVar18, *puVar13 < (uint)local_28)))) {
          iVar9 = iVar16;
          uVar18 = *(undefined8 *)puVar13;
        }
        local_28 = (double)uVar18;
        puVar13 = puVar13 + 2;
        uVar18 = local_28;
      }
      uVar4 = param_1[iVar9];
      iVar15 = iVar15 + 1;
      uVar18 = *(undefined8 *)(param_1 + iVar9 * 2 + 0x70);
      uVar1 = *(undefined8 *)(param_1 + iVar9 * 2 + 0x50);
      uVar5 = param_1[iVar9 * 2 + 0x10];
      uVar2 = *(undefined8 *)(param_1 + iVar9 * 2 + 0x30);
      uVar6 = param_1[iVar9 * 2 + 0x11];
      param_1[iVar9] = *puVar10;
      param_1[iVar9 * 2 + 0x10] = *puVar11;
      param_1[iVar9 * 2 + 0x11] = puVar11[1];
      param_1[iVar9 * 2 + 0x30] = puVar11[0x20];
      param_1[iVar9 * 2 + 0x31] = puVar11[0x21];
      param_1[iVar9 * 2 + 0x50] = puVar11[0x40];
      param_1[iVar9 * 2 + 0x51] = puVar11[0x41];
      param_1[iVar9 * 2 + 0x70] = puVar11[0x60];
      param_1[iVar9 * 2 + 0x71] = puVar11[0x61];
      *puVar10 = uVar4;
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      puVar10 = puVar10 + 1;
      *(undefined8 *)(puVar11 + 0x20) = uVar2;
      *(undefined8 *)(puVar11 + 0x40) = uVar1;
      *(undefined8 *)(puVar11 + 0x60) = uVar18;
      iVar12 = param_1[0x90];
      puVar11 = puVar11 + 2;
    } while (iVar15 < iVar12);
  }
  iVar15 = 0;
  iVar12 = 0;
  local_48 = 0;
  if (0 < (int)param_1[0x90]) {
    puVar10 = param_1 + 0x30;
    do {
      if ((puVar10[-0x20] == -1) && (puVar10[-0x1f] == 0x7fffffff)) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[0x20] = 0;
        puVar10[0x21] = 0;
        puVar10[0x40] = 0;
        puVar10[0x41] = 0;
      }
      else {
        iVar15 = iVar15 + 1;
      }
      iVar12 = iVar12 + 1;
      puVar10 = puVar10 + 2;
      local_48 = iVar15;
    } while (iVar12 < (int)param_1[0x90]);
  }
  iVar12 = param_1[0x9f];
  switch(iVar12) {
  default:
    local_44 = FUN_005aadc0;
    break;
  case 1:
  case 4:
    local_44 = (code *)&LAB_005aac90;
    break;
  case 2:
  case 5:
    local_44 = FUN_005aac50;
  }
  local_20 = 0.0;
  iVar15 = 0;
  dVar7 = (double)CONCAT44(param_3,param_2) * _DAT_006106c8 -
          *(double *)(param_1 + 0x94) / (double)(int)(2 - (uint)(2 < iVar12));
  dVar3 = *(double *)(param_1 + 0x94);
  if (0 < local_48) {
    pdVar14 = (double *)(param_1 + 0x50);
    do {
      local_40 = 0.0;
      local_28 = (double)(longlong)pdVar14[-0x20] / *(double *)(param_1 + 0x92);
      if (local_28 < dVar7) {
        local_40 = (local_28 - dVar7) * *(double *)(param_1 + 0x92);
        if (_DAT_00610fe0 <= local_40) {
          if (_DAT_00610fd8 < local_40) {
            local_40 = 0.0;
          }
        }
        else {
          local_40 = -1.0;
        }
      }
      local_28 = local_28 - dVar7;
      if (_DAT_00610fd8 <= local_28) {
        if (*(double *)(param_1 + 0x94) < local_28) {
          local_28 = *(double *)(param_1 + 0x94);
        }
      }
      else {
        local_28 = 0.0;
      }
      if (iVar15 == local_48 + -1) {
        local_30 = *(double *)(param_1 + 0x94);
        local_40 = ((_DAT_006106d0 / *(double *)(param_1 + 0x92) + local_28) -
                   *(double *)(param_1 + 0x94)) * *(double *)(param_1 + 0x92);
        if (_DAT_00610fd8 <= local_40) {
          if (_DAT_006106d0 < local_40) {
            local_40 = 1.0;
          }
        }
        else {
          local_40 = 0.0;
        }
      }
      else {
        local_30 = (double)(longlong)pdVar14[-0x1f] / *(double *)(param_1 + 0x92) - dVar7;
        if (*(double *)(param_1 + 0x94) < local_30) {
          local_40 = (local_30 - *(double *)(param_1 + 0x94)) * *(double *)(param_1 + 0x92);
          if (_DAT_00610fd8 <= local_40) {
            if (_DAT_006106d0 < local_40) {
              local_40 = 1.0;
            }
          }
          else {
            local_40 = 0.0;
          }
        }
        if (_DAT_00610fd8 <= local_30) {
          if (*(double *)(param_1 + 0x94) < local_30) {
            local_30 = *(double *)(param_1 + 0x94);
          }
        }
        else {
          local_30 = 0.0;
        }
      }
      fVar17 = (float10)(*local_44)((double)(byte)((2 < iVar12) + 1) * dVar3,(uint)local_28,
                                    local_28._4_4_,(undefined4)local_30,local_30._4_4_);
      pdVar14[-0x10] = (double)fVar17;
      iVar16 = param_1[0x9e];
      if ((iVar16 == 0) || (local_40 == _DAT_00610fd8)) {
        *(undefined4 *)pdVar14 = 0;
        *(undefined4 *)((int)pdVar14 + 4) = 0;
        *(undefined4 *)(pdVar14 + 0x10) = 0;
        *(undefined4 *)((int)pdVar14 + 0x84) = 0;
      }
      else {
        if (_DAT_00610fd8 <= local_40) {
          if (_DAT_00610560 <= local_40) {
            dVar8 = _DAT_00610560;
            if (iVar16 != 1) {
              dVar8 = local_40 - _DAT_00610560;
            }
            dVar8 = dVar8 / local_40;
          }
          else {
            dVar8 = (double)(iVar16 == 1);
          }
        }
        else {
          local_40 = local_40 + _DAT_006106d0;
          if (local_40 < _DAT_00610560) {
            dVar8 = _DAT_006106d0;
            if (iVar16 == 1) {
              dVar8 = _DAT_00610560;
            }
            *pdVar14 = (dVar8 - local_40) / (_DAT_006106d0 - local_40);
            pdVar14[0x10] = _DAT_006106d0 - *pdVar14;
            goto LAB_005ab41e;
          }
          dVar8 = (double)(iVar16 != 1);
        }
        *pdVar14 = dVar8;
        pdVar14[0x10] = _DAT_006106d0 - *pdVar14;
      }
LAB_005ab41e:
      local_20 = local_20 + pdVar14[-0x10];
      iVar15 = iVar15 + 1;
      pdVar14 = pdVar14 + 1;
    } while (iVar15 < local_48);
    if (_DAT_006106c8 <= local_20) {
      pdVar14 = (double *)(param_1 + 0x30);
      do {
        local_48 = local_48 + -1;
        *pdVar14 = *pdVar14 / local_20;
        pdVar14 = pdVar14 + 1;
      } while (local_48 != 0);
      return;
    }
  }
  uVar18 = ftol();
  if (0 < local_48) {
    puVar10 = param_1 + 0x30;
    do {
      if ((puVar10[-0x20] == (int)uVar18) && (puVar10[-0x1f] == (int)((ulonglong)uVar18 >> 0x20))) {
        *puVar10 = 0;
        puVar10[1] = 0x3ff00000;
      }
      else {
        *puVar10 = 0;
        puVar10[1] = 0;
      }
      puVar10 = puVar10 + 2;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0x3ff00000;
  return;
}


