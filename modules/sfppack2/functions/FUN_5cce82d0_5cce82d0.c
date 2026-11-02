/* Module: sfppack2.dll
   Function: FUN_5cce82d0
   Address: 5cce82d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cce82d0(int *param_1,int param_2,double *param_3,int param_4,int *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_24;
  double local_20;
  undefined8 local_18;
  double local_10;
  
  if (param_6 != 0) {
    local_24 = param_6;
    do {
      local_10 = (double)*param_1 * _DAT_5cd51ce8;
      uVar5 = 0;
      pdVar3 = (double *)(param_4 + 0x20);
      local_20 = local_10;
      do {
        if (*(int *)(pdVar3 + -4) == 0) break;
        dVar1 = pdVar3[-3];
        dVar2 = dVar1 * pdVar3[-1] + (local_20 * pdVar3[1] - *pdVar3 * pdVar3[-2]);
        local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar6 = local_18._4_4_ & 0x7ff00000;
        local_20 = (dVar2 - dVar1) * pdVar3[2] + local_20;
        local_18 = dVar2;
        if (uVar6 < 0x3df00000) {
          local_18 = 0.0;
        }
        pdVar3[-2] = dVar1;
        *(int *)(pdVar3 + -3) = (int)local_18;
        *(uint *)((int)pdVar3 + -0x14) = local_18._4_4_;
        uVar5 = uVar5 + 1;
        pdVar3 = pdVar3 + 7;
      } while (uVar5 < 4);
      if (*param_5 != 0) {
        if (*param_5 == 1) {
          dVar1 = (local_20 * *(double *)(param_5 + 10) +
                  *(double *)(param_5 + 6) * *(double *)(param_5 + 2)) -
                  *(double *)(param_5 + 8) * *(double *)(param_5 + 4);
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar5 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar5 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_18;
          dVar1 = local_20 * *(double *)(param_5 + 0xe) + local_18 * *(double *)(param_5 + 0x10);
          param_5[5] = param_5[3];
          param_5[3] = local_18._4_4_;
          dVar2 = (*(double *)(param_5 + 0x16) * *(double *)(param_5 + 0x12) +
                  dVar1 * *(double *)(param_5 + 0x1a)) -
                  *(double *)(param_5 + 0x18) * *(double *)(param_5 + 0x14);
          local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar5 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar2;
          if (uVar5 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          local_20 = dVar1 * *(double *)(param_5 + 0x1e) + local_18 * *(double *)(param_5 + 0x20);
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
        }
        else {
          FUN_5cce79c0(&local_20,(double *)(param_5 + 2));
          FUN_5cce79c0(&local_20,(double *)(param_5 + 0x12));
        }
      }
      if (param_5[0x22] != 0) {
        if (param_5[0x22] == 1) {
          FUN_5cce7940(&local_20,(double *)(param_5 + 0x24));
        }
        else {
          FUN_5cce7940(&local_20,(double *)(param_5 + 0x24));
        }
        FUN_5cce7940(&local_20,(double *)(param_5 + 0x34));
      }
      local_10 = (local_10 * param_3[1] + local_20 * *param_3) * _DAT_5cd51758;
      if (_DAT_5cd51750 <= local_10) {
        if (local_10 <= _DAT_5cd51748) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      *param_1 = iVar4;
      local_24 = local_24 + -1;
      param_1 = param_1 + param_2;
    } while (local_24 != 0);
  }
  return;
}


