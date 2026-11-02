/* Module: sfppack1.dll
   Function: FUN_5cdcc320
   Address: 5cdcc320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdcc320(void *this,int param_1,short *param_2,uint *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  short *psVar7;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST1;
  uint local_cc;
  double local_c8;
  undefined8 local_c0;
  int local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  int local_94 [36];
  
  local_c0 = (double)CONCAT44(local_c0._4_4_,(uint)(param_1 == 2));
  local_b4 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  local_cc = *param_3;
  local_b8 = 0;
  local_a8 = (double)CONCAT44(local_a8._4_4_,param_2);
  iVar4 = FUN_5cdc69f0(this,local_94);
  if ((param_1 == 0) && (*(int *)((int)this + 0xb4) != 0)) {
    local_b8 = FUN_5cdcbbd0(this);
    if (local_b8 < 0) {
      return local_b8;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0xcc) == 0)) &&
          (((int)local_c0 == 0 && (local_b8 = FUN_5cdcba70(this,local_94), local_b8 < 0)))) {
    return local_b8;
  }
  *(undefined4 *)((int)this + 0xb4) = 1;
  if ((int)local_c0 != 0) {
    if (*(uint *)((int)this + 0x108) <= local_cc) {
      local_cc = *(uint *)((int)this + 0x108);
    }
    iVar4 = *(int *)((int)this + 0x108) - local_cc;
    *(int *)((int)this + 0x108) = iVar4;
    if (iVar4 == 0) {
      local_b8 = 1;
    }
  }
  if (local_b4 < 2) {
    if (local_cc != 0) {
      local_c8 = (double)CONCAT44(local_c8._4_4_,local_cc);
      psVar7 = param_2;
      uVar9 = local_b4;
      do {
        fVar10 = (float10)(int)*psVar7 * (float10)_DAT_5ce13270 *
                 (float10)*(double *)((int)this + 0xe8);
        dVar2 = (double)(fVar10 * (float10)*(double *)((int)this + 0x238) +
                        (float10)*(double *)((int)this + 0x250) *
                        (float10)*(double *)((int)this + 0x240));
        local_b0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_b0._4_4_ & 0x7ff00000;
        local_b0 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_b0 = 0.0;
        }
        fVar11 = (float10)_DAT_5ce12bf0;
        fVar12 = (float10)fsin((float10)*(double *)((int)this + 0x268));
        *(undefined4 *)((int)this + 0x240) = (undefined4)local_b0;
        *(uint *)((int)this + 0x244) = local_b0._4_4_;
        local_c0._0_4_ = 0;
        local_a0 = (double)(fVar12 + (float10)_DAT_5ce12e70);
        *(double *)((int)this + 0x268) =
             *(double *)((int)this + 0x260) + *(double *)((int)this + 0x268);
        if (0 < *(int *)((int)this + 0xd8)) {
          piVar8 = (int *)((int)this + 0x110);
          pdVar6 = (double *)((int)this + 0x138);
          do {
            iVar4 = ftol();
            iVar4 = *piVar8 - iVar4;
            if (iVar4 < 0) {
              iVar4 = iVar4 + *(int *)((int)this + 0x270);
            }
            iVar1 = *piVar8 + -1;
            fVar11 = (float10)*(double *)(*(int *)((int)this + 0x100) + iVar4 * 8) *
                     (float10)*pdVar6 + extraout_ST0;
            *piVar8 = iVar1;
            if (iVar1 < 0) {
              *piVar8 = *(int *)((int)this + 0x270);
            }
            local_c0._0_4_ = (int)local_c0 + 1;
            pdVar6 = pdVar6 + 1;
            piVar8 = piVar8 + 1;
          } while ((int)local_c0 < *(int *)((int)this + 0xd8));
          psVar7 = (short *)local_a8;
          uVar9 = local_b4;
          fVar10 = extraout_ST1;
        }
        dVar2 = (double)(fVar11 * (float10)*(double *)((int)this + 0x238) +
                        (float10)*(double *)((int)this + 0x250) *
                        (float10)*(double *)((int)this + 0x278));
        local_c0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_c0._4_4_ & 0x7ff00000;
        local_c0 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_c0 = 0.0;
        }
        *(int *)((int)this + 0x278) = (int)local_c0;
        *(uint *)((int)this + 0x27c) = local_c0._4_4_;
        dVar2 = (double)(fVar10 * (float10)*(double *)((int)this + 0xf0) +
                        (float10)local_c0 * (float10)*(double *)((int)this + 0xf8));
        local_a8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_a8._4_4_ & 0x7ff00000;
        local_a8 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_a8 = 0.0;
        }
        dVar2 = local_c0 * *(double *)((int)this + 0xe0) + local_b0;
        dVar3 = _DAT_5ce14458;
        if ((dVar2 <= _DAT_5ce14458) && (dVar3 = dVar2, dVar2 < _DAT_5ce14450)) {
          dVar3 = _DAT_5ce14450;
        }
        *(double *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 600) * 8) = dVar3;
        iVar4 = *(int *)((int)this + 600) + -1;
        *(int *)((int)this + 600) = iVar4;
        if (iVar4 < 0) {
          *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x270);
        }
        iVar4 = ftol();
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        *psVar7 = (short)iVar4;
        psVar7 = psVar7 + uVar9;
        iVar4 = local_c8._0_4_ + -1;
        local_a8 = (double)CONCAT44(local_a8._4_4_,psVar7);
        local_c8 = (double)CONCAT44(local_c8._4_4_,iVar4);
      } while (iVar4 != 0);
LAB_5cdcc706:
    }
  }
  else if (local_cc != 0) {
    local_b4 = local_b4 * 2;
    psVar7 = param_2;
    uVar9 = local_cc;
    do {
      local_b0 = (double)(int)*psVar7 * _DAT_5ce13270;
      local_c8 = (double)(int)psVar7[1] * _DAT_5ce13270;
      FUN_5cdcda70(this,(double *)&local_b0,&local_c8);
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *psVar7 = (short)iVar4;
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      psVar7[1] = (short)iVar4;
      psVar7 = (short *)((int)psVar7 + local_b4);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    goto LAB_5cdcc706;
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdcc88a;
  uVar9 = *(uint *)(*(int *)((int)this + 200) + 4);
  local_c8._0_4_ = local_cc;
  if (*(int *)((int)this + 0x2a0) == 0) {
    iVar4 = *(int *)((int)this + 0x28c) - local_cc;
    *(int *)((int)this + 0x28c) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x28c) = (uVar5 & 3) * (uVar9 >> 4) + uVar9 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0x298) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x29c) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x2a0) = uVar9 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdcc796;
    }
    local_c8._0_4_ = 0;
  }
  else {
LAB_5cdcc796:
    uVar9 = *(uint *)((int)this + 0x2a0);
    if (uVar9 <= local_cc) {
      local_c8._0_4_ = uVar9;
    }
    *(uint *)((int)this + 0x2a0) = uVar9 - local_c8._0_4_;
  }
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  if (local_c8._0_4_ != 0) {
    do {
      DAT_5ce2a0f4 = DAT_5ce2a0f4 + *(int *)((int)this + 0x298);
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *param_2 = *param_2 + (short)iVar4;
      if (1 < uVar9) {
        DAT_5ce2a0f8 = DAT_5ce2a0f8 + 1 + *(int *)((int)this + 0x29c);
        iVar4 = ftol();
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        param_2[1] = param_2[1] + (short)iVar4;
      }
      param_2 = param_2 + uVar9;
      iVar4 = local_c8._0_4_ + -1;
      local_c8 = (double)CONCAT44(local_c8._4_4_,iVar4);
    } while (iVar4 != 0);
  }
LAB_5cdcc88a:
  *param_3 = local_cc;
  return local_b8;
}


