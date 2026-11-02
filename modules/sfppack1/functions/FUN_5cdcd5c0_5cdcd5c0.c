/* Module: sfppack1.dll
   Function: FUN_5cdcd5c0
   Address: 5cdcd5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdcd5c0(void *this,int param_1,double *param_2,uint *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST1;
  uint local_cc;
  uint local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  double local_a0;
  int local_94 [36];
  
  local_a8 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  local_c8 = *param_3;
  local_c4 = 0;
  local_b0 = (double)CONCAT44(local_b0._4_4_,param_2);
  iVar4 = FUN_5cdc69f0(this,local_94);
  if ((param_1 == 0) && (*(int *)((int)this + 0xb4) != 0)) {
    local_c4 = FUN_5cdcbbd0(this);
    if (local_c4 < 0) {
      return local_c4;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0xcc) == 0)) &&
          ((param_1 != 2 && (local_c4 = FUN_5cdcba70(this,local_94), local_c4 < 0)))) {
    return local_c4;
  }
  uVar7 = local_a8;
  *(undefined4 *)((int)this + 0xb4) = 1;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0x108) <= local_c8) {
      local_c8 = *(uint *)((int)this + 0x108);
    }
    iVar4 = *(int *)((int)this + 0x108) - local_c8;
    *(int *)((int)this + 0x108) = iVar4;
    if (iVar4 == 0) {
      local_c4 = 1;
    }
  }
  pdVar9 = param_2;
  uVar8 = local_c8;
  if (local_a8 < 2) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      fVar11 = (float10)*pdVar9 * (float10)*(double *)((int)this + 0xe8);
      dVar2 = (double)(fVar11 * (float10)*(double *)((int)this + 0x238) +
                      (float10)*(double *)((int)this + 0x250) *
                      (float10)*(double *)((int)this + 0x240));
      local_b8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar5 = local_b8._4_4_ & 0x7ff00000;
      local_b8 = dVar2;
      if (uVar5 < 0x3df00000) {
        local_b8 = 0.0;
      }
      fVar12 = (float10)_DAT_5ce12bf0;
      fVar13 = (float10)fsin((float10)*(double *)((int)this + 0x268));
      *(undefined4 *)((int)this + 0x240) = (undefined4)local_b8;
      *(uint *)((int)this + 0x244) = local_b8._4_4_;
      iVar4 = 0;
      local_a0 = (double)(fVar13 + (float10)_DAT_5ce12e70);
      *(double *)((int)this + 0x268) =
           *(double *)((int)this + 0x260) + *(double *)((int)this + 0x268);
      if (0 < *(int *)((int)this + 0xd8)) {
        piVar10 = (int *)((int)this + 0x110);
        pdVar9 = (double *)((int)this + 0x138);
        do {
          iVar6 = ftol();
          iVar6 = *piVar10 - iVar6;
          if (iVar6 < 0) {
            iVar6 = iVar6 + *(int *)((int)this + 0x270);
          }
          iVar1 = *piVar10 + -1;
          fVar12 = (float10)*(double *)(*(int *)((int)this + 0x100) + iVar6 * 8) * (float10)*pdVar9
                   + extraout_ST0;
          *piVar10 = iVar1;
          if (iVar1 < 0) {
            *piVar10 = *(int *)((int)this + 0x270);
          }
          iVar4 = iVar4 + 1;
          pdVar9 = pdVar9 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar4 < *(int *)((int)this + 0xd8));
        uVar7 = local_a8;
        pdVar9 = (double *)local_b0;
        fVar11 = extraout_ST1;
      }
      dVar2 = (double)(fVar12 * (float10)*(double *)((int)this + 0x238) +
                      (float10)*(double *)((int)this + 0x250) *
                      (float10)*(double *)((int)this + 0x278));
      local_c0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar5 = local_c0._4_4_ & 0x7ff00000;
      local_c0 = dVar2;
      if (uVar5 < 0x3df00000) {
        local_c0 = 0.0;
      }
      *(undefined4 *)((int)this + 0x278) = (undefined4)local_c0;
      *(uint *)((int)this + 0x27c) = local_c0._4_4_;
      dVar2 = (double)(fVar11 * (float10)*(double *)((int)this + 0xf0) +
                      (float10)local_c0 * (float10)*(double *)((int)this + 0xf8));
      local_b0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar5 = local_b0._4_4_ & 0x7ff00000;
      local_b0 = dVar2;
      if (uVar5 < 0x3df00000) {
        local_b0 = 0.0;
      }
      dVar2 = local_c0 * *(double *)((int)this + 0xe0) + local_b8;
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
      *pdVar9 = local_b0;
      local_b0 = (double)CONCAT44(local_b0._4_4_,pdVar9 + uVar7);
      pdVar9 = pdVar9 + uVar7;
    }
  }
  else {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      local_a8 = *(uint *)(pdVar9 + 1);
      local_b8 = *pdVar9;
      local_a4 = *(undefined4 *)((int)pdVar9 + 0xc);
      FUN_5cdcda70(this,(double *)&local_b8,(double *)&local_a8);
      *(undefined4 *)pdVar9 = (undefined4)local_b8;
      *(uint *)(pdVar9 + 1) = local_a8;
      *(uint *)((int)pdVar9 + 4) = local_b8._4_4_;
      *(undefined4 *)((int)pdVar9 + 0xc) = local_a4;
      pdVar9 = pdVar9 + uVar7;
    }
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdcda54;
  uVar7 = *(uint *)(*(int *)((int)this + 200) + 4);
  if (*(int *)((int)this + 0x2a0) == 0) {
    iVar4 = *(int *)((int)this + 0x28c) - local_c8;
    *(int *)((int)this + 0x28c) = iVar4;
    if (iVar4 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0x28c) = (uVar8 & 3) * (uVar7 >> 4) + uVar7 * 4;
      uVar8 = rand();
      *(uint *)((int)this + 0x298) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x29c) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x2a0) = uVar7 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdcd9ab;
    }
    local_cc = 0;
  }
  else {
LAB_5cdcd9ab:
    uVar7 = *(uint *)((int)this + 0x2a0);
    local_cc = local_c8;
    if (uVar7 <= local_c8) {
      local_cc = uVar7;
    }
    *(uint *)((int)this + 0x2a0) = uVar7 - local_cc;
  }
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  for (; local_cc != 0; local_cc = local_cc - 1) {
    uVar8 = DAT_5ce2a0dc % *(uint *)((int)this + 0x290);
    DAT_5ce2a0dc = DAT_5ce2a0dc + *(int *)((int)this + 0x298);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x294) + uVar8 * 4) + (float)*param_2);
    if (1 < uVar7) {
      uVar8 = DAT_5ce2a0e0 % *(uint *)((int)this + 0x290);
      DAT_5ce2a0e0 = DAT_5ce2a0e0 + 1 + *(int *)((int)this + 0x29c);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x294) + uVar8 * 4) + (float)param_2[1])
      ;
    }
    param_2 = param_2 + uVar7;
  }
LAB_5cdcda54:
  *param_3 = local_c8;
  return local_c4;
}


