/* Module: vegas30k.dll
   Function: FUN_0105ecd0
   Address: 0105ecd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0105ecd0(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,int *param_6,
                 int param_7,double *param_8)

{
  double dVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  float *pfVar9;
  double *pdVar10;
  int iVar11;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  
  iVar6 = *param_5;
  pdVar5 = (double *)*param_4;
  iVar11 = *param_6;
  if (param_7 == 1) {
    for (; iVar11 < param_3; iVar11 = iVar11 + 0x4000) {
      if (iVar6 < 1) goto LAB_0105ed55;
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
    for (; iVar11 < param_3; iVar11 = iVar11 + 0x4000) {
      if (iVar6 < 1) goto LAB_0105ed55;
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
    for (; iVar11 < param_3; iVar11 = iVar11 + 0x4000) {
      if (iVar6 < 1) goto LAB_0105ed55;
      if (param_7 != 0) {
        local_110 = param_7;
        pdVar7 = pdVar5;
        pdVar10 = param_8;
        do {
          if (*pdVar7 < *pdVar10) {
            *(undefined4 *)pdVar10 = *(undefined4 *)pdVar7;
            *(undefined4 *)((int)pdVar10 + 4) = *(undefined4 *)((int)pdVar7 + 4);
          }
          if (pdVar10[1] < *pdVar7) {
            *(undefined4 *)(pdVar10 + 1) = *(undefined4 *)pdVar7;
            *(undefined4 *)((int)pdVar10 + 0xc) = *(undefined4 *)((int)pdVar7 + 4);
          }
          pdVar7 = pdVar7 + 1;
          pdVar10 = pdVar10 + 2;
          local_110 = local_110 + -1;
        } while (local_110 != 0);
      }
      iVar6 = iVar6 + -1;
      pdVar5 = pdVar5 + param_7;
    }
    if (param_7 != 0) {
      local_110 = param_7;
      iVar8 = 0;
      do {
        iVar4 = iVar8 + param_7 * -8;
        uVar2 = *(undefined4 *)(iVar4 + 4 + (int)pdVar5);
        *(undefined4 *)((int)&local_108 + iVar8) = *(undefined4 *)(iVar4 + (int)pdVar5);
        *(undefined4 *)((int)&local_108 + iVar8 + 4) = uVar2;
        local_110 = local_110 + -1;
        iVar8 = iVar8 + 8;
      } while (local_110 != 0);
    }
  }
  iVar11 = iVar11 - param_3;
  bVar3 = true;
LAB_0105eebb:
  *param_6 = iVar11;
  *param_4 = pdVar5;
  *param_5 = iVar6;
  if ((bVar3) && (0 < param_7)) {
    pdVar5 = (double *)&local_108;
    pfVar9 = (float *)(param_1 + param_2 * 8);
    do {
      *pfVar9 = (float)*param_8;
      pfVar9[1] = (float)param_8[1];
      dVar1 = *pdVar5;
      pfVar9 = pfVar9 + 2;
      pdVar5 = pdVar5 + 1;
      param_8[1] = dVar1;
      *param_8 = dVar1;
      param_8 = param_8 + 2;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
LAB_0105ed55:
  bVar3 = false;
  goto LAB_0105eebb;
}


