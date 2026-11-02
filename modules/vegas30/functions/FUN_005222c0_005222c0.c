/* Module: vegas30.exe
   Function: FUN_005222c0
   Address: 005222c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005222c0(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4,int param_5,
                uint param_6,int param_7,uint param_8,int param_9,int param_10,int *param_11,
                undefined4 param_12,undefined4 param_13,int param_14,undefined4 param_15,
                undefined4 param_16)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float local_114;
  int local_110;
  int local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8 [8];
  float local_c8;
  float local_c4;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c [6];
  float local_74 [4];
  float local_64;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  double local_24;
  float local_18;
  
  local_114 = 0.0;
  local_108 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if ((*(byte *)(param_5 + 4) & 1) == 0) {
    return 0;
  }
  if (param_11 == (int *)0x0) {
    return 0;
  }
  iVar7 = *param_11;
  fVar11 = (float10)FUN_005a5f80(param_5 + 0x24);
  fVar11 = (float10)iVar7 / fVar11;
  iVar7 = param_11[1];
  fVar12 = (float10)FUN_005a5ff0(param_5 + 0x24);
  fVar12 = (float10)iVar7 / fVar12;
  pfVar8 = local_e8;
  for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 1;
  }
  iVar10 = param_6 - param_8;
  iVar7 = (param_7 - param_9) - (uint)(param_6 < param_8);
  if (param_14 == 0) {
    iVar4 = FUN_0050c470(param_5,iVar10,iVar7,local_8c,0,param_15,param_16);
    if (iVar4 == -1) {
      return 0;
    }
    if ((_DAT_00610f20 != local_18) || (_DAT_00610fd8 != local_24)) {
      local_114 = 1.4013e-45;
    }
    pfVar8 = local_74;
    pfVar9 = local_e8;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    FUN_0050db20(local_e8,param_5,iVar10,iVar7,0,0,param_12,param_13,param_15,param_16);
    iVar7 = 0;
    pfVar8 = local_e8 + 1;
    pfVar9 = (float *)(param_5 + 0x28);
    do {
      if (local_114 != 0.0) break;
      if ((pfVar8[-1] != pfVar9[-1]) || (*pfVar8 != *pfVar9)) {
        local_114 = 1.4013e-45;
      }
      iVar7 = iVar7 + 1;
      pfVar8 = pfVar8 + 4;
      pfVar9 = pfVar9 + 4;
    } while (iVar7 < 4);
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    FUN_005a6440(local_e8,local_e8,&local_f8,(float)fVar11,(float)fVar12);
    if (param_3 == (undefined4 *)0x0) goto LAB_00522882;
    pfVar8 = local_e8;
    pfVar9 = local_74;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    iVar7 = 0x1f;
    puVar5 = local_8c;
  }
  else if (param_14 == 1) {
    FUN_0050db20(local_e8,param_5,iVar10,iVar7,0,0,param_12,param_13,param_15,param_16);
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    FUN_005a6440(local_e8,local_e8,&local_f8,(float)fVar11,(float)fVar12);
    iVar7 = FUN_0050c470(param_5,iVar10,iVar7,local_8c,1,param_15,param_16);
    uVar3 = uStack_94;
    uVar6 = local_98;
    if (iVar7 == -1) {
      return 0;
    }
    if ((*(byte *)(param_5 + 4) & 4) != 0) {
      return 0;
    }
    FUN_005a6120(local_e8,local_e8,-(double)CONCAT44(uStack_94,local_98),0);
    fVar11 = (float10)FUN_005a5f80(local_e8);
    local_114 = (float)fVar11;
    fVar11 = (float10)FUN_005a5ff0(local_e8);
    if ((float10)local_114 <= fVar11) {
      local_114 = (float)fVar11;
    }
    FUN_005a6120(local_e8,local_e8,uVar6,uVar3,0);
    FUN_005a6090(local_e8,local_40 * local_114,local_3c * local_114);
    FUN_005a6440(local_e8,local_e8,local_a8,local_38,local_34);
    if (_DAT_00610f20 != local_30) {
      FUN_005a6120(local_e8,local_e8,(double)local_30,0);
    }
    local_108 = ftol();
    local_114 = 1.4013e-45;
    if (param_3 == (undefined4 *)0x0) goto LAB_00522882;
    iVar7 = 0x21;
    puVar5 = local_8c;
  }
  else {
    if (param_14 != 2) {
      return 0;
    }
    FUN_0050db20(local_e8,param_5,iVar10,iVar7,0,0,param_12,param_13,param_15,param_16);
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    FUN_005a6440(local_e8,local_e8,&local_f8,(float)fVar11,(float)fVar12);
    iVar7 = FUN_0050c470(param_5,iVar10,iVar7,local_8c,2,param_15,param_16);
    uVar3 = uStack_94;
    uVar6 = local_98;
    if (iVar7 == -1) {
      return 0;
    }
    if ((*(byte *)(param_5 + 4) & 8) != 0) {
      return 0;
    }
    FUN_005a6120(local_e8,local_e8,-(double)CONCAT44(uStack_94,local_98),0);
    fVar11 = (float10)FUN_005a5f80(local_e8);
    local_114 = (float)fVar11;
    fVar11 = (float10)FUN_005a5ff0(local_e8);
    if ((float10)local_114 <= fVar11) {
      local_114 = (float)fVar11;
    }
    FUN_005a6120(local_e8,local_e8,uVar6,uVar3,0);
    FUN_005a6090(local_e8,local_74[0] * local_114,local_74[1] * local_114);
    FUN_005a6440(local_e8,local_e8,local_a8,local_74[2],local_74[3]);
    if (_DAT_00610f20 != local_64) {
      FUN_005a6120(local_e8,local_e8,(double)local_64,0);
    }
    local_108 = ftol();
    local_114 = 1.4013e-45;
    if (param_3 == (undefined4 *)0x0) goto LAB_00522882;
    iVar7 = 0x21;
    puVar5 = local_8c;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
LAB_00522882:
  if (param_2 != 0) {
    puVar5 = (undefined4 *)(param_2 + 8);
    local_110 = 5;
    pfVar8 = local_e8 + 1;
    do {
      uVar6 = *(undefined4 *)(((int)local_e8 - param_2) + (int)puVar5);
      puVar5[-2] = pfVar8[-1];
      puVar5[-1] = *pfVar8;
      *puVar5 = uVar6;
      puVar5[1] = *(undefined4 *)((int)local_e8 + (4 - param_2) + (int)puVar5);
      puVar5 = puVar5 + 4;
      local_110 = local_110 + -1;
      pfVar8 = pfVar8 + 4;
    } while (local_110 != 0);
    *(undefined4 *)(param_2 + 0x50) = local_98;
    *(undefined4 *)(param_2 + 0x54) = uStack_94;
    *(undefined4 *)(param_2 + 0x58) = local_90;
  }
  FUN_005a61e0(local_e8,param_2);
  fVar1 = (float)local_108;
  if (param_10 == 1) {
    floor((double)((local_e8[0] - fVar1) + _DAT_0061a460));
    uVar6 = ftol();
    fVar2 = (local_e8[1] - fVar1) + _DAT_0061a460;
    *param_1 = uVar6;
    floor((double)fVar2);
    uVar6 = ftol();
    param_1[1] = uVar6;
    floor((double)(fVar1 + local_c8 + _DAT_0061a460));
    uVar6 = ftol();
    param_1[2] = uVar6;
    floor((double)(fVar1 + local_c4 + _DAT_0061a460));
    uVar6 = ftol();
  }
  else {
    uVar6 = ftol();
    *param_1 = uVar6;
    uVar6 = ftol();
    param_1[1] = uVar6;
    uVar6 = ftol();
    param_1[2] = uVar6;
    uVar6 = ftol();
  }
  param_1[3] = uVar6;
  if (param_4 != (int *)0x0) {
    *param_4 = local_108;
  }
  return (int)local_114;
}


