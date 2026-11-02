/* Module: sfppack2.dll
   Function: FUN_5cce7ca0
   Address: 5cce7ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cce7ca0(short *param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6
                 )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_1c;
  undefined8 local_18;
  double local_10;
  
  if (param_6 != 0) {
    local_1c = param_6;
    do {
      local_10 = (double)(int)*param_1;
      uVar6 = 0;
      pdVar4 = (double *)(param_4 + 0x20);
      dVar3 = local_10;
      do {
        if (*(int *)(pdVar4 + -4) == 0) break;
        dVar1 = pdVar4[-3];
        dVar2 = dVar1 * pdVar4[-1] + (dVar3 * pdVar4[1] - *pdVar4 * pdVar4[-2]);
        local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar7 = local_18._4_4_ & 0x7ff00000;
        dVar3 = (dVar2 - dVar1) * pdVar4[2] + dVar3;
        local_18 = dVar2;
        if (uVar7 < 0x3df00000) {
          local_18 = 0.0;
        }
        pdVar4[-2] = dVar1;
        *(int *)(pdVar4 + -3) = (int)local_18;
        *(uint *)((int)pdVar4 + -0x14) = local_18._4_4_;
        uVar6 = uVar6 + 1;
        pdVar4 = pdVar4 + 7;
      } while (uVar6 < 4);
      local_18 = dVar3;
      if (*param_5 != 0) {
        dVar1 = (dVar3 * *(double *)(param_5 + 10) +
                *(double *)(param_5 + 6) * *(double *)(param_5 + 2)) -
                *(double *)(param_5 + 8) * *(double *)(param_5 + 4);
        local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        if (*param_5 == 1) {
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_18;
          dVar3 = dVar3 * *(double *)(param_5 + 0xe) + local_18 * *(double *)(param_5 + 0x10);
          param_5[5] = param_5[3];
          param_5[3] = local_18._4_4_;
          dVar1 = (*(double *)(param_5 + 0x16) * *(double *)(param_5 + 0x12) +
                  dVar3 * *(double *)(param_5 + 0x1a)) -
                  *(double *)(param_5 + 0x18) * *(double *)(param_5 + 0x14);
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
          dVar1 = local_18;
        }
        else {
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_18;
          param_5[5] = param_5[3];
          param_5[3] = local_18._4_4_;
          dVar3 = dVar3 * *(double *)(param_5 + 0xe) +
                  (dVar3 - local_18) * *(double *)(param_5 + 0x10);
          dVar1 = (dVar3 * *(double *)(param_5 + 0x1a) +
                  *(double *)(param_5 + 0x16) * *(double *)(param_5 + 0x12)) -
                  *(double *)(param_5 + 0x18) * *(double *)(param_5 + 0x14);
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          dVar1 = dVar3 - local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
        }
        local_18 = dVar3 * *(double *)(param_5 + 0x1e) + dVar1 * *(double *)(param_5 + 0x20);
      }
      dVar3 = local_18;
      if (param_5[0x22] != 0) {
        if (param_5[0x22] == 1) {
          dVar1 = (local_18 * *(double *)(param_5 + 0x2e) +
                  *(double *)(param_5 + 0x28) * *(double *)(param_5 + 0x24)) -
                  *(double *)(param_5 + 0x2a) * *(double *)(param_5 + 0x26);
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar1 = *(double *)(param_5 + 0x26);
          dVar2 = *(double *)(param_5 + 0x24);
          param_5[0x26] = param_5[0x24];
          param_5[0x24] = (int)local_18;
          param_5[0x27] = param_5[0x25];
          param_5[0x25] = local_18._4_4_;
          dVar3 = (*(double *)(param_5 + 0x38) * *(double *)(param_5 + 0x34) +
                  (dVar3 * *(double *)(param_5 + 0x30) +
                  ((local_18 + dVar1) - (dVar2 + dVar2)) * *(double *)(param_5 + 0x32)) *
                  *(double *)(param_5 + 0x3e)) -
                  *(double *)(param_5 + 0x3a) * *(double *)(param_5 + 0x36);
          local_18._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar3;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x36] = param_5[0x34];
          param_5[0x34] = (int)local_18;
          param_5[0x37] = param_5[0x35];
          param_5[0x35] = local_18._4_4_;
        }
        else {
          FUN_5cce7940((double *)&local_18,(double *)(param_5 + 0x24));
          FUN_5cce7940((double *)&local_18,(double *)(param_5 + 0x34));
        }
      }
      iVar5 = ftol();
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      else if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      *param_1 = (short)iVar5;
      local_1c = local_1c + -1;
      param_1 = param_1 + param_2;
    } while (local_1c != 0);
  }
  return;
}


