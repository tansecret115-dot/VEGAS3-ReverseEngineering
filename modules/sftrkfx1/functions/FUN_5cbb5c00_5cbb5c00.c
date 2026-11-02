/* Module: sftrkfx1.dll
   Function: FUN_5cbb5c00
   Address: 5cbb5c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb5c00(int *param_1,int *param_2,int param_3,int param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int local_3c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 != 0) {
    piVar4 = param_1 + 0x24;
    do {
      iVar3 = param_1[6];
      if (iVar3 == 1) {
        local_3c = 0;
        if (0 < *piVar4) {
          do {
            dVar1 = *(double *)(piVar4 + -0x12);
            local_18 = *(double *)(piVar4 + -0x10);
            local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
            if ((local_10._4_4_ & 0x7ff00000) < 0x3df00000) {
              local_10 = 0.0;
              dVar1 = local_10;
            }
            fVar6 = (float10)dVar1;
            piVar5 = param_2;
            if ((piVar4[-0xf] & 0x7ff00000U) < 0x3df00000) {
              local_18 = 0.0;
            }
            for (; piVar5 < param_2 + param_3 * param_4; piVar5 = piVar5 + param_4) {
              local_18 = (double)fVar6;
              fVar6 = fVar6 * (float10)*(double *)(piVar4 + -0x1a) +
                      (float10)*piVar5 * (float10)_DAT_5cc04290 * (float10)*(double *)(piVar4 + -2);
              fVar7 = ((float10)*piVar5 * (float10)_DAT_5cc04290 + (float10)local_18 + fVar6) *
                      (float10)_DAT_5cc04288;
              if ((float10)_DAT_5cc04280 <= fVar7) {
                if ((double)fVar7 <= _DAT_5cc04278) {
                  iVar3 = ftol();
                  fVar6 = extraout_ST0_01;
                }
                else {
                  iVar3 = 0x7fffffff;
                }
              }
              else {
                iVar3 = -0x80000000;
              }
              *piVar5 = iVar3;
            }
            local_18._4_4_ = (int)((ulonglong)local_18 >> 0x20);
            *(double *)(piVar4 + -0x12) = (double)fVar6;
            piVar4[-0x10] = (int)local_18;
            piVar4[-0xf] = local_18._4_4_;
            if (1 < *piVar4) {
              FUN_5cbb5af0((int)(piVar4 + -0x1a));
            }
            local_3c = local_3c + 1;
          } while (local_3c < *piVar4);
        }
      }
      else if (iVar3 == 2) {
        local_28 = *(double *)(piVar4 + -0x12);
        if ((piVar4[-0x11] & 0x7ff00000U) < 0x3df00000) {
          local_28 = 0.0;
        }
        local_10._4_4_ = (uint)((ulonglong)*(double *)(piVar4 + -0x10) >> 0x20);
        uVar2 = local_10._4_4_ & 0x7ff00000;
        local_10 = *(double *)(piVar4 + -0x10);
        if (uVar2 < 0x3df00000) {
          local_10 = 0.0;
        }
        fVar6 = (float10)local_10;
        for (piVar5 = param_2; piVar5 < param_2 + param_3 * param_4; piVar5 = piVar5 + param_4) {
          dVar1 = (double)fVar6;
          fVar6 = (float10)local_28;
          local_28 = (double)*piVar5 * _DAT_5cc04290 * *(double *)(piVar4 + -2) +
                     dVar1 * *(double *)(piVar4 + -0x18) + local_28 * *(double *)(piVar4 + -0x1a);
          dVar1 = (((double)*piVar5 * _DAT_5cc04290 + local_28) - dVar1) * _DAT_5cc04288;
          if (_DAT_5cc04280 <= dVar1) {
            if (dVar1 <= _DAT_5cc04278) {
              iVar3 = ftol();
              fVar6 = extraout_ST0_00;
            }
            else {
              iVar3 = 0x7fffffff;
            }
          }
          else {
            iVar3 = -0x80000000;
          }
          *piVar5 = iVar3;
        }
        local_28._4_4_ = (int)((ulonglong)local_28 >> 0x20);
        *(double *)(piVar4 + -0x10) = (double)fVar6;
        piVar4[-0x12] = (int)local_28;
        piVar4[-0x11] = local_28._4_4_;
      }
      else if ((iVar3 == 3) && (local_3c = 0, 0 < *piVar4)) {
        do {
          local_20 = *(double *)(piVar4 + -0x10);
          local_10._4_4_ = (uint)((ulonglong)*(double *)(piVar4 + -0x12) >> 0x20);
          uVar2 = local_10._4_4_ & 0x7ff00000;
          local_10 = *(double *)(piVar4 + -0x12);
          if (uVar2 < 0x3df00000) {
            local_10 = 0.0;
          }
          fVar6 = (float10)local_10;
          piVar5 = param_2;
          if ((piVar4[-0xf] & 0x7ff00000U) < 0x3df00000) {
            local_20 = 0.0;
          }
          for (; piVar5 < param_2 + param_3 * param_4; piVar5 = piVar5 + param_4) {
            local_20 = (double)fVar6;
            fVar6 = (float10)*piVar5 * (float10)_DAT_5cc04290 * (float10)*(double *)(piVar4 + -2) +
                    fVar6 * (float10)*(double *)(piVar4 + -0x1a);
            fVar7 = (((float10)*piVar5 * (float10)_DAT_5cc04290 + fVar6) - (float10)local_20) *
                    (float10)_DAT_5cc04288;
            if ((float10)_DAT_5cc04280 <= fVar7) {
              if ((double)fVar7 <= _DAT_5cc04278) {
                iVar3 = ftol();
                fVar6 = extraout_ST0;
              }
              else {
                iVar3 = 0x7fffffff;
              }
            }
            else {
              iVar3 = -0x80000000;
            }
            *piVar5 = iVar3;
          }
          local_20._4_4_ = (int)((ulonglong)local_20 >> 0x20);
          *(double *)(piVar4 + -0x12) = (double)fVar6;
          piVar4[-0x10] = (int)local_20;
          piVar4[-0xf] = local_20._4_4_;
          if (1 < *piVar4) {
            FUN_5cbb5af0((int)(piVar4 + -0x1a));
          }
          local_3c = local_3c + 1;
        } while (local_3c < *piVar4);
      }
      piVar4 = piVar4 + 0x1c;
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
  }
  return;
}


