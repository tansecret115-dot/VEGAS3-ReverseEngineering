/* Module: vegas30k.dll
   Function: FUN_0105cb90
   Address: 0105cb90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0105cb90(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,int *param_6,
                int param_7,double *param_8)

{
  double dVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  
  iVar6 = *param_5;
  pdVar5 = (double *)*param_4;
  iVar9 = *param_6;
  if (param_7 == 1) {
    for (; iVar9 < param_3; iVar9 = iVar9 + 0x4000) {
      if (iVar6 < 1) goto LAB_0105ccc1;
      if (*pdVar5 < *param_8) {
        *(undefined4 *)param_8 = *(undefined4 *)pdVar5;
        *(undefined4 *)((int)param_8 + 4) = *(undefined4 *)((int)pdVar5 + 4);
      }
      if (param_8[1] < *pdVar5) {
        *(undefined4 *)(param_8 + 1) = *(undefined4 *)pdVar5;
        *(undefined4 *)((int)param_8 + 0xc) = *(undefined4 *)((int)pdVar5 + 4);
      }
      pdVar5 = pdVar5 + 1;
      iVar6 = iVar6 + -1;
    }
    local_108._0_4_ = *(undefined4 *)(pdVar5 + -1);
    local_108._4_4_ = *(undefined4 *)((int)pdVar5 + -4);
  }
  else if (param_7 == 2) {
    for (; iVar9 < param_3; iVar9 = iVar9 + 0x4000) {
      if (iVar6 < 1) goto LAB_0105ccc1;
      if (*pdVar5 < *param_8) {
        *(undefined4 *)param_8 = *(undefined4 *)pdVar5;
        *(undefined4 *)((int)param_8 + 4) = *(undefined4 *)((int)pdVar5 + 4);
      }
      if (param_8[1] < *pdVar5) {
        *(undefined4 *)(param_8 + 1) = *(undefined4 *)pdVar5;
        *(undefined4 *)((int)param_8 + 0xc) = *(undefined4 *)((int)pdVar5 + 4);
      }
      if (pdVar5[1] < param_8[2]) {
        *(undefined4 *)(param_8 + 2) = *(undefined4 *)(pdVar5 + 1);
        *(undefined4 *)((int)param_8 + 0x14) = *(undefined4 *)((int)pdVar5 + 0xc);
      }
      if (param_8[3] < pdVar5[1]) {
        *(undefined4 *)(param_8 + 3) = *(undefined4 *)(pdVar5 + 1);
        *(undefined4 *)((int)param_8 + 0x1c) = *(undefined4 *)((int)pdVar5 + 0xc);
      }
      pdVar5 = pdVar5 + 2;
      iVar6 = iVar6 + -1;
    }
    local_108._0_4_ = *(undefined4 *)(pdVar5 + -2);
    local_108._4_4_ = *(undefined4 *)((int)pdVar5 + -0xc);
    local_100 = *(undefined4 *)(pdVar5 + -1);
    local_fc = *(undefined4 *)((int)pdVar5 + -4);
  }
  else {
    for (; iVar9 < param_3; iVar9 = iVar9 + 0x4000) {
      if (iVar6 < 1) {
        iVar11 = 0;
        goto LAB_0105cd8d;
      }
      if (param_7 != 0) {
        local_114 = param_7;
        pdVar7 = pdVar5;
        pdVar8 = param_8;
        do {
          if (*pdVar7 < *pdVar8) {
            *(undefined4 *)pdVar8 = *(undefined4 *)pdVar7;
            *(undefined4 *)((int)pdVar8 + 4) = *(undefined4 *)((int)pdVar7 + 4);
          }
          if (pdVar8[1] < *pdVar7) {
            *(undefined4 *)(pdVar8 + 1) = *(undefined4 *)pdVar7;
            *(undefined4 *)((int)pdVar8 + 0xc) = *(undefined4 *)((int)pdVar7 + 4);
          }
          pdVar7 = pdVar7 + 1;
          pdVar8 = pdVar8 + 2;
          local_114 = local_114 + -1;
        } while (local_114 != 0);
      }
      iVar6 = iVar6 + -1;
      pdVar5 = pdVar5 + param_7;
    }
    if (param_7 != 0) {
      local_114 = param_7;
      iVar11 = 0;
      do {
        iVar4 = iVar11 + param_7 * -8;
        uVar2 = *(undefined4 *)(iVar4 + 4 + (int)pdVar5);
        *(undefined4 *)((int)&local_108 + iVar11) = *(undefined4 *)(iVar4 + (int)pdVar5);
        *(undefined4 *)((int)&local_108 + iVar11 + 4) = uVar2;
        local_114 = local_114 + -1;
        iVar11 = iVar11 + 8;
      } while (local_114 != 0);
    }
  }
  iVar11 = 1;
  iVar9 = iVar9 - param_3;
LAB_0105cd8d:
  *param_6 = iVar9;
  *param_4 = pdVar5;
  *param_5 = iVar6;
  if ((iVar11 != 0) && (0 < param_7)) {
    pdVar5 = (double *)&local_108;
    puVar10 = (undefined1 *)(param_1 + param_2 * 2);
    local_114 = param_7;
    do {
      iVar6 = ftol();
      if (iVar6 < -0x80) {
        uVar3 = 0x80;
      }
      else if (iVar6 < 0x80) {
        uVar3 = ftol();
      }
      else {
        uVar3 = 0x7f;
      }
      *puVar10 = uVar3;
      iVar6 = ftol();
      if (iVar6 < -0x80) {
        uVar3 = 0x80;
      }
      else if (iVar6 < 0x80) {
        uVar3 = ftol();
      }
      else {
        uVar3 = 0x7f;
      }
      dVar1 = *pdVar5;
      puVar10[1] = uVar3;
      param_8[1] = dVar1;
      *param_8 = dVar1;
      puVar10 = puVar10 + 2;
      pdVar5 = pdVar5 + 1;
      param_8 = param_8 + 2;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
  return iVar11;
LAB_0105ccc1:
  iVar11 = 0;
  goto LAB_0105cd8d;
}


