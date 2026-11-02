/* Module: sfppack2.dll
   Function: FUN_5cce76f0
   Address: 5cce76f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cce76f0(byte *param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  
  if (param_6 != 0) {
    local_24 = param_6;
    do {
      uVar6 = 0;
      local_10 = (double)(int)(char)(*param_1 ^ 0x80) * _DAT_5cd51738;
      pdVar4 = (double *)(param_4 + 0x20);
      local_18 = local_10;
      do {
        if (*(int *)(pdVar4 + -4) == 0) break;
        dVar1 = pdVar4[-3];
        dVar2 = dVar1 * pdVar4[-1] + (local_18 * pdVar4[1] - *pdVar4 * pdVar4[-2]);
        local_20._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar7 = local_20._4_4_ & 0x7ff00000;
        local_18 = (dVar2 - dVar1) * pdVar4[2] + local_18;
        local_20 = dVar2;
        if (uVar7 < 0x3df00000) {
          local_20 = 0.0;
        }
        pdVar4[-2] = dVar1;
        *(int *)(pdVar4 + -3) = (int)local_20;
        *(uint *)((int)pdVar4 + -0x14) = local_20._4_4_;
        uVar6 = uVar6 + 1;
        pdVar4 = pdVar4 + 7;
      } while (uVar6 < 4);
      if (*param_5 != 0) {
        if (*param_5 == 1) {
          dVar1 = (local_18 * *(double *)(param_5 + 10) +
                  *(double *)(param_5 + 6) * *(double *)(param_5 + 2)) -
                  *(double *)(param_5 + 8) * *(double *)(param_5 + 4);
          local_20._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar6 = local_20._4_4_ & 0x7ff00000;
          local_20 = dVar1;
          if (uVar6 < 0x3df00000) {
            local_20 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_20;
          dVar1 = local_18 * *(double *)(param_5 + 0xe) + local_20 * *(double *)(param_5 + 0x10);
          param_5[5] = param_5[3];
          param_5[3] = local_20._4_4_;
          dVar2 = (*(double *)(param_5 + 0x16) * *(double *)(param_5 + 0x12) +
                  dVar1 * *(double *)(param_5 + 0x1a)) -
                  *(double *)(param_5 + 0x18) * *(double *)(param_5 + 0x14);
          local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar6 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar2;
          if (uVar6 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
          local_18 = dVar1 * *(double *)(param_5 + 0x1e) + local_18 * *(double *)(param_5 + 0x20);
        }
        else {
          FUN_5cce79c0((double *)&local_18,(double *)(param_5 + 2));
          FUN_5cce79c0((double *)&local_18,(double *)(param_5 + 0x12));
        }
      }
      if (param_5[0x22] != 0) {
        if (param_5[0x22] == 1) {
          FUN_5cce7940((double *)&local_18,(double *)(param_5 + 0x24));
        }
        else {
          FUN_5cce7940((double *)&local_18,(double *)(param_5 + 0x24));
        }
        FUN_5cce7940((double *)&local_18,(double *)(param_5 + 0x34));
      }
      iVar5 = ftol();
      if (iVar5 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar5 < 0x80) {
        bVar3 = (byte)iVar5 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      *param_1 = bVar3;
      param_1 = param_1 + param_2;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


