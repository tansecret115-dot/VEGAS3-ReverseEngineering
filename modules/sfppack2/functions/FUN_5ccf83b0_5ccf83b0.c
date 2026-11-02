/* Module: sfppack2.dll
   Function: FUN_5ccf83b0
   Address: 5ccf83b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccf83b0(int param_1,int *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar6 = *param_2;
  local_18 = 0.0;
  pfVar9 = *(float **)(param_2[1] + 0x18);
  local_20 = 0.0;
  local_30 = 0;
  if (0 < *(int *)(iVar6 + 0x14)) {
    iVar10 = *(int *)(iVar6 + 0x18) - (int)pfVar9;
    iVar7 = param_1 * 0x1c0;
    do {
      iVar5 = *(int *)(iVar7 + 0x184 + iVar6);
      local_28 = (double)*(float *)(iVar10 + (int)pfVar9);
      dVar4 = (double)*pfVar9;
      if (iVar5 == 0) {
        dVar2 = (local_28 * *(double *)(iVar7 + 0xe8 + iVar6) +
                *(double *)(iVar7 + 0xd8 + iVar6) * *(double *)(iVar7 + 200 + iVar6)) -
                *(double *)(iVar7 + 0xe0 + iVar6) * *(double *)(iVar7 + 0xd0 + iVar6);
        local_28._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar8 = local_28._4_4_ & 0x7ff00000;
        local_28 = dVar2;
        if (uVar8 < 0x3df00000) {
          local_28 = 0.0;
        }
        *(undefined4 *)(iVar7 + 0xd0 + iVar6) = *(undefined4 *)(iVar7 + 200 + iVar6);
        *(double *)(iVar7 + 200 + iVar6) = local_28;
        *(undefined4 *)(iVar7 + 0xd4 + iVar6) = *(undefined4 *)(iVar7 + 0xcc + iVar6);
        iVar6 = param_2[1];
        pdVar1 = (double *)(iVar7 + 200 + iVar6);
        dVar4 = (*(double *)(iVar7 + 0xd8 + iVar6) * *(double *)(iVar7 + 200 + iVar6) +
                dVar4 * *(double *)(iVar7 + 0xe8 + iVar6)) - pdVar1[3] * pdVar1[1];
        local_10._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        if ((local_10._4_4_ & 0x7ff00000) < 0x3df00000) {
          local_10 = 0.0;
          dVar4 = local_10;
        }
        *(undefined4 *)(pdVar1 + 1) = *(undefined4 *)pdVar1;
        *pdVar1 = dVar4;
        *(undefined4 *)((int)pdVar1 + 0xc) = *(undefined4 *)((int)pdVar1 + 4);
      }
      else if (iVar5 == 1) {
        dVar2 = *(double *)(iVar7 + 0xa8 + iVar6) * *(double *)(iVar7 + 0x98 + iVar6) +
                (local_28 * *(double *)(iVar7 + 0xb8 + iVar6) -
                *(double *)(iVar7 + 0xb0 + iVar6) * *(double *)(iVar7 + 0xa0 + iVar6));
        local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar8 = local_10._4_4_ & 0x7ff00000;
        local_28 = (*(double *)(iVar7 + 0x98 + iVar6) - dVar2) * *(double *)(iVar7 + 0xc0 + iVar6);
        local_10 = dVar2;
        if (uVar8 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(undefined4 *)(iVar7 + 0xa0 + iVar6) = *(undefined4 *)(iVar7 + 0x98 + iVar6);
        *(double *)(iVar7 + 0x98 + iVar6) = local_10;
        *(undefined4 *)(iVar7 + 0xa4 + iVar6) = *(undefined4 *)(iVar7 + 0x9c + iVar6);
        iVar6 = param_2[1];
        pdVar1 = (double *)(iVar7 + 0x98 + iVar6);
        dVar2 = pdVar1[2] * *pdVar1 +
                (dVar4 * *(double *)(iVar7 + 0xb8 + iVar6) -
                *(double *)(iVar7 + 0xb0 + iVar6) * *(double *)(iVar7 + 0xa0 + iVar6));
        local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar8 = local_10._4_4_ & 0x7ff00000;
        dVar4 = (*pdVar1 - dVar2) * pdVar1[5];
        local_10 = dVar2;
        if (uVar8 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(undefined4 *)(pdVar1 + 1) = *(undefined4 *)pdVar1;
        *(undefined4 *)((int)pdVar1 + 0xc) = *(undefined4 *)((int)pdVar1 + 4);
        *(undefined4 *)pdVar1 = (undefined4)local_10;
        *(uint *)((int)pdVar1 + 4) = local_10._4_4_;
      }
      else if (iVar5 == 2) {
        dVar2 = (local_28 * *(double *)(iVar7 + 0xf0 + iVar6) +
                *(double *)(iVar7 + 0xd8 + iVar6) * *(double *)(iVar7 + 200 + iVar6)) -
                *(double *)(iVar7 + 0xe0 + iVar6) * *(double *)(iVar7 + 0xd0 + iVar6);
        local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar8 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar2;
        if (uVar8 < 0x3df00000) {
          local_10 = 0.0;
        }
        dVar2 = *(double *)(iVar7 + 0xd0 + iVar6);
        dVar3 = *(double *)(iVar7 + 200 + iVar6);
        *(undefined4 *)(iVar7 + 0xd0 + iVar6) = *(undefined4 *)(iVar7 + 200 + iVar6);
        local_28 = (local_10 + dVar2) - (dVar3 + dVar3);
        *(undefined4 *)(iVar7 + 0xd4 + iVar6) = *(undefined4 *)(iVar7 + 0xcc + iVar6);
        *(double *)(iVar7 + 200 + iVar6) = local_10;
        iVar6 = param_2[1];
        pdVar1 = (double *)(iVar7 + 200 + iVar6);
        dVar4 = (dVar4 * *(double *)(iVar7 + 0xf0 + iVar6) +
                *(double *)(iVar7 + 0xd8 + iVar6) * *(double *)(iVar7 + 200 + iVar6)) -
                pdVar1[3] * pdVar1[1];
        local_10._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        uVar8 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar4;
        if (uVar8 < 0x3df00000) {
          local_10 = 0.0;
        }
        dVar4 = pdVar1[1];
        *(undefined4 *)(pdVar1 + 1) = *(undefined4 *)pdVar1;
        *(undefined4 *)((int)pdVar1 + 0xc) = *(undefined4 *)((int)pdVar1 + 4);
        dVar4 = (local_10 + dVar4) - (*pdVar1 + *pdVar1);
        *(undefined4 *)pdVar1 = (undefined4)local_10;
        *(uint *)((int)pdVar1 + 4) = local_10._4_4_;
      }
      if (local_28 <= local_20) {
        if (local_20 < -local_28) {
          local_20 = -local_28;
        }
      }
      else {
        local_20 = local_28;
      }
      dVar2 = dVar4;
      if ((dVar4 <= local_18) && (dVar2 = local_18, local_18 < -dVar4)) {
        dVar2 = -dVar4;
      }
      local_18 = dVar2;
      iVar6 = *param_2;
      local_30 = local_30 + 1;
      pfVar9 = pfVar9 + 1;
    } while (local_30 < *(int *)(iVar6 + 0x14));
  }
  iVar6 = param_1 * 0x30 + param_3;
  *(undefined4 *)(iVar6 + 0x18) = (undefined4)local_20;
  *(undefined4 *)(iVar6 + 0x1c) = local_20._4_4_;
  *(undefined4 *)(iVar6 + 0x20) = (undefined4)local_18;
  *(undefined4 *)(iVar6 + 0x24) = local_18._4_4_;
  return 1;
}


