/* Module: sfxpfx2.dll
   Function: FUN_5c8a3e50
   Address: 5c8a3e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5c8a3e92) */

void FUN_5c8a3e50(double *param_1,int param_2,double *param_3,int param_4,int *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_6 != 0) {
    local_1c = param_6;
    do {
      local_10 = *(undefined4 *)param_1;
      uStack_c = *(undefined4 *)((int)param_1 + 4);
      dVar3 = *param_1;
      if (*(int *)param_4 != 0) {
        dVar1 = *(double *)(param_4 + 8);
        dVar2 = dVar1 * *(double *)(param_4 + 0x18) +
                (dVar3 * *(double *)(param_4 + 0x28) -
                *(double *)(param_4 + 0x20) * *(double *)(param_4 + 0x10));
        local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar4 = local_18._4_4_ & 0x7ff00000;
        dVar3 = (dVar2 - dVar1) * *(double *)(param_4 + 0x30) + dVar3;
        local_18 = dVar2;
        if (uVar4 < 0x3df00000) {
          local_18 = 0.0;
        }
        *(double *)(param_4 + 0x10) = dVar1;
        *(int *)(param_4 + 8) = (int)local_18;
        *(uint *)(param_4 + 0xc) = local_18._4_4_;
      }
      local_18 = dVar3;
      if (*param_5 != 0) {
        dVar1 = (dVar3 * *(double *)(param_5 + 10) +
                *(double *)(param_5 + 6) * *(double *)(param_5 + 2)) -
                *(double *)(param_5 + 8) * *(double *)(param_5 + 4);
        local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        if (*param_5 == 1) {
          uVar4 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar4 < 0x3df00000) {
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
          uVar4 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar4 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
          dVar1 = local_18;
        }
        else {
          uVar4 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar4 < 0x3df00000) {
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
          uVar4 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar4 < 0x3df00000) {
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
          uVar4 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar4 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar1 = *(double *)(param_5 + 0x26);
          dVar2 = *(double *)(param_5 + 0x24);
          param_5[0x26] = param_5[0x24];
          param_5[0x24] = (int)local_18;
          param_5[0x27] = param_5[0x25];
          param_5[0x25] = local_18._4_4_;
          dVar3 = dVar3 * *(double *)(param_5 + 0x30) +
                  ((local_18 + dVar1) - (dVar2 + dVar2)) * *(double *)(param_5 + 0x32);
          dVar1 = (*(double *)(param_5 + 0x38) * *(double *)(param_5 + 0x34) +
                  dVar3 * *(double *)(param_5 + 0x3e)) -
                  *(double *)(param_5 + 0x3a) * *(double *)(param_5 + 0x36);
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar4 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar4 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar1 = *(double *)(param_5 + 0x36);
          dVar2 = *(double *)(param_5 + 0x34);
          param_5[0x36] = param_5[0x34];
          param_5[0x34] = (int)local_18;
          param_5[0x37] = param_5[0x35];
          param_5[0x35] = local_18._4_4_;
          local_18 = dVar3 * *(double *)(param_5 + 0x40) +
                     ((local_18 + dVar1) - (dVar2 + dVar2)) * *(double *)(param_5 + 0x42);
        }
        else {
          FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x24));
          FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x34));
        }
      }
      local_1c = local_1c + -1;
      *param_1 = (double)CONCAT44(uStack_c,local_10) * param_3[1] + local_18 * *param_3;
      param_1 = param_1 + param_2;
    } while (local_1c != 0);
  }
  return;
}


