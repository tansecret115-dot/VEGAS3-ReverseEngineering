/* Module: sftrkfx1.dll
   Function: FUN_5cbb60a0
   Address: 5cbb60a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb60a0(int *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 != 0) {
    piVar2 = param_1 + 0x24;
    do {
      iVar3 = param_1[6];
      if (iVar3 == 1) {
        local_38 = 0;
        if (0 < *piVar2) {
          do {
            local_10 = *(double *)(piVar2 + -0x10);
            local_28._4_4_ = (uint)((ulonglong)*(double *)(piVar2 + -0x12) >> 0x20);
            uVar4 = local_28._4_4_ & 0x7ff00000;
            local_28 = *(double *)(piVar2 + -0x12);
            if (uVar4 < 0x3df00000) {
              local_28 = 0.0;
            }
            fVar6 = (float10)local_28;
            pbVar5 = param_2;
            if ((piVar2[-0xf] & 0x7ff00000U) < 0x3df00000) {
              local_10 = 0.0;
            }
            for (; pbVar5 < param_2 + param_3 * param_4; pbVar5 = pbVar5 + param_4) {
              local_10 = (double)fVar6;
              iVar3 = ftol();
              if (iVar3 < -0x80) {
                bVar1 = 0;
              }
              else if (iVar3 < 0x80) {
                bVar1 = (byte)iVar3 ^ 0x80;
              }
              else {
                bVar1 = 0xff;
              }
              *pbVar5 = bVar1;
              fVar6 = extraout_ST0_01;
            }
            local_10._4_4_ = (int)((ulonglong)local_10 >> 0x20);
            *(double *)(piVar2 + -0x12) = (double)fVar6;
            piVar2[-0x10] = (int)local_10;
            piVar2[-0xf] = local_10._4_4_;
            if (1 < *piVar2) {
              FUN_5cbb5af0((int)(piVar2 + -0x1a));
            }
            local_38 = local_38 + 1;
          } while (local_38 < *piVar2);
        }
      }
      else if (iVar3 == 2) {
        local_20 = *(double *)(piVar2 + -0x12);
        if ((piVar2[-0x11] & 0x7ff00000U) < 0x3df00000) {
          local_20 = 0.0;
        }
        local_28._4_4_ = (uint)((ulonglong)*(double *)(piVar2 + -0x10) >> 0x20);
        uVar4 = local_28._4_4_ & 0x7ff00000;
        local_28 = *(double *)(piVar2 + -0x10);
        if (uVar4 < 0x3df00000) {
          local_28 = 0.0;
        }
        fVar6 = (float10)local_28;
        for (pbVar5 = param_2; pbVar5 < param_2 + param_3 * param_4; pbVar5 = pbVar5 + param_4) {
          local_20 = (double)(int)(char)(*pbVar5 ^ 0x80) * _DAT_5cc042a0 * *(double *)(piVar2 + -2)
                     + local_20 * *(double *)(piVar2 + -0x1a) +
                       (double)fVar6 * *(double *)(piVar2 + -0x18);
          iVar3 = ftol();
          if (iVar3 < -0x80) {
            bVar1 = 0;
          }
          else if (iVar3 < 0x80) {
            bVar1 = (byte)iVar3 ^ 0x80;
          }
          else {
            bVar1 = 0xff;
          }
          *pbVar5 = bVar1;
          fVar6 = extraout_ST0_00;
        }
        local_20._4_4_ = (int)((ulonglong)local_20 >> 0x20);
        *(double *)(piVar2 + -0x10) = (double)fVar6;
        piVar2[-0x12] = (int)local_20;
        piVar2[-0x11] = local_20._4_4_;
      }
      else if ((iVar3 == 3) && (local_38 = 0, 0 < *piVar2)) {
        do {
          local_18 = *(double *)(piVar2 + -0x10);
          local_30._4_4_ = (uint)((ulonglong)*(double *)(piVar2 + -0x12) >> 0x20);
          uVar4 = local_30._4_4_ & 0x7ff00000;
          local_30 = *(double *)(piVar2 + -0x12);
          if (uVar4 < 0x3df00000) {
            local_30 = 0.0;
          }
          fVar6 = (float10)local_30;
          pbVar5 = param_2;
          if ((piVar2[-0xf] & 0x7ff00000U) < 0x3df00000) {
            local_18 = 0.0;
          }
          for (; pbVar5 < param_2 + param_3 * param_4; pbVar5 = pbVar5 + param_4) {
            local_18 = (double)fVar6;
            iVar3 = ftol();
            if (iVar3 < -0x80) {
              bVar1 = 0;
            }
            else if (iVar3 < 0x80) {
              bVar1 = (byte)iVar3 ^ 0x80;
            }
            else {
              bVar1 = 0xff;
            }
            *pbVar5 = bVar1;
            fVar6 = extraout_ST0;
          }
          local_18._4_4_ = (int)((ulonglong)local_18 >> 0x20);
          *(double *)(piVar2 + -0x12) = (double)fVar6;
          piVar2[-0x10] = (int)local_18;
          piVar2[-0xf] = local_18._4_4_;
          if (1 < *piVar2) {
            FUN_5cbb5af0((int)(piVar2 + -0x1a));
          }
          local_38 = local_38 + 1;
        } while (local_38 < *piVar2);
      }
      piVar2 = piVar2 + 0x1c;
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
  }
  return;
}


