/* Module: sftrkfx1.dll
   Function: FUN_5cbb5740
   Address: 5cbb5740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb5740(int *param_1,short *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  short *psVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 != 0) {
    piVar2 = param_1 + 0x24;
    do {
      iVar1 = param_1[6];
      if (iVar1 == 1) {
        local_40 = 0;
        if (0 < *piVar2) {
          do {
            local_10 = *(double *)(piVar2 + -0x10);
            local_28._4_4_ = (uint)((ulonglong)*(double *)(piVar2 + -0x12) >> 0x20);
            uVar3 = local_28._4_4_ & 0x7ff00000;
            local_28 = *(double *)(piVar2 + -0x12);
            if (uVar3 < 0x3df00000) {
              local_28 = 0.0;
            }
            fVar5 = (float10)local_28;
            psVar4 = param_2;
            if ((piVar2[-0xf] & 0x7ff00000U) < 0x3df00000) {
              local_10 = 0.0;
            }
            for (; psVar4 < param_2 + param_3 * param_4; psVar4 = psVar4 + param_4) {
              local_10 = (double)fVar5;
              iVar1 = ftol();
              if (iVar1 < -0x8000) {
                iVar1 = -0x8000;
              }
              else if (0x7fff < iVar1) {
                iVar1 = 0x7fff;
              }
              *psVar4 = (short)iVar1;
              fVar5 = extraout_ST0_01;
            }
            local_10._4_4_ = (int)((ulonglong)local_10 >> 0x20);
            *(double *)(piVar2 + -0x12) = (double)fVar5;
            piVar2[-0x10] = (int)local_10;
            piVar2[-0xf] = local_10._4_4_;
            if (1 < *piVar2) {
              FUN_5cbb5af0((int)(piVar2 + -0x1a));
            }
            local_40 = local_40 + 1;
          } while (local_40 < *piVar2);
        }
      }
      else if (iVar1 == 2) {
        local_20 = *(double *)(piVar2 + -0x12);
        if ((piVar2[-0x11] & 0x7ff00000U) < 0x3df00000) {
          local_20 = 0.0;
        }
        local_28._4_4_ = (uint)((ulonglong)*(double *)(piVar2 + -0x10) >> 0x20);
        uVar3 = local_28._4_4_ & 0x7ff00000;
        local_28 = *(double *)(piVar2 + -0x10);
        if (uVar3 < 0x3df00000) {
          local_28 = 0.0;
        }
        fVar5 = (float10)local_28;
        for (psVar4 = param_2; psVar4 < param_2 + param_3 * param_4; psVar4 = psVar4 + param_4) {
          local_20 = (double)(int)*psVar4 * _DAT_5cc04270 * *(double *)(piVar2 + -2) +
                     local_20 * *(double *)(piVar2 + -0x1a) +
                     (double)fVar5 * *(double *)(piVar2 + -0x18);
          iVar1 = ftol();
          if (iVar1 < -0x8000) {
            iVar1 = -0x8000;
          }
          else if (0x7fff < iVar1) {
            iVar1 = 0x7fff;
          }
          *psVar4 = (short)iVar1;
          fVar5 = extraout_ST0_00;
        }
        local_20._4_4_ = (int)((ulonglong)local_20 >> 0x20);
        *(double *)(piVar2 + -0x10) = (double)fVar5;
        piVar2[-0x12] = (int)local_20;
        piVar2[-0x11] = local_20._4_4_;
      }
      else if ((iVar1 == 3) && (local_40 = 0, 0 < *piVar2)) {
        do {
          local_18 = *(double *)(piVar2 + -0x10);
          local_28._4_4_ = (uint)((ulonglong)*(double *)(piVar2 + -0x12) >> 0x20);
          uVar3 = local_28._4_4_ & 0x7ff00000;
          local_28 = *(double *)(piVar2 + -0x12);
          if (uVar3 < 0x3df00000) {
            local_28 = 0.0;
          }
          fVar5 = (float10)local_28;
          psVar4 = param_2;
          if ((piVar2[-0xf] & 0x7ff00000U) < 0x3df00000) {
            local_18 = 0.0;
          }
          for (; psVar4 < param_2 + param_3 * param_4; psVar4 = psVar4 + param_4) {
            local_18 = (double)fVar5;
            iVar1 = ftol();
            if (iVar1 < -0x8000) {
              iVar1 = -0x8000;
            }
            else if (0x7fff < iVar1) {
              iVar1 = 0x7fff;
            }
            *psVar4 = (short)iVar1;
            fVar5 = extraout_ST0;
          }
          local_18._4_4_ = (int)((ulonglong)local_18 >> 0x20);
          *(double *)(piVar2 + -0x12) = (double)fVar5;
          piVar2[-0x10] = (int)local_18;
          piVar2[-0xf] = local_18._4_4_;
          if (1 < *piVar2) {
            FUN_5cbb5af0((int)(piVar2 + -0x1a));
          }
          local_40 = local_40 + 1;
        } while (local_40 < *piVar2);
      }
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 0x1c;
    } while (*param_1 != 0);
  }
  return;
}


