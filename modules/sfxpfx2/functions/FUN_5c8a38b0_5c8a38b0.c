/* Module: sfxpfx2.dll
   Function: FUN_5c8a38b0
   Address: 5c8a38b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5c8a38e7) */

void FUN_5c8a38b0(float *param_1,int param_2,double *param_3,int param_4,int *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_1c;
  undefined8 local_18;
  double local_10;
  
  if (param_6 != 0) {
    local_1c = param_6;
    do {
      fVar4 = (float10)*param_1;
      local_10 = (double)*param_1;
      if (*(int *)param_4 != 0) {
        fVar5 = (float10)*(double *)(param_4 + 8);
        fVar6 = fVar5 * (float10)*(double *)(param_4 + 0x18) +
                (fVar4 * (float10)*(double *)(param_4 + 0x28) -
                (float10)*(double *)(param_4 + 0x20) * (float10)*(double *)(param_4 + 0x10));
        dVar1 = (double)fVar6;
        local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        uVar3 = local_18._4_4_ & 0x7ff00000;
        fVar4 = (fVar6 - fVar5) * (float10)*(double *)(param_4 + 0x30) + fVar4;
        local_18 = dVar1;
        if (uVar3 < 0x3df00000) {
          local_18 = 0.0;
        }
        *(double *)(param_4 + 0x10) = *(double *)(param_4 + 8);
        *(int *)(param_4 + 8) = (int)local_18;
        *(uint *)(param_4 + 0xc) = local_18._4_4_;
      }
      if (*param_5 != 0) {
        fVar5 = (fVar4 * (float10)*(double *)(param_5 + 10) +
                (float10)*(double *)(param_5 + 6) * (float10)*(double *)(param_5 + 2)) -
                (float10)*(double *)(param_5 + 8) * (float10)*(double *)(param_5 + 4);
        if (*param_5 == 1) {
          dVar1 = (double)fVar5;
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar3 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar3 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_18;
          fVar4 = fVar4 * (float10)*(double *)(param_5 + 0xe) +
                  (float10)local_18 * (float10)*(double *)(param_5 + 0x10);
          param_5[5] = param_5[3];
          param_5[3] = local_18._4_4_;
          dVar1 = (double)(((float10)*(double *)(param_5 + 0x16) *
                            (float10)*(double *)(param_5 + 0x12) +
                           fVar4 * (float10)*(double *)(param_5 + 0x1a)) -
                          (float10)*(double *)(param_5 + 0x18) *
                          (float10)*(double *)(param_5 + 0x14));
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar3 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar3 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          fVar5 = (float10)local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
        }
        else {
          dVar1 = (double)fVar5;
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar3 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar3 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_18;
          param_5[5] = param_5[3];
          param_5[3] = local_18._4_4_;
          fVar4 = fVar4 * (float10)*(double *)(param_5 + 0xe) +
                  (fVar4 - (float10)local_18) * (float10)*(double *)(param_5 + 0x10);
          dVar1 = (double)((fVar4 * (float10)*(double *)(param_5 + 0x1a) +
                           (float10)*(double *)(param_5 + 0x16) *
                           (float10)*(double *)(param_5 + 0x12)) -
                          (float10)*(double *)(param_5 + 0x18) *
                          (float10)*(double *)(param_5 + 0x14));
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar3 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar3 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          fVar5 = fVar4 - (float10)local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
        }
        fVar4 = fVar4 * (float10)*(double *)(param_5 + 0x1e) +
                fVar5 * (float10)*(double *)(param_5 + 0x20);
      }
      local_18 = (double)fVar4;
      if (param_5[0x22] != 0) {
        if (param_5[0x22] == 1) {
          dVar1 = (double)((fVar4 * (float10)*(double *)(param_5 + 0x2e) +
                           (float10)*(double *)(param_5 + 0x28) *
                           (float10)*(double *)(param_5 + 0x24)) -
                          (float10)*(double *)(param_5 + 0x2a) *
                          (float10)*(double *)(param_5 + 0x26));
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar3 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar3 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar1 = *(double *)(param_5 + 0x26);
          dVar2 = *(double *)(param_5 + 0x24);
          param_5[0x26] = param_5[0x24];
          param_5[0x24] = (int)local_18;
          param_5[0x27] = param_5[0x25];
          param_5[0x25] = local_18._4_4_;
          fVar4 = fVar4 * (float10)*(double *)(param_5 + 0x30) +
                  (((float10)local_18 + (float10)dVar1) - ((float10)dVar2 + (float10)dVar2)) *
                  (float10)*(double *)(param_5 + 0x32);
          dVar1 = (double)(((float10)*(double *)(param_5 + 0x38) *
                            (float10)*(double *)(param_5 + 0x34) +
                           fVar4 * (float10)*(double *)(param_5 + 0x3e)) -
                          (float10)*(double *)(param_5 + 0x3a) *
                          (float10)*(double *)(param_5 + 0x36));
          local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar3 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar1;
          if (uVar3 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar1 = *(double *)(param_5 + 0x36);
          dVar2 = *(double *)(param_5 + 0x34);
          param_5[0x36] = param_5[0x34];
          param_5[0x34] = (int)local_18;
          param_5[0x37] = param_5[0x35];
          param_5[0x35] = local_18._4_4_;
          fVar4 = fVar4 * (float10)*(double *)(param_5 + 0x40) +
                  (((float10)local_18 + (float10)dVar1) - ((float10)dVar2 + (float10)dVar2)) *
                  (float10)*(double *)(param_5 + 0x42);
        }
        else {
          FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x24));
          FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x34));
          fVar4 = (float10)local_18;
        }
      }
      *param_1 = (float)((float10)local_10 * (float10)param_3[1] + fVar4 * (float10)*param_3);
      local_1c = local_1c + -1;
      param_1 = param_1 + param_2;
    } while (local_1c != 0);
  }
  return;
}


