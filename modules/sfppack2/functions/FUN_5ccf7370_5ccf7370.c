/* Module: sfppack2.dll
   Function: FUN_5ccf7370
   Address: 5ccf7370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccf7370(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar7 = *(int *)(param_1 + 0x18);
  pfVar6 = (float *)0x0;
  if (param_3 != 0) {
    pfVar6 = *(float **)(param_3 + 0x18);
  }
  iVar4 = *(int *)(param_2 + 0x164);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0xe8) < 1) {
      if (0 < param_5) {
        iVar7 = iVar7 - (int)pfVar6;
        local_1c = param_5;
        do {
          fVar9 = (float10)*(float *)((int)pfVar6 + iVar7);
          dVar2 = (double)(((float10)*(double *)(param_2 + 0x120) *
                            (float10)*(double *)(param_2 + 0x130) +
                           fVar9 * (float10)*(double *)(param_2 + 0x140)) -
                          (float10)*(double *)(param_2 + 0x128) *
                          (float10)*(double *)(param_2 + 0x138));
          local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar8 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar2;
          if (uVar8 < 0x3df00000) {
            local_10 = 0.0;
          }
          *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
          *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
          *(undefined4 *)(param_2 + 0x120) = (undefined4)local_10;
          *(uint *)(param_2 + 0x124) = local_10._4_4_;
          *(float *)((int)pfVar6 + iVar7) =
               (float)(fVar9 * (float10)*(double *)(param_2 + 0x150) +
                      (fVar9 - (float10)local_10) * (float10)*(double *)(param_2 + 0x158));
          if (param_3 != 0) {
            fVar9 = (float10)*pfVar6;
            dVar2 = (double)(((float10)*(double *)(param_4 + 0x130) *
                              (float10)*(double *)(param_4 + 0x120) +
                             fVar9 * (float10)*(double *)(param_4 + 0x140)) -
                            (float10)*(double *)(param_4 + 0x138) *
                            (float10)*(double *)(param_4 + 0x128));
            local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            uVar8 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar2;
            if (uVar8 < 0x3df00000) {
              local_10 = 0.0;
            }
            *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
            *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
            *(undefined4 *)(param_4 + 0x120) = (undefined4)local_10;
            *(uint *)(param_4 + 0x124) = local_10._4_4_;
            *pfVar6 = (float)(fVar9 * (float10)*(double *)(param_4 + 0x150) +
                             (fVar9 - (float10)local_10) * (float10)*(double *)(param_4 + 0x158));
          }
          pfVar6 = pfVar6 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (0 < param_5) {
      iVar7 = iVar7 - (int)pfVar6;
      local_1c = param_5;
      do {
        fVar9 = (float10)*(float *)((int)pfVar6 + iVar7);
        dVar2 = (double)(((float10)*(double *)(param_2 + 0x130) *
                          (float10)*(double *)(param_2 + 0x120) +
                         fVar9 * (float10)*(double *)(param_2 + 0x140)) -
                        (float10)*(double *)(param_2 + 0x128) *
                        (float10)*(double *)(param_2 + 0x138));
        local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar8 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar2;
        if (uVar8 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
        *(undefined4 *)(param_2 + 0x120) = (undefined4)local_10;
        *(uint *)(param_2 + 0x124) = local_10._4_4_;
        *(float *)((int)pfVar6 + iVar7) =
             (float)(fVar9 * (float10)*(double *)(param_2 + 0x150) +
                    (float10)local_10 * (float10)*(double *)(param_2 + 0x158));
        if (param_3 != 0) {
          fVar1 = *pfVar6;
          dVar2 = (double)(((float10)fVar1 * (float10)*(double *)(param_4 + 0x140) +
                           (float10)*(double *)(param_4 + 0x130) *
                           (float10)*(double *)(param_4 + 0x120)) -
                          (float10)*(double *)(param_4 + 0x138) *
                          (float10)*(double *)(param_4 + 0x128));
          local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar8 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar2;
          if (uVar8 < 0x3df00000) {
            local_10 = 0.0;
          }
          *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
          *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
          *(undefined4 *)(param_4 + 0x120) = (undefined4)local_10;
          *(uint *)(param_4 + 0x124) = local_10._4_4_;
          *pfVar6 = (float)((float10)fVar1 * (float10)*(double *)(param_4 + 0x150) +
                           (float10)local_10 * (float10)*(double *)(param_4 + 0x158));
        }
        pfVar6 = pfVar6 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      return;
    }
  }
  else if (iVar4 == 1) {
    if (0 < param_5) {
      iVar7 = iVar7 - (int)pfVar6;
      local_1c = param_5;
      do {
        dVar2 = (double)*(float *)((int)pfVar6 + iVar7);
        dVar3 = *(double *)(param_2 + 0xf0);
        dVar5 = dVar3 * *(double *)(param_2 + 0x100) +
                (dVar2 * *(double *)(param_2 + 0x110) -
                *(double *)(param_2 + 0xf8) * *(double *)(param_2 + 0x108));
        local_10._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
        uVar8 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar5;
        if (uVar8 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(double *)(param_2 + 0xf8) = dVar3;
        *(undefined4 *)(param_2 + 0xf0) = (undefined4)local_10;
        *(uint *)(param_2 + 0xf4) = local_10._4_4_;
        *(float *)((int)pfVar6 + iVar7) =
             (float)((dVar5 - dVar3) * *(double *)(param_2 + 0x118) + dVar2);
        if (param_3 != 0) {
          fVar1 = *pfVar6;
          dVar2 = *(double *)(param_4 + 0xf0);
          dVar3 = dVar2 * *(double *)(param_4 + 0x100) +
                  ((double)fVar1 * *(double *)(param_4 + 0x110) -
                  *(double *)(param_4 + 0x108) * *(double *)(param_4 + 0xf8));
          local_10._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
          uVar8 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar3;
          if (uVar8 < 0x3df00000) {
            local_10 = 0.0;
          }
          *(double *)(param_4 + 0xf8) = dVar2;
          *(undefined4 *)(param_4 + 0xf0) = (undefined4)local_10;
          *(uint *)(param_4 + 0xf4) = local_10._4_4_;
          *pfVar6 = (float)((dVar3 - dVar2) * *(double *)(param_4 + 0x118) + (double)fVar1);
        }
        pfVar6 = pfVar6 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      return;
    }
  }
  else if (iVar4 == 2) {
    if (*(int *)(param_2 + 0xe8) < 1) {
      if (0 < param_5) {
        iVar7 = iVar7 - (int)pfVar6;
        local_1c = param_5;
        do {
          fVar9 = (float10)*(float *)((int)pfVar6 + iVar7);
          dVar2 = (double)(((float10)*(double *)(param_2 + 0x120) *
                            (float10)*(double *)(param_2 + 0x130) +
                           fVar9 * (float10)*(double *)(param_2 + 0x148)) -
                          (float10)*(double *)(param_2 + 0x138) *
                          (float10)*(double *)(param_2 + 0x128));
          local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar8 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar2;
          if (uVar8 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar2 = *(double *)(param_2 + 0x128);
          dVar3 = *(double *)(param_2 + 0x120);
          *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
          *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
          *(undefined4 *)(param_2 + 0x120) = (undefined4)local_18;
          *(uint *)(param_2 + 0x124) = local_18._4_4_;
          *(float *)((int)pfVar6 + iVar7) =
               (float)(fVar9 * (float10)*(double *)(param_2 + 0x150) +
                      (((float10)local_18 + (float10)dVar2) - ((float10)dVar3 + (float10)dVar3)) *
                      (float10)*(double *)(param_2 + 0x158));
          if (param_3 != 0) {
            fVar1 = *pfVar6;
            dVar2 = (double)(((float10)fVar1 * (float10)*(double *)(param_4 + 0x148) +
                             (float10)*(double *)(param_4 + 0x130) *
                             (float10)*(double *)(param_4 + 0x120)) -
                            (float10)*(double *)(param_4 + 0x138) *
                            (float10)*(double *)(param_4 + 0x128));
            local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            uVar8 = local_18._4_4_ & 0x7ff00000;
            local_18 = dVar2;
            if (uVar8 < 0x3df00000) {
              local_18 = 0.0;
            }
            dVar2 = *(double *)(param_4 + 0x128);
            dVar3 = *(double *)(param_4 + 0x120);
            *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
            *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
            *(undefined4 *)(param_4 + 0x120) = (undefined4)local_18;
            *(uint *)(param_4 + 0x124) = local_18._4_4_;
            *pfVar6 = (float)((float10)fVar1 * (float10)*(double *)(param_4 + 0x150) +
                             (((float10)local_18 + (float10)dVar2) -
                             ((float10)dVar3 + (float10)dVar3)) *
                             (float10)*(double *)(param_4 + 0x158));
          }
          pfVar6 = pfVar6 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        return;
      }
    }
    else if (0 < param_5) {
      iVar7 = iVar7 - (int)pfVar6;
      local_1c = param_5;
      do {
        fVar9 = (float10)*(float *)(iVar7 + (int)pfVar6);
        dVar2 = (double)((fVar9 * (float10)*(double *)(param_2 + 0x148) +
                         (float10)*(double *)(param_2 + 0x120) *
                         (float10)*(double *)(param_2 + 0x130)) -
                        (float10)*(double *)(param_2 + 0x128) *
                        (float10)*(double *)(param_2 + 0x138));
        local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar8 = local_18._4_4_ & 0x7ff00000;
        local_18 = dVar2;
        if (uVar8 < 0x3df00000) {
          local_18 = 0.0;
        }
        dVar2 = *(double *)(param_2 + 0x128);
        dVar3 = *(double *)(param_2 + 0x120);
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
        *(undefined4 *)(param_2 + 0x120) = (undefined4)local_18;
        *(uint *)(param_2 + 0x124) = local_18._4_4_;
        *(float *)(iVar7 + (int)pfVar6) =
             (float)(fVar9 * (float10)*(double *)(param_2 + 0x150) +
                    (((float10)local_18 + (float10)dVar2) - ((float10)dVar3 + (float10)dVar3)) *
                    (float10)*(double *)(param_2 + 0x158));
        if (param_3 != 0) {
          fVar1 = *pfVar6;
          dVar2 = (double)(((float10)fVar1 * (float10)*(double *)(param_4 + 0x148) +
                           (float10)*(double *)(param_4 + 0x130) *
                           (float10)*(double *)(param_4 + 0x120)) -
                          (float10)*(double *)(param_4 + 0x138) *
                          (float10)*(double *)(param_4 + 0x128));
          local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar8 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar2;
          if (uVar8 < 0x3df00000) {
            local_18 = 0.0;
          }
          dVar2 = *(double *)(param_4 + 0x128);
          dVar3 = *(double *)(param_4 + 0x120);
          *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
          *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
          *(undefined4 *)(param_4 + 0x120) = (undefined4)local_18;
          *(uint *)(param_4 + 0x124) = local_18._4_4_;
          *pfVar6 = (float)((float10)fVar1 * (float10)*(double *)(param_4 + 0x150) +
                           (((float10)local_18 + (float10)dVar2) - ((float10)dVar3 + (float10)dVar3)
                           ) * (float10)*(double *)(param_4 + 0x158));
        }
        pfVar6 = pfVar6 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      return;
    }
  }
  return;
}


