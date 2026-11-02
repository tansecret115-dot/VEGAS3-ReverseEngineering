/* Module: vegas30.exe
   Function: FUN_0050db20
   Address: 0050db20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050dbe6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050db20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,double param_7,double param_8)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  int local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  int *local_100;
  undefined4 uStack_fc;
  double local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [32];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_ac;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_78;
  undefined4 local_64 [20];
  double local_14;
  
  iVar5 = 0;
  local_100 = (int *)FUN_00522a00(0);
  if ((param_1 != (undefined4 *)0x0) && (local_100 != (int *)0x0)) {
    local_f0 = *local_100;
    if (local_f0 == 0) {
      puVar4 = (undefined4 *)(param_2 + 0x24);
    }
    else {
      iVar3 = 0;
      local_118 = 0;
      if (0 < local_f0) {
        local_ec = local_100[1];
        fVar7 = (float10)param_8;
        iVar2 = local_100[2];
        do {
          iVar3 = iVar2;
          lVar9 = *(longlong *)(iVar3 + 4);
          local_f8 = *(double *)(iVar3 + 4);
          if (fVar7 != (float10)_DAT_00610fd8) {
            uVar8 = ftol();
            local_110 = uVar8;
            lVar9 = ftol();
            fVar7 = extraout_ST0;
          }
          if (CONCAT44(param_4,param_3) <= lVar9) {
            if (local_118 == 0) {
              puVar4 = (undefined4 *)(iVar3 + 0x18);
              goto LAB_0050dc0f;
            }
            FUN_005a69e0(param_1,0,0,0,&LAB_0050af90,&LAB_0050afa0,&LAB_0050afe0,local_100,param_3,
                         param_4);
            goto LAB_0050dc1b;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar3 + local_ec;
          local_118 = iVar3;
        } while (iVar5 < local_f0);
      }
      puVar4 = (undefined4 *)(iVar3 + 0x18);
    }
LAB_0050dc0f:
    puVar6 = param_1;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
LAB_0050dc1b:
  pdVar1 = (double *)(param_1 + 0x14);
  local_100 = *(int **)pdVar1;
  uStack_fc = param_1[0x15];
  if (_DAT_00610fd8 != *pdVar1) {
    if (_DAT_00610fd8 == param_7) {
      if (((*(int *)(param_2 + 0x80) == 0) && (*(int *)(param_2 + 0x84) == 0x3ff00000)) ||
         (_DAT_00610fd8 == *(double *)(param_2 + 0x80))) goto LAB_0050de28;
      local_110._0_4_ = param_1[0x10];
      local_110._4_4_ = param_1[0x11];
      local_108 = param_1[0x12];
      local_104 = param_1[0x13];
      FUN_005a6120(param_1,param_1,-*pdVar1,&local_110);
      if ((param_6 == 0) && ((*(uint *)(param_2 + 4) & 0x1000) != 0)) {
        fVar10 = (float)((float10)_DAT_006106d0 / (float10)*(double *)(param_2 + 0x80));
        uVar8 = CONCAT44(0x3f800000,&local_110);
      }
      else {
        fVar10 = 1.0;
        uVar8 = CONCAT44((float)*(double *)(param_2 + 0x80),&local_110);
      }
      FUN_005a6440(param_1,param_1,uVar8,fVar10);
      FUN_005a6120(param_1,param_1,local_100,uStack_fc,&local_110);
      if ((param_6 == 0) && ((*(uint *)(param_2 + 4) & 0x1000) != 0)) {
        fVar10 = (float)*(double *)(param_2 + 0x80);
        uVar8 = CONCAT44(0x3f800000,&local_110);
      }
      else {
        fVar10 = 1.0;
        uVar8 = CONCAT44((float)((float10)_DAT_006106d0 / (float10)*(double *)(param_2 + 0x80)),
                         &local_110);
      }
    }
    else {
      local_110._0_4_ = param_1[0x10];
      local_110._4_4_ = param_1[0x11];
      local_108 = param_1[0x12];
      local_104 = param_1[0x13];
      FUN_005a6120(param_1,param_1,-*pdVar1,&local_110);
      if (_DAT_006106d0 != param_7) {
        FUN_005a6440(param_1,param_1,&local_110,(float)param_7,0x3f800000);
      }
      FUN_005a6120(param_1,param_1,local_100,uStack_fc,&local_110);
      fVar10 = 1.0;
      uVar8 = CONCAT44((float)((float10)_DAT_006106d0 / (float10)param_7),&local_110);
    }
    FUN_005a6440(param_1,param_1,uVar8,fVar10);
  }
LAB_0050de28:
  if (param_5 == 1) {
    iVar5 = FUN_0050c470(param_2,*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),
                         local_e8,1,0,0);
    if (iVar5 == -1) {
      return;
    }
    puVar4 = param_1;
    puVar6 = local_64;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_005a6120(local_64,local_64,-local_14,0);
    FUN_005a5f80(local_64);
    FUN_005a5ff0(local_64);
    fVar7 = (float10)_CIpow();
    local_f8 = (double)fVar7;
    lVar9 = ftol();
    fVar10 = (float)((float10)lVar9 / (float10)local_f8);
    local_110 = lVar9;
    lVar9 = ftol(fVar10);
    local_110 = lVar9;
    FUN_005a6090(param_1,(float)((float10)lVar9 / extraout_ST0_01),fVar10);
    FUN_005a6440(param_1,param_1,param_1 + 0x10,fStack_94 + fStack_78,fStack_78 + fStack_90);
    if (_DAT_00610f20 == fStack_8c) {
      return;
    }
  }
  else {
    if (param_5 != 2) {
      return;
    }
    iVar5 = FUN_0050c470(param_2,*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),
                         local_e8,2,0,0);
    if (iVar5 == -1) {
      return;
    }
    puVar4 = param_1;
    puVar6 = local_64;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_005a6120(local_64,local_64,-local_14,0);
    FUN_005a5f80(local_64);
    FUN_005a5ff0(local_64);
    fVar7 = (float10)_CIpow();
    local_f8 = (double)fVar7;
    lVar9 = ftol();
    fVar10 = (float)((float10)lVar9 / (float10)local_f8);
    local_110 = lVar9;
    lVar9 = ftol(fVar10);
    local_110 = lVar9;
    FUN_005a6090(param_1,(float)((float10)lVar9 / extraout_ST0_00),fVar10);
    FUN_005a6440(param_1,param_1,param_1 + 0x10,fStack_c8 + fStack_ac,fStack_ac + fStack_c4);
    fStack_8c = fStack_c0;
    if (_DAT_00610f20 == fStack_c0) {
      return;
    }
  }
  FUN_005a6120(param_1,param_1,(double)fStack_8c,0);
  return;
}


