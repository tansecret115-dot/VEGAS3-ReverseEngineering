/* Module: sftrans1.dll
   Function: FUN_00482a30
   Address: 00482a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00482a30(int *param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6,
            double *param_7)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  float10 extraout_ST0;
  undefined8 local_c8;
  int local_bc;
  undefined8 local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  double local_28;
  undefined8 local_20;
  double local_18;
  double local_10;
  
  iVar8 = ftol();
  *param_3 = iVar8;
  iVar8 = ftol();
  param_3[1] = iVar8;
  iVar8 = ftol();
  param_3[2] = iVar8;
  iVar8 = ftol();
  param_3[3] = iVar8;
  if (param_7 != (double *)0x0) {
    local_80 = param_7[1];
    local_78 = *param_7;
    local_40 = (param_7[1] + param_7[3]) * _DAT_00557838;
    local_70 = param_7[3];
    local_30 = local_40;
    local_68 = param_7[2];
    local_60 = param_7[1];
    local_58 = param_7[2];
    local_50._0_4_ = *(undefined4 *)(param_7 + 3);
    local_48._0_4_ = *(undefined4 *)param_7;
    local_50._4_4_ = *(undefined4 *)((int)param_7 + 0x1c);
    local_48._4_4_ = *(undefined4 *)((int)param_7 + 4);
    local_38 = param_7[2];
    local_20._0_4_ = *(undefined4 *)(param_7 + 1);
    local_28 = (*param_7 + param_7[2]) * _DAT_00557838;
    local_20._4_4_ = *(undefined4 *)((int)param_7 + 0xc);
    local_10 = param_7[3];
    local_a8 = 2147483647.0;
    local_b8 = 2147483647.0;
    local_18 = local_28;
    local_a0 = -2147483648.0;
    pdVar10 = (double *)&local_80;
    local_bc = 8;
    dVar3 = _DAT_005633c0;
    do {
      local_c8 = *pdVar10;
      dVar2 = pdVar10[-1];
      if (param_1[0x5b] != 0) {
        dVar5 = ((dVar2 - *(double *)(param_1 + 0x34)) * (dVar2 - *(double *)(param_1 + 0x34))) /
                (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32));
        dVar4 = dVar5 * *(double *)(param_1 + 0x4c) - *(double *)(param_1 + 0x54);
        local_c8 = (local_c8 / *(double *)(param_1 + 0x2c)) *
                   (((dVar5 * *(double *)(param_1 + 0x4e) - *(double *)(param_1 + 0x56)) +
                    *(double *)(param_1 + 0x2c)) - dVar4) + dVar4;
      }
      if (param_1[0x5c] != 0) {
        dVar4 = ((local_c8 - *(double *)(param_1 + 0x36)) * (local_c8 - *(double *)(param_1 + 0x36))
                ) / (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e));
        dVar5 = dVar4 * *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50);
        dVar2 = (dVar2 / *(double *)(param_1 + 0x30)) *
                (((dVar4 * *(double *)(param_1 + 0x4a) - *(double *)(param_1 + 0x52)) +
                 *(double *)(param_1 + 0x30)) - dVar5) + dVar5;
      }
      if (param_1[0x5a] != 0) {
        local_c8 = ((local_c8 - *(double *)(param_1 + 0x36)) *
                   (dVar2 * *(double *)(param_1 + 0x46) + *(double *)(param_1 + 0x40))) /
                   *(double *)(param_1 + 0x2e) + *(double *)(param_1 + 0x36);
      }
      if (param_1[0x59] != 0) {
        dVar2 = ((dVar2 - *(double *)(param_1 + 0x34)) *
                (local_c8 * *(double *)(param_1 + 0x44) + *(double *)(param_1 + 0x3c))) /
                *(double *)(param_1 + 0x32) + *(double *)(param_1 + 0x34);
      }
      if (param_1[0x58] != 0) {
        dVar2 = local_c8 * *(double *)(param_1 + 0x38) + dVar2;
        local_c8 = dVar2 * *(double *)(param_1 + 0x3a) + local_c8;
      }
      pdVar10[-1] = dVar2;
      *(int *)pdVar10 = (int)local_c8;
      *(undefined4 *)((int)pdVar10 + 4) = local_c8._4_4_;
      if (pdVar10[-1] < local_b8) {
        local_b8 = pdVar10[-1];
      }
      if (local_a0 < pdVar10[-1]) {
        local_a0 = pdVar10[-1];
      }
      if (*pdVar10 < local_a8) {
        local_a8 = *pdVar10;
      }
      if (dVar3 < *pdVar10) {
        dVar3 = *pdVar10;
      }
      pdVar10 = pdVar10 + 2;
      local_bc = local_bc + -1;
    } while (local_bc != 0);
    *(undefined4 *)param_7 = (undefined4)local_b8;
    *(undefined4 *)((int)param_7 + 4) = local_b8._4_4_;
    *(undefined4 *)(param_7 + 2) = (undefined4)local_a0;
    *(undefined4 *)(param_7 + 1) = (undefined4)local_a8;
    param_7[3] = dVar3;
    *(undefined4 *)((int)param_7 + 0x14) = local_a0._4_4_;
    *(undefined4 *)((int)param_7 + 0xc) = local_a8._4_4_;
  }
  if (param_5 != 0) {
    dVar3 = (double)(param_1[0xe] + param_1[0xc]) * _DAT_00557838 - *(double *)(param_1 + 0x6c);
    iVar8 = ftol();
    iVar9 = ftol();
    *param_3 = *param_3 + iVar8;
    param_3[2] = param_3[2] + iVar8;
    param_3[1] = param_3[1] + iVar9;
    param_3[3] = param_3[3] + iVar9;
    if (param_7 != (double *)0x0) {
      *param_7 = (double)(extraout_ST0 + (float10)*param_7);
      param_7[2] = (double)(extraout_ST0 + (float10)param_7[2]);
      param_7[1] = dVar3 + param_7[1];
      param_7[3] = dVar3 + param_7[3];
    }
    *(double *)(param_1 + 0x5e) =
         (double)(((float10)iVar8 - extraout_ST0) + (float10)*(double *)(param_1 + 0x5e));
    *(double *)(param_1 + 0x60) = ((double)iVar9 - dVar3) + *(double *)(param_1 + 0x60);
  }
  iVar8 = param_3[3];
  iVar9 = param_3[1];
  local_bc = *param_3;
  iVar11 = param_3[2] - local_bc;
  local_c8._0_4_ = iVar11;
  if (param_6 != 0) {
    local_90 = (double)iVar11 * _DAT_00557838;
    dVar3 = (double)(iVar8 - iVar9) * _DAT_00557838;
    if (local_bc < *param_2) {
      *(double *)(param_1 + 0x5e) = (double)(*param_2 - local_bc) + *(double *)(param_1 + 0x5e);
      *param_3 = *param_2;
    }
    if (param_3[1] < param_2[1]) {
      *(double *)(param_1 + 0x60) = (double)(param_2[1] - param_3[1]) + *(double *)(param_1 + 0x60);
      param_3[1] = param_2[1];
    }
    if (param_2[2] < param_3[2]) {
      param_3[2] = param_2[2];
    }
    if (param_2[3] < param_3[3]) {
      param_3[3] = param_2[3];
    }
    local_bc = *param_3;
    local_b0 = SUB84(dVar3,0);
    uStack_ac = (undefined4)((ulonglong)dVar3 >> 0x20);
    if ((double)param_3[3] <= (double)param_3[1] + dVar3) {
      local_c8._0_4_ = local_b0;
      local_c8._4_4_ = uStack_ac;
    }
    else {
      local_c8._0_4_ = local_b0;
      local_c8._4_4_ = uStack_ac;
    }
  }
  *(double *)(param_1 + 0x62) = (double)local_bc;
  *(double *)(param_1 + 0x68) = (double)param_3[1];
  *(double *)(param_1 + 100) = (double)param_3[2];
  iVar1 = param_3[3];
  param_1[1] = iVar8 - iVar9;
  *(double *)(param_1 + 0x6a) = (double)iVar1;
  *param_1 = iVar11;
  if (param_6 == 0) {
    param_1[0xf] = param_1[0xb];
    param_1[0x10] = param_1[0xc];
    param_1[0x11] = param_1[0xd];
    param_1[0x12] = param_1[0xe];
    *param_4 = param_1[0xb];
    param_4[1] = param_1[0xc];
    param_4[2] = param_1[0xd];
    param_4[3] = param_1[0xe];
    param_1[2] = *param_3;
    param_1[3] = param_3[1];
    param_1[4] = param_3[2];
    param_1[5] = param_3[3];
    return;
  }
  dVar2 = (double)*param_3;
  local_bc = 8;
  dVar5 = (double)param_3[1];
  local_80 = dVar5;
  local_78 = dVar2;
  local_70 = (double)param_3[3];
  local_50 = dVar5;
  local_68 = (double)param_3[2];
  local_48 = dVar2;
  local_40 = (double)CONCAT44(local_c8._4_4_,(int)local_c8);
  local_60 = local_70;
  local_58 = local_68;
  local_38 = local_68;
  local_30 = (double)CONCAT44(local_c8._4_4_,(int)local_c8);
  local_28 = local_90;
  local_18 = local_90;
  iVar8 = param_1[0x58];
  local_20 = dVar5;
  local_10 = local_70;
  dVar3 = (double)param_1[0xd];
  pdVar10 = (double *)&local_80;
  local_a8 = (double)param_1[0xb];
  local_a0 = (double)param_1[0xe];
  local_b8 = (double)param_1[0xc];
  do {
    pdVar10[-1] = (pdVar10[-1] - dVar2) + *(double *)(param_1 + 0x5e);
    *pdVar10 = (*pdVar10 - dVar5) + *(double *)(param_1 + 0x60);
    local_c8 = pdVar10[-1];
    dVar4 = *pdVar10;
    if (iVar8 != 0) {
      dVar4 = dVar4 - *(double *)(param_1 + 0x3a) * pdVar10[-1];
      local_c8 = local_c8 - *(double *)(param_1 + 0x38) * *pdVar10;
    }
    if (param_1[0x59] == 0) {
LAB_00483153:
      if (param_1[0x5a] != 0) {
        dVar6 = local_c8 * *(double *)(param_1 + 0x46) + *(double *)(param_1 + 0x40);
        if (dVar6 == _DAT_00555910) {
          *(undefined4 *)pdVar10 = 0;
          *(undefined4 *)((int)pdVar10 + 4) = 0xbff00000;
          goto LAB_00483311;
        }
        dVar4 = ((dVar4 - *(double *)(param_1 + 0x36)) * *(double *)(param_1 + 0x2e)) / dVar6 +
                *(double *)(param_1 + 0x36);
      }
      if (param_1[0x5c] != 0) {
        dVar6 = ((dVar4 - *(double *)(param_1 + 0x36)) * (dVar4 - *(double *)(param_1 + 0x36))) /
                (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e));
        dVar7 = dVar6 * *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50);
        dVar6 = (dVar6 * *(double *)(param_1 + 0x4a) - *(double *)(param_1 + 0x52)) +
                *(double *)(param_1 + 0x30);
        if (dVar7 == dVar6) {
          if (dVar7 <= local_c8) {
            pdVar10[-1] = *(double *)(param_1 + 0x30) + _DAT_00555908;
          }
          else {
            pdVar10[-1] = _DAT_00557828;
          }
          goto LAB_00483311;
        }
        local_c8 = ((local_c8 - dVar7) / (dVar6 - dVar7)) * *(double *)(param_1 + 0x30);
      }
      if (param_1[0x5b] == 0) {
LAB_00483301:
        *(int *)(pdVar10 + -1) = (int)local_c8;
        *(undefined4 *)((int)pdVar10 + -4) = local_c8._4_4_;
        dVar6 = dVar4;
      }
      else {
        dVar6 = ((local_c8 - *(double *)(param_1 + 0x34)) * (local_c8 - *(double *)(param_1 + 0x34))
                ) / (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32));
        dVar7 = dVar6 * *(double *)(param_1 + 0x4c) - *(double *)(param_1 + 0x54);
        dVar6 = (dVar6 * *(double *)(param_1 + 0x4e) - *(double *)(param_1 + 0x56)) +
                *(double *)(param_1 + 0x2c);
        if (dVar7 != dVar6) {
          dVar4 = ((dVar4 - dVar7) / (dVar6 - dVar7)) * *(double *)(param_1 + 0x2c);
          goto LAB_00483301;
        }
        dVar6 = _DAT_00557828;
        if (dVar7 <= dVar4) {
          dVar6 = *(double *)(param_1 + 0x2c) + _DAT_00555908;
        }
      }
      *pdVar10 = dVar6;
    }
    else {
      dVar6 = dVar4 * *(double *)(param_1 + 0x44) + *(double *)(param_1 + 0x3c);
      if (dVar6 != _DAT_00555910) {
        local_c8 = ((local_c8 - *(double *)(param_1 + 0x34)) * *(double *)(param_1 + 0x32)) / dVar6
                   + *(double *)(param_1 + 0x34);
        goto LAB_00483153;
      }
      *(undefined4 *)(pdVar10 + -1) = 0;
      *(undefined4 *)((int)pdVar10 + -4) = 0xbff00000;
    }
LAB_00483311:
    if (pdVar10[-1] < dVar3) {
      dVar3 = pdVar10[-1];
    }
    if (local_a8 < pdVar10[-1]) {
      local_a8 = pdVar10[-1];
    }
    if (*pdVar10 < local_a0) {
      local_a0 = *pdVar10;
    }
    if (local_b8 < *pdVar10) {
      local_b8 = *pdVar10;
    }
    pdVar10 = pdVar10 + 2;
    local_bc = local_bc + -1;
    if (local_bc == 0) {
      *param_4 = param_1[0xb];
      param_4[1] = param_1[0xc];
      param_4[2] = param_1[0xd];
      param_4[3] = param_1[0xe];
      if ((double)*param_4 < dVar3) {
        floor(dVar3);
        iVar8 = ftol();
        *param_4 = iVar8;
      }
      if (local_a8 < (double)param_4[2]) {
        ceil(local_a8);
        iVar8 = ftol();
        param_4[2] = iVar8;
      }
      if ((double)param_4[1] < local_a0) {
        floor(local_a0);
        iVar8 = ftol();
        param_4[1] = iVar8;
      }
      if (local_b8 < (double)param_4[3]) {
        ceil(local_b8);
        iVar8 = ftol();
        param_4[3] = iVar8;
      }
      param_1[0xf] = *param_4;
      param_1[0x10] = param_4[1];
      param_1[0x11] = param_4[2];
      param_1[0x12] = param_4[3];
      param_1[2] = *param_3;
      param_1[3] = param_3[1];
      param_1[4] = param_3[2];
      param_1[5] = param_3[3];
      return;
    }
  } while( true );
}


