/* Module: sfppack1.dll
   Function: FUN_5cdcc8a0
   Address: 5cdcc8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdcc8a0(void *this,int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  double dVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined8 local_d0;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  int local_b4;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  int local_94 [36];
  
  local_c0 = (double)CONCAT44(local_c0._4_4_,(uint)(param_1 == 2));
  local_a8 = (double)CONCAT44(local_a8._4_4_,(uint)*(ushort *)(*(int *)((int)this + 200) + 2));
  local_c4 = *param_3;
  local_b4 = 0;
  local_b0 = (double)CONCAT44(local_b0._4_4_,param_2);
  iVar4 = FUN_5cdc69f0(this,local_94);
  if ((param_1 == 0) && (*(int *)((int)this + 0xb4) != 0)) {
    local_b4 = FUN_5cdcbbd0(this);
    if (local_b4 < 0) {
      return local_b4;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0xcc) == 0)) &&
          (((int)local_c0 == 0 && (local_b4 = FUN_5cdcba70(this,local_94), local_b4 < 0)))) {
    return local_b4;
  }
  *(undefined4 *)((int)this + 0xb4) = 1;
  if ((int)local_c0 != 0) {
    if (*(uint *)((int)this + 0x108) <= local_c4) {
      local_c4 = *(uint *)((int)this + 0x108);
    }
    iVar4 = *(int *)((int)this + 0x108) - local_c4;
    *(int *)((int)this + 0x108) = iVar4;
    if (iVar4 == 0) {
      local_b4 = 1;
    }
  }
  if (local_a8._0_4_ < 2) {
    if (local_c4 != 0) {
      local_c8 = local_c4;
      piVar7 = param_2;
      uVar8 = local_a8._0_4_;
      do {
        fVar9 = (float10)*piVar7 * (float10)_DAT_5ce13278 * (float10)*(double *)((int)this + 0xe8);
        dVar2 = (double)(fVar9 * (float10)*(double *)((int)this + 0x238) +
                        (float10)*(double *)((int)this + 0x240) *
                        (float10)*(double *)((int)this + 0x250));
        local_d0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_d0._4_4_ & 0x7ff00000;
        local_d0 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_d0 = 0.0;
        }
        fVar10 = (float10)_DAT_5ce12bf0;
        fVar11 = (float10)fsin((float10)*(double *)((int)this + 0x268));
        *(undefined4 *)((int)this + 0x240) = (undefined4)local_d0;
        *(uint *)((int)this + 0x244) = local_d0._4_4_;
        local_c0 = (double)((ulonglong)local_c0 & 0xffffffff00000000);
        local_a0 = (double)(fVar11 + (float10)_DAT_5ce12e70);
        *(double *)((int)this + 0x268) =
             *(double *)((int)this + 0x260) + *(double *)((int)this + 0x268);
        if (0 < *(int *)((int)this + 0xd8)) {
          piVar7 = (int *)((int)this + 0x110);
          pdVar6 = (double *)((int)this + 0x138);
          do {
            iVar4 = ftol();
            iVar4 = *piVar7 - iVar4;
            if (iVar4 < 0) {
              iVar4 = iVar4 + *(int *)((int)this + 0x270);
            }
            iVar1 = *piVar7 + -1;
            fVar10 = (float10)*(double *)(*(int *)((int)this + 0x100) + iVar4 * 8) *
                     (float10)*pdVar6 + extraout_ST0;
            *piVar7 = iVar1;
            if (iVar1 < 0) {
              *piVar7 = *(int *)((int)this + 0x270);
            }
            iVar4 = (int)local_c0 + 1;
            pdVar6 = pdVar6 + 1;
            piVar7 = piVar7 + 1;
            local_c0 = (double)CONCAT44(local_c0._4_4_,iVar4);
          } while (iVar4 < *(int *)((int)this + 0xd8));
          piVar7 = (int *)local_b0;
          uVar8 = local_a8._0_4_;
          fVar9 = extraout_ST1;
        }
        dVar2 = (double)(fVar10 * (float10)*(double *)((int)this + 0x238) +
                        (float10)*(double *)((int)this + 0x278) *
                        (float10)*(double *)((int)this + 0x250));
        local_c0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_c0._4_4_ & 0x7ff00000;
        local_c0 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_c0 = 0.0;
        }
        *(int *)((int)this + 0x278) = (int)local_c0;
        *(uint *)((int)this + 0x27c) = local_c0._4_4_;
        dVar2 = (double)(fVar9 * (float10)*(double *)((int)this + 0xf0) +
                        (float10)local_c0 * (float10)*(double *)((int)this + 0xf8));
        local_b0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_b0._4_4_ & 0x7ff00000;
        local_b0 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_b0 = 0.0;
        }
        local_d0 = local_c0 * *(double *)((int)this + 0xe0) + local_d0;
        dVar2 = _DAT_5ce14458;
        if ((local_d0 <= _DAT_5ce14458) && (dVar2 = local_d0, local_d0 < _DAT_5ce14450)) {
          dVar2 = _DAT_5ce14450;
        }
        *(double *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 600) * 8) = dVar2;
        iVar4 = *(int *)((int)this + 600) + -1;
        *(int *)((int)this + 600) = iVar4;
        if (iVar4 < 0) {
          *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x270);
        }
        local_d0 = local_b0 * _DAT_5ce13260;
        if (_DAT_5ce13258 <= local_d0) {
          if (local_d0 <= _DAT_5ce13250) {
            iVar4 = ftol();
          }
          else {
            iVar4 = 0x7fffffff;
          }
        }
        else {
          iVar4 = -0x80000000;
        }
        *piVar7 = iVar4;
        piVar7 = piVar7 + uVar8;
        local_c8 = local_c8 - 1;
        local_b0 = (double)CONCAT44(local_b0._4_4_,piVar7);
      } while (local_c8 != 0);
    }
  }
  else if (local_c4 != 0) {
    local_c8 = local_a8._0_4_ * 4;
    piVar7 = param_2;
    uVar8 = local_c4;
    do {
      local_d0 = (double)*piVar7 * _DAT_5ce13278;
      local_a8 = (double)piVar7[1] * _DAT_5ce13278;
      FUN_5cdcda70(this,(double *)&local_d0,&local_a8);
      local_d0 = local_d0 * _DAT_5ce13260;
      if (_DAT_5ce13258 <= local_d0) {
        if (local_d0 <= _DAT_5ce13250) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      local_d0 = local_a8 * _DAT_5ce13260;
      *piVar7 = iVar4;
      if (_DAT_5ce13258 <= local_d0) {
        if (local_d0 <= _DAT_5ce13250) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      piVar7[1] = iVar4;
      piVar7 = (int *)((int)piVar7 + local_c8);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdcce74;
  uVar8 = *(uint *)(*(int *)((int)this + 200) + 4);
  local_c8 = local_c4;
  if (*(int *)((int)this + 0x2a0) == 0) {
    iVar4 = *(int *)((int)this + 0x28c) - local_c4;
    *(int *)((int)this + 0x28c) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x28c) = (uVar5 & 3) * (uVar8 >> 4) + uVar8 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0x298) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x29c) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x2a0) = uVar8 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdccd48;
    }
    local_c8 = 0;
  }
  else {
LAB_5cdccd48:
    uVar8 = *(uint *)((int)this + 0x2a0);
    if (uVar8 <= local_c4) {
      local_c8 = uVar8;
    }
    *(uint *)((int)this + 0x2a0) = uVar8 - local_c8;
  }
  uVar8 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  for (; local_c8 != 0; local_c8 = local_c8 - 1) {
    fVar3 = *(float *)(*(int *)((int)this + 0x294) +
                      (DAT_5ce2a0ec % *(uint *)((int)this + 0x290)) * 4) * (float)_DAT_5ce13260;
    DAT_5ce2a0ec = DAT_5ce2a0ec + *(int *)((int)this + 0x298);
    local_d0 = (double)fVar3;
    if ((float)_DAT_5ce13258 <= fVar3) {
      if (local_d0 <= _DAT_5ce13250) {
        iVar4 = ftol();
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    else {
      iVar4 = -0x80000000;
    }
    *param_2 = *param_2 + iVar4;
    if (1 < uVar8) {
      fVar3 = *(float *)(*(int *)((int)this + 0x294) +
                        (DAT_5ce2a0f0 % *(uint *)((int)this + 0x290)) * 4) * (float)_DAT_5ce13260;
      DAT_5ce2a0f0 = DAT_5ce2a0f0 + 1 + *(int *)((int)this + 0x29c);
      local_d0 = (double)fVar3;
      if ((float)_DAT_5ce13258 <= fVar3) {
        if (local_d0 <= _DAT_5ce13250) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar4;
    }
    param_2 = param_2 + uVar8;
  }
LAB_5cdcce74:
  *param_3 = local_c4;
  return local_b4;
}


