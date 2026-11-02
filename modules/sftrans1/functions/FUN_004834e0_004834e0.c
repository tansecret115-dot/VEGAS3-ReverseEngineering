/* Module: sftrans1.dll
   Function: FUN_004834e0
   Address: 004834e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004834e0(undefined4 *param_1,int *param_2,int *param_3,double *param_4,double param_5,
            undefined4 param_6,undefined4 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  undefined4 *puVar14;
  double dVar15;
  undefined8 local_e0;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  param_1[7] = *param_2;
  param_1[8] = param_2[1];
  param_1[9] = param_2[2];
  param_1[10] = param_2[3];
  param_1[0xb] = *param_3;
  param_1[0xc] = param_3[1];
  param_1[0xd] = param_3[2];
  param_1[0xe] = param_3[3];
  pdVar12 = param_4;
  puVar14 = param_1 + 0x14;
  for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = *(undefined4 *)pdVar12;
    pdVar12 = (double *)((int)pdVar12 + 4);
    puVar14 = puVar14 + 1;
  }
  *(double *)(param_1 + 0x28) = param_5;
  param_1[0x2a] = param_6;
  param_1[0x2b] = param_7;
  *(double *)(param_1 + 0x30) = (double)(param_2[2] - *param_2);
  *(double *)(param_1 + 0x2c) = (double)(param_2[3] - param_2[1]);
  *(double *)(param_1 + 0x32) = *(double *)(param_1 + 0x30) * _DAT_00557838;
  *(double *)(param_1 + 0x2e) = *(double *)(param_1 + 0x2c) * _DAT_00557838;
  param_1[0x34] = param_1[0x32];
  param_1[0x35] = param_1[0x33];
  param_1[0x36] = param_1[0x2e];
  param_1[0x37] = param_1[0x2f];
  dVar1 = *(double *)(param_1 + 0x30) * *param_4 * param_5;
  dVar5 = param_4[1] * *(double *)(param_1 + 0x2c) * param_5;
  dVar8 = dVar1 / (*(double *)(param_1 + 0x2c) - _DAT_00555908);
  *(double *)(param_1 + 0x38) = dVar8;
  dVar9 = dVar5 / (*(double *)(param_1 + 0x30) - _DAT_00555908);
  *(double *)(param_1 + 0x3a) = dVar9;
  *(double *)(param_1 + 0x4c) = param_5 * *(double *)(param_1 + 0x2e) * param_4[6];
  *(double *)(param_1 + 0x4e) = param_4[7] * *(double *)(param_1 + 0x2e) * param_5;
  *(double *)(param_1 + 0x48) = -(param_4[8] * *(double *)(param_1 + 0x32) * param_5);
  *(double *)(param_1 + 0x4a) = -(param_4[9] * *(double *)(param_1 + 0x32) * param_5);
  dVar15 = ((*(double *)(param_1 + 0x36) * *(double *)(param_1 + 0x36)) /
           (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e))) *
           *(double *)(param_1 + 0x48);
  *(double *)(param_1 + 0x50) = dVar15;
  dVar2 = ((*(double *)(param_1 + 0x36) * *(double *)(param_1 + 0x36)) /
          (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e))) * *(double *)(param_1 + 0x4a)
  ;
  *(double *)(param_1 + 0x52) = dVar2;
  dVar3 = ((*(double *)(param_1 + 0x34) * *(double *)(param_1 + 0x34)) /
          (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32))) * *(double *)(param_1 + 0x4c)
  ;
  *(double *)(param_1 + 0x54) = dVar3;
  dVar4 = ((*(double *)(param_1 + 0x34) * *(double *)(param_1 + 0x34)) /
          (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32))) * *(double *)(param_1 + 0x4e)
  ;
  *(double *)(param_1 + 0x56) = dVar4;
  dVar7 = _DAT_00555908 - param_5 * param_4[5];
  *(double *)(param_1 + 0x40) = (_DAT_00555908 - param_5 * param_4[4]) * *(double *)(param_1 + 0x2e)
  ;
  dVar7 = dVar7 * *(double *)(param_1 + 0x2e);
  *(double *)(param_1 + 0x42) = dVar7;
  dVar6 = _DAT_00555908 - param_5 * param_4[3];
  *(double *)(param_1 + 0x3c) = (_DAT_00555908 - param_5 * param_4[2]) * *(double *)(param_1 + 0x32)
  ;
  dVar6 = dVar6 * *(double *)(param_1 + 0x32);
  *(double *)(param_1 + 0x3e) = dVar6;
  dVar6 = (dVar6 - *(double *)(param_1 + 0x3c)) / *(double *)(param_1 + 0x2c);
  *(double *)(param_1 + 0x44) = dVar6;
  dVar7 = (dVar7 - *(double *)(param_1 + 0x40)) / *(double *)(param_1 + 0x30);
  *(double *)(param_1 + 0x46) = dVar7;
  if (param_5 == _DAT_00555910) {
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
  }
  else {
    if ((dVar1 == _DAT_00555910) && (dVar5 == _DAT_00555910)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    param_1[0x58] = uVar10;
    if ((param_4[2] == _DAT_00555910) && (param_4[3] == _DAT_00555910)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    param_1[0x59] = uVar10;
    if ((param_4[5] == _DAT_00555910) && (param_4[4] == _DAT_00555910)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    param_1[0x5a] = uVar10;
    if ((param_4[6] == _DAT_00555910) && (param_4[7] == _DAT_00555910)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    param_1[0x5b] = uVar10;
    if ((param_4[8] == _DAT_00555910) && (param_4[9] == _DAT_00555910)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    param_1[0x5c] = uVar10;
  }
  *(double *)(param_1 + 0x66) = (double)(*param_3 + param_3[2]) * _DAT_00557838;
  *(double *)(param_1 + 0x6c) = (double)(param_3[3] + param_3[1]) * _DAT_00557838;
  local_e0 = *(double *)(param_1 + 0x6c);
  dVar1 = *(double *)(param_1 + 0x66);
  if (param_1[0x5b] != 0) {
    dVar5 = ((dVar1 - *(double *)(param_1 + 0x34)) * (dVar1 - *(double *)(param_1 + 0x34))) /
            (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32));
    dVar3 = dVar5 * *(double *)(param_1 + 0x4c) - dVar3;
    local_e0 = (local_e0 / *(double *)(param_1 + 0x2c)) *
               (((dVar5 * *(double *)(param_1 + 0x4e) - dVar4) + *(double *)(param_1 + 0x2c)) -
               dVar3) + dVar3;
  }
  if (param_1[0x5c] != 0) {
    dVar3 = ((local_e0 - *(double *)(param_1 + 0x36)) * (local_e0 - *(double *)(param_1 + 0x36))) /
            (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e));
    dVar15 = dVar3 * *(double *)(param_1 + 0x48) - dVar15;
    dVar1 = (dVar1 / *(double *)(param_1 + 0x30)) *
            (((dVar3 * *(double *)(param_1 + 0x4a) - dVar2) + *(double *)(param_1 + 0x30)) - dVar15)
            + dVar15;
  }
  if (param_1[0x5a] != 0) {
    local_e0 = ((local_e0 - *(double *)(param_1 + 0x36)) *
               (dVar7 * dVar1 + *(double *)(param_1 + 0x40))) / *(double *)(param_1 + 0x2e) +
               *(double *)(param_1 + 0x36);
  }
  if (param_1[0x59] != 0) {
    dVar1 = ((dVar1 - *(double *)(param_1 + 0x34)) *
            (dVar6 * local_e0 + *(double *)(param_1 + 0x3c))) / *(double *)(param_1 + 0x32) +
            *(double *)(param_1 + 0x34);
  }
  if (param_1[0x58] != 0) {
    dVar1 = dVar8 * local_e0 + dVar1;
    local_e0 = dVar9 * dVar1 + local_e0;
  }
  *(double *)(param_1 + 0x66) = dVar1;
  param_1[0x6c] = (undefined4)local_e0;
  param_1[0x6d] = local_e0._4_4_;
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x66);
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x66);
  *(undefined8 *)(param_1 + 0x6a) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x6c);
  local_78 = (double)*param_3;
  local_20 = (double)param_3[1];
  iVar11 = param_1[0x5b];
  local_80 = local_20;
  local_10 = (double)param_3[3];
  local_70 = local_10;
  local_58 = (double)param_3[2];
  local_68 = local_58;
  local_60 = local_10;
  local_50 = local_20;
  local_48 = local_78;
  local_40 = (double)(param_3[1] + param_3[3]) * _DAT_00557838;
  local_38 = local_58;
  local_30 = local_40;
  pdVar12 = (double *)&local_80;
  local_28 = (double)(*param_3 + param_3[2]) * _DAT_00557838;
  iVar13 = 8;
  local_18 = local_28;
  do {
    local_e0 = *pdVar12;
    dVar15 = pdVar12[-1];
    if (iVar11 != 0) {
      dVar2 = ((dVar15 - *(double *)(param_1 + 0x34)) * (dVar15 - *(double *)(param_1 + 0x34))) /
              (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32));
      dVar3 = dVar2 * *(double *)(param_1 + 0x4c) - *(double *)(param_1 + 0x54);
      local_e0 = (local_e0 / *(double *)(param_1 + 0x2c)) *
                 (((dVar2 * *(double *)(param_1 + 0x4e) - *(double *)(param_1 + 0x56)) +
                  *(double *)(param_1 + 0x2c)) - dVar3) + dVar3;
    }
    if (param_1[0x5c] != 0) {
      dVar3 = ((local_e0 - *(double *)(param_1 + 0x36)) * (local_e0 - *(double *)(param_1 + 0x36)))
              / (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e));
      dVar2 = dVar3 * *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50);
      dVar15 = (dVar15 / *(double *)(param_1 + 0x30)) *
               (((dVar3 * *(double *)(param_1 + 0x4a) - *(double *)(param_1 + 0x52)) +
                *(double *)(param_1 + 0x30)) - dVar2) + dVar2;
    }
    if (param_1[0x5a] != 0) {
      local_e0 = ((local_e0 - *(double *)(param_1 + 0x36)) *
                 (dVar15 * *(double *)(param_1 + 0x46) + *(double *)(param_1 + 0x40))) /
                 *(double *)(param_1 + 0x2e) + *(double *)(param_1 + 0x36);
    }
    if (param_1[0x59] != 0) {
      dVar15 = ((dVar15 - *(double *)(param_1 + 0x34)) *
               (local_e0 * *(double *)(param_1 + 0x44) + *(double *)(param_1 + 0x3c))) /
               *(double *)(param_1 + 0x32) + *(double *)(param_1 + 0x34);
    }
    if (param_1[0x58] != 0) {
      dVar15 = local_e0 * *(double *)(param_1 + 0x38) + dVar15;
      local_e0 = dVar15 * *(double *)(param_1 + 0x3a) + local_e0;
    }
    pdVar12[-1] = dVar15;
    *(undefined4 *)pdVar12 = (undefined4)local_e0;
    *(undefined4 *)((int)pdVar12 + 4) = local_e0._4_4_;
    if (*(double *)(param_1 + 0x62) <= pdVar12[-1]) {
      if (*(double *)(param_1 + 100) < pdVar12[-1]) {
        param_1[100] = *(undefined4 *)(pdVar12 + -1);
        param_1[0x65] = *(undefined4 *)((int)pdVar12 + -4);
      }
    }
    else {
      param_1[0x62] = *(undefined4 *)(pdVar12 + -1);
      param_1[99] = *(undefined4 *)((int)pdVar12 + -4);
    }
    if (*(double *)(param_1 + 0x68) <= *pdVar12) {
      if (*(double *)(param_1 + 0x6a) < *pdVar12) {
        param_1[0x6a] = *(undefined4 *)pdVar12;
        param_1[0x6b] = *(undefined4 *)((int)pdVar12 + 4);
      }
    }
    else {
      param_1[0x68] = *(undefined4 *)pdVar12;
      param_1[0x69] = *(undefined4 *)((int)pdVar12 + 4);
    }
    pdVar12 = pdVar12 + 2;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  dVar15 = floor(*(double *)(param_1 + 0x62));
  *(double *)(param_1 + 0x62) = dVar15 - _DAT_00555908;
  dVar15 = ceil(*(double *)(param_1 + 100));
  *(double *)(param_1 + 100) = dVar15 + _DAT_00555908;
  dVar15 = floor(*(double *)(param_1 + 0x68));
  *(double *)(param_1 + 0x68) = dVar15 - _DAT_00555908;
  dVar15 = ceil(*(double *)(param_1 + 0x6a));
  *(double *)(param_1 + 0x6a) = dVar15 + _DAT_00555908;
  iVar11 = ftol();
  *(double *)(param_1 + 0x5e) = (double)iVar11;
  iVar11 = ftol();
  *(double *)(param_1 + 0x60) = (double)iVar11;
  uVar10 = ftol();
  *param_1 = uVar10;
  uVar10 = ftol();
  param_1[1] = uVar10;
  return;
}


