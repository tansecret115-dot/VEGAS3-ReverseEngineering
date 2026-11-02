/* Module: vegas30k.dll
   Function: FUN_0105dc50
   Address: 0105dc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0105dc50(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,int *param_6,
                int param_7,double *param_8)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  
  iVar5 = *param_5;
  pdVar4 = (double *)*param_4;
  iVar8 = *param_6;
  if (param_7 == 1) {
    for (; iVar8 < param_3; iVar8 = iVar8 + 0x4000) {
      if (iVar5 < 1) goto LAB_0105dd81;
      if (*pdVar4 < *param_8) {
        *(undefined4 *)param_8 = *(undefined4 *)pdVar4;
        *(undefined4 *)((int)param_8 + 4) = *(undefined4 *)((int)pdVar4 + 4);
      }
      if (param_8[1] < *pdVar4) {
        *(undefined4 *)(param_8 + 1) = *(undefined4 *)pdVar4;
        *(undefined4 *)((int)param_8 + 0xc) = *(undefined4 *)((int)pdVar4 + 4);
      }
      pdVar4 = pdVar4 + 1;
      iVar5 = iVar5 + -1;
    }
    local_108._0_4_ = *(undefined4 *)(pdVar4 + -1);
    local_108._4_4_ = *(undefined4 *)((int)pdVar4 + -4);
  }
  else if (param_7 == 2) {
    for (; iVar8 < param_3; iVar8 = iVar8 + 0x4000) {
      if (iVar5 < 1) goto LAB_0105dd81;
      if (*pdVar4 < *param_8) {
        *(undefined4 *)param_8 = *(undefined4 *)pdVar4;
        *(undefined4 *)((int)param_8 + 4) = *(undefined4 *)((int)pdVar4 + 4);
      }
      if (param_8[1] < *pdVar4) {
        *(undefined4 *)(param_8 + 1) = *(undefined4 *)pdVar4;
        *(undefined4 *)((int)param_8 + 0xc) = *(undefined4 *)((int)pdVar4 + 4);
      }
      if (pdVar4[1] < param_8[2]) {
        *(undefined4 *)(param_8 + 2) = *(undefined4 *)(pdVar4 + 1);
        *(undefined4 *)((int)param_8 + 0x14) = *(undefined4 *)((int)pdVar4 + 0xc);
      }
      if (param_8[3] < pdVar4[1]) {
        *(undefined4 *)(param_8 + 3) = *(undefined4 *)(pdVar4 + 1);
        *(undefined4 *)((int)param_8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0xc);
      }
      pdVar4 = pdVar4 + 2;
      iVar5 = iVar5 + -1;
    }
    local_108._0_4_ = *(undefined4 *)(pdVar4 + -2);
    local_108._4_4_ = *(undefined4 *)((int)pdVar4 + -0xc);
    local_100 = *(undefined4 *)(pdVar4 + -1);
    local_fc = *(undefined4 *)((int)pdVar4 + -4);
  }
  else {
    for (; iVar8 < param_3; iVar8 = iVar8 + 0x4000) {
      if (iVar5 < 1) {
        iVar10 = 0;
        goto LAB_0105de4d;
      }
      if (param_7 != 0) {
        local_10c = param_7;
        pdVar6 = pdVar4;
        pdVar7 = param_8;
        do {
          if (*pdVar6 < *pdVar7) {
            *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
            *(undefined4 *)((int)pdVar7 + 4) = *(undefined4 *)((int)pdVar6 + 4);
          }
          if (pdVar7[1] < *pdVar6) {
            *(undefined4 *)(pdVar7 + 1) = *(undefined4 *)pdVar6;
            *(undefined4 *)((int)pdVar7 + 0xc) = *(undefined4 *)((int)pdVar6 + 4);
          }
          pdVar6 = pdVar6 + 1;
          pdVar7 = pdVar7 + 2;
          local_10c = local_10c + -1;
        } while (local_10c != 0);
      }
      iVar5 = iVar5 + -1;
      pdVar4 = pdVar4 + param_7;
    }
    if (param_7 != 0) {
      local_10c = param_7;
      iVar10 = 0;
      do {
        iVar3 = iVar10 + param_7 * -8;
        uVar2 = *(undefined4 *)(iVar3 + 4 + (int)pdVar4);
        *(undefined4 *)((int)&local_108 + iVar10) = *(undefined4 *)(iVar3 + (int)pdVar4);
        *(undefined4 *)((int)&local_108 + iVar10 + 4) = uVar2;
        local_10c = local_10c + -1;
        iVar10 = iVar10 + 8;
      } while (local_10c != 0);
    }
  }
  iVar10 = 1;
  iVar8 = iVar8 - param_3;
LAB_0105de4d:
  *param_6 = iVar8;
  *param_4 = pdVar4;
  *param_5 = iVar5;
  if ((iVar10 != 0) && (0 < param_7)) {
    pdVar4 = (double *)&local_108;
    puVar9 = (undefined2 *)(param_1 + param_2 * 4);
    local_10c = param_7;
    do {
      iVar5 = ftol();
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      else if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      *puVar9 = (short)iVar5;
      iVar5 = ftol();
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      else if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      dVar1 = *pdVar4;
      puVar9[1] = (short)iVar5;
      param_8[1] = dVar1;
      *param_8 = dVar1;
      puVar9 = puVar9 + 2;
      pdVar4 = pdVar4 + 1;
      param_8 = param_8 + 2;
      local_10c = local_10c + -1;
    } while (local_10c != 0);
  }
  return iVar10;
LAB_0105dd81:
  iVar10 = 0;
  goto LAB_0105de4d;
}


