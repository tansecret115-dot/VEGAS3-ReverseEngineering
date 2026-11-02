/* Module: mp3plug.dll
   Function: FUN_5f6c2950
   Address: 5f6c2950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f6c2950(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int iVar6;
  float10 fVar7;
  double dStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  double local_3d8 [81];
  int iStack_150;
  int iStack_14c;
  int local_148;
  double local_140;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double adStack_120 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 auStack_d0 [22];
  undefined4 auStack_78 [22];
  char cStack_20;
  double adStack_18 [2];
  
  pdVar5 = local_3d8;
  for (iVar6 = 0xf0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pdVar5 = 0;
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  iVar6 = *param_1;
  switch(iVar6) {
  case 1:
  case 6:
    local_100 = local_100 | 0x40;
    break;
  case 3:
LAB_5f6c29a7:
    local_100 = local_100 | 0x80;
    break;
  case 4:
    if ((param_1[8] != 0) || (param_1[9] != -0x3fa70000)) goto LAB_5f6c29a7;
  case 2:
    local_100 = local_100 | 0x100;
    break;
  default:
    local_100 = local_100 | 0x20;
  }
  if ((local_100 & 8) == 0) {
    if (param_1[1] == 1) {
      uVar2 = local_100 | 4;
    }
    else if (param_1[1] == 2) {
      uVar2 = local_100 | 1;
    }
    else {
      uVar2 = local_100 | 2;
    }
    local_100 = uVar2 | 0x800;
  }
  if ((local_100 & 0x68) == 0) {
    local_100 = local_100 | 0x200;
    fVar7 = (float10)_CIpow();
    fVar7 = SQRT(fVar7);
    *(double *)(param_1 + 6) = (double)fVar7;
    local_140 = (double)((float10)*(double *)(param_1 + 4) / fVar7);
    local_138 = (double)(fVar7 * (float10)*(double *)(param_1 + 4));
    if ((float10)_DAT_5f72c7b8 < fVar7 * (float10)*(double *)(param_1 + 4)) {
      local_138 = 0.5;
    }
  }
  else {
    local_140 = *(double *)(param_1 + 4);
    local_138 = local_140;
    local_100 = local_100 | 0x200;
  }
  local_e0 = param_1[6];
  local_dc = param_1[7];
  local_148 = param_1[2];
  local_e8 = 0;
  local_e4 = 0xbff00000;
  if (iVar6 == 4) {
    local_148 = 1;
  }
  local_d8 = 0xffffffff;
  FUN_5f6c4800((int)local_3d8);
  if (cStack_20 == '\0') {
    return 0xffffffff;
  }
  FUN_5f6c2da0((int)local_3d8);
  if ((local_100 & 8) == 0) {
    FUN_5f6c2de0(local_3d8);
    FUN_5f6c3160(local_3d8);
    FUN_5f6c3b50((undefined4 *)local_3d8);
  }
  else {
    if ((local_100 & 0x80) != 0) {
      FUN_5f6c4390((int)local_3d8);
    }
    if ((local_100 & 0x100) != 0) {
      FUN_5f6c46a0((int)local_3d8);
    }
  }
  FUN_5f6c3d70((int)local_3d8);
  if (-1 < iStack_14c + -1) {
    puVar4 = param_2 + 0x10;
    puVar3 = auStack_d0 + (iStack_14c + -1) * 2;
    iVar6 = iStack_14c;
    do {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 + -1;
      puVar3 = puVar3 + -2;
    } while (iVar6 != 0);
  }
  if (-1 < iStack_150 + -1) {
    puVar4 = auStack_78 + (iStack_150 + -1) * 2;
    puVar3 = param_2;
    iVar6 = iStack_150;
    do {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3 = puVar3 + 2;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + -2;
    } while (iVar6 != 0);
  }
  uVar1 = auStack_d0[iStack_14c * 2 + 1];
  param_2[0x30] = auStack_d0[iStack_14c * 2];
  param_2[0x31] = uVar1;
  param_2[0x32] = iStack_150;
  if ((local_100 & 0x20) == 0) {
    if ((local_100 & 0x40) == 0) {
      if ((local_100 & 0x80) == 0) {
        if ((local_100 & 0x100) == 0) {
          dStack_3e8 = 1.0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          pdVar5 = &dStack_3e8;
        }
        else {
          puVar4 = (undefined4 *)
                   FUN_5f6c1c30(&dStack_3e8,(double)CONCAT44(uStack_12c,uStack_130),
                                (double)CONCAT44(uStack_124,uStack_128),
                                (double)CONCAT44(uStack_10c,uStack_110),
                                (double)CONCAT44(uStack_104,uStack_108));
          pdVar5 = (double *)FUN_5f6c1b30(adStack_18,*puVar4,puVar4[1],puVar4[2],puVar4[3]);
        }
      }
      else {
        pdVar5 = adStack_120;
      }
    }
    else {
      pdVar5 = (double *)&uStack_110;
    }
  }
  else {
    pdVar5 = (double *)&uStack_130;
  }
  fVar7 = FUN_5f6c1cb0(*(undefined4 *)pdVar5,*(undefined4 *)((int)pdVar5 + 4),
                       *(undefined4 *)(pdVar5 + 1),*(undefined4 *)((int)pdVar5 + 0xc));
  dStack_3e8 = (double)((float10)_DAT_5f72c7c8 / fVar7);
  *(double *)(param_2 + 0x34) = dStack_3e8;
  if ((*param_1 != 5) && (*param_1 != 6)) {
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    return 0;
  }
  param_2[0x36] = 0;
  param_2[0x37] = 0x3ff00000;
  if (_DAT_5f72c9d8 < *(double *)(param_1 + 8)) {
    fVar7 = (float10)_CIpow();
  }
  else {
    fVar7 = (float10)_DAT_5f7349d0;
  }
  *(double *)(param_2 + 0x34) = (double)((fVar7 - (float10)_DAT_5f72c7c8) * (float10)dStack_3e8);
  return 0;
}


