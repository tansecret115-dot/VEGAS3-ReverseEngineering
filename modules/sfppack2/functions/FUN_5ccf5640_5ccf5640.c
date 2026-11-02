/* Module: sfppack2.dll
   Function: FUN_5ccf5640
   Address: 5ccf5640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccf5640(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  int local_14;
  undefined8 local_10;
  
  pdVar3 = (double *)0x0;
  pdVar6 = *(double **)(param_1 + 0x18);
  if (param_3 != 0) {
    pdVar3 = *(double **)(param_3 + 0x18);
  }
  iVar4 = *(int *)(param_2 + 0x164);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0xe8) < 1) {
      if (0 < param_5) {
        iVar4 = (int)pdVar6 - (int)pdVar3;
        local_14 = param_5;
        do {
          dVar1 = (*(double *)(param_2 + 0x130) * *(double *)(param_2 + 0x120) +
                  *(double *)(param_2 + 0x140) * *(double *)(iVar4 + (int)pdVar3)) -
                  *(double *)(param_2 + 0x128) * *(double *)(param_2 + 0x138);
          local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar5 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar1;
          if (uVar5 < 0x3df00000) {
            local_10 = 0.0;
          }
          *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
          *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
          *(undefined4 *)(param_2 + 0x120) = (undefined4)local_10;
          *(uint *)(param_2 + 0x124) = local_10._4_4_;
          *(double *)(iVar4 + (int)pdVar3) =
               (*(double *)(iVar4 + (int)pdVar3) - local_10) * *(double *)(param_2 + 0x158) +
               *(double *)(param_2 + 0x150) * *(double *)(iVar4 + (int)pdVar3);
          if (param_3 != 0) {
            dVar1 = (*(double *)(param_4 + 0x130) * *(double *)(param_4 + 0x120) +
                    *(double *)(param_4 + 0x140) * *pdVar3) -
                    *(double *)(param_4 + 0x138) * *(double *)(param_4 + 0x128);
            local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
            uVar5 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar1;
            if (uVar5 < 0x3df00000) {
              local_10 = 0.0;
            }
            *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
            *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
            *(undefined4 *)(param_4 + 0x120) = (undefined4)local_10;
            *(uint *)(param_4 + 0x124) = local_10._4_4_;
            *pdVar3 = (*pdVar3 - local_10) * *(double *)(param_4 + 0x158) +
                      *(double *)(param_4 + 0x150) * *pdVar3;
          }
          pdVar3 = pdVar3 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else if (0 < param_5) {
      local_14 = param_5;
      iVar4 = (int)pdVar6 - (int)pdVar3;
      do {
        dVar1 = (*(double *)(param_2 + 0x140) * *(double *)(iVar4 + (int)pdVar3) +
                *(double *)(param_2 + 0x130) * *(double *)(param_2 + 0x120)) -
                *(double *)(param_2 + 0x128) * *(double *)(param_2 + 0x138);
        local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        uVar5 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar1;
        if (uVar5 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
        *(undefined4 *)(param_2 + 0x120) = (undefined4)local_10;
        *(uint *)(param_2 + 0x124) = local_10._4_4_;
        *(double *)(iVar4 + (int)pdVar3) =
             local_10 * *(double *)(param_2 + 0x158) +
             *(double *)(param_2 + 0x150) * *(double *)(iVar4 + (int)pdVar3);
        if (param_3 != 0) {
          dVar1 = (*(double *)(param_4 + 0x130) * *(double *)(param_4 + 0x120) +
                  *(double *)(param_4 + 0x140) * *pdVar3) -
                  *(double *)(param_4 + 0x138) * *(double *)(param_4 + 0x128);
          local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar5 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar1;
          if (uVar5 < 0x3df00000) {
            local_10 = 0.0;
          }
          *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
          *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
          *(undefined4 *)(param_4 + 0x120) = (undefined4)local_10;
          *(uint *)(param_4 + 0x124) = local_10._4_4_;
          *pdVar3 = local_10 * *(double *)(param_4 + 0x158) + *(double *)(param_4 + 0x150) * *pdVar3
          ;
        }
        pdVar3 = pdVar3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      return;
    }
  }
  else if (iVar4 == 1) {
    if (0 < param_5) {
      iVar4 = (int)pdVar3 - (int)pdVar6;
      local_14 = param_5;
      do {
        dVar1 = *(double *)(param_2 + 0xf0);
        dVar2 = dVar1 * *(double *)(param_2 + 0x100) +
                (*(double *)(param_2 + 0x110) * *pdVar6 -
                *(double *)(param_2 + 0xf8) * *(double *)(param_2 + 0x108));
        local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_10._4_4_ & 0x7ff00000;
        *pdVar6 = (dVar2 - dVar1) * *(double *)(param_2 + 0x118) + *pdVar6;
        local_10 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(double *)(param_2 + 0xf8) = dVar1;
        *(undefined4 *)(param_2 + 0xf0) = (undefined4)local_10;
        *(uint *)(param_2 + 0xf4) = local_10._4_4_;
        if (param_3 != 0) {
          FUN_5ccf5cd0((double *)(iVar4 + (int)pdVar6),(double *)(param_4 + 0xf0));
        }
        pdVar6 = pdVar6 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      return;
    }
  }
  else if (iVar4 == 2) {
    if (*(int *)(param_2 + 0xe8) < 1) {
      if (0 < param_5) {
        local_14 = param_5;
        iVar4 = (int)pdVar6 - (int)pdVar3;
        do {
          dVar1 = (*(double *)(param_2 + 0x148) * *(double *)((int)pdVar3 + iVar4) +
                  *(double *)(param_2 + 0x120) * *(double *)(param_2 + 0x130)) -
                  *(double *)(param_2 + 0x128) * *(double *)(param_2 + 0x138);
          local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar5 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar1;
          if (uVar5 < 0x3df00000) {
            local_10 = 0.0;
          }
          *(double *)((int)pdVar3 + iVar4) =
               *(double *)(param_2 + 0x150) * *(double *)((int)pdVar3 + iVar4) +
               ((local_10 + *(double *)(param_2 + 0x128)) -
               (*(double *)(param_2 + 0x120) + *(double *)(param_2 + 0x120))) *
               *(double *)(param_2 + 0x158);
          *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
          *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
          *(undefined4 *)(param_2 + 0x120) = (undefined4)local_10;
          *(uint *)(param_2 + 0x124) = local_10._4_4_;
          if (param_3 != 0) {
            dVar1 = (*(double *)(param_4 + 0x148) * *pdVar3 +
                    *(double *)(param_4 + 0x130) * *(double *)(param_4 + 0x120)) -
                    *(double *)(param_4 + 0x138) * *(double *)(param_4 + 0x128);
            local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
            uVar5 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar1;
            if (uVar5 < 0x3df00000) {
              local_10 = 0.0;
            }
            *pdVar3 = *(double *)(param_4 + 0x150) * *pdVar3 +
                      ((local_10 + *(double *)(param_4 + 0x128)) -
                      (*(double *)(param_4 + 0x120) + *(double *)(param_4 + 0x120))) *
                      *(double *)(param_4 + 0x158);
            *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
            *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
            *(undefined4 *)(param_4 + 0x120) = (undefined4)local_10;
            *(uint *)(param_4 + 0x124) = local_10._4_4_;
          }
          pdVar3 = pdVar3 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return;
      }
    }
    else if (0 < param_5) {
      local_14 = param_5;
      iVar4 = (int)pdVar6 - (int)pdVar3;
      do {
        dVar1 = (*(double *)(param_2 + 0x130) * *(double *)(param_2 + 0x120) +
                *(double *)(iVar4 + (int)pdVar3) * *(double *)(param_2 + 0x148)) -
                *(double *)(param_2 + 0x138) * *(double *)(param_2 + 0x128);
        local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        uVar5 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar1;
        if (uVar5 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(double *)(iVar4 + (int)pdVar3) =
             *(double *)(param_2 + 0x150) * *(double *)(iVar4 + (int)pdVar3) +
             ((local_10 + *(double *)(param_2 + 0x128)) -
             (*(double *)(param_2 + 0x120) + *(double *)(param_2 + 0x120))) *
             *(double *)(param_2 + 0x158);
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x120);
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x124);
        *(undefined4 *)(param_2 + 0x120) = (undefined4)local_10;
        *(uint *)(param_2 + 0x124) = local_10._4_4_;
        if (param_3 != 0) {
          dVar1 = (*(double *)(param_4 + 0x148) * *pdVar3 +
                  *(double *)(param_4 + 0x130) * *(double *)(param_4 + 0x120)) -
                  *(double *)(param_4 + 0x138) * *(double *)(param_4 + 0x128);
          local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar5 = local_10._4_4_ & 0x7ff00000;
          local_10 = dVar1;
          if (uVar5 < 0x3df00000) {
            local_10 = 0.0;
          }
          *pdVar3 = *(double *)(param_4 + 0x150) * *pdVar3 +
                    ((local_10 + *(double *)(param_4 + 0x128)) -
                    (*(double *)(param_4 + 0x120) + *(double *)(param_4 + 0x120))) *
                    *(double *)(param_4 + 0x158);
          *(undefined4 *)(param_4 + 0x128) = *(undefined4 *)(param_4 + 0x120);
          *(undefined4 *)(param_4 + 300) = *(undefined4 *)(param_4 + 0x124);
          *(undefined4 *)(param_4 + 0x120) = (undefined4)local_10;
          *(uint *)(param_4 + 0x124) = local_10._4_4_;
        }
        pdVar3 = pdVar3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      return;
    }
  }
  return;
}


