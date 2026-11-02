/* Module: sfppack1.dll
   Function: FUN_5cdcce90
   Address: 5cdcce90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdcce90(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  int *piVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_94 [36];
  
  local_c4 = 0;
  uVar10 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  local_ec = *param_3;
  if (*(int *)((int)this + 0xd4) != 0) {
    if (param_4 != 0) {
      *param_3 = 0;
      return 1;
    }
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)this + 0x104);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  iVar7 = FUN_5cdc69f0(this,local_94);
  if ((param_1 == 0) && (*(int *)((int)this + 0xb4) != 0)) {
    local_c4 = FUN_5cdcbbd0(this);
    if (local_c4 < 0) {
      return local_c4;
    }
  }
  else if (((iVar7 != 0) || (*(int *)((int)this + 0xcc) == 0)) &&
          (((param_1 != 2 && (param_4 == 0)) &&
           (local_c4 = FUN_5cdcba70(this,local_94), local_c4 < 0)))) {
    return local_c4;
  }
  *(undefined4 *)((int)this + 0xb4) = 1;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0x108) <= local_ec) {
      local_ec = *(uint *)((int)this + 0x108);
    }
    iVar7 = *(int *)((int)this + 0x108) - local_ec;
    *(int *)((int)this + 0x108) = iVar7;
    if (iVar7 == 0) {
      local_c4 = 1;
    }
  }
  if (param_4 == 0) {
    *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)this + 0x104);
  }
  else {
    if ((int)*(uint *)((int)this + 0x10c) <= (int)local_ec) {
      local_ec = *(uint *)((int)this + 0x10c);
    }
    iVar7 = *(int *)((int)this + 0x10c) - local_ec;
    *(int *)((int)this + 0x10c) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)((int)this + 0xd4) = 1;
    }
  }
  local_c0 = _DAT_5ce12bf0;
  uVar13 = local_ec;
  pfVar6 = param_2;
  if (uVar10 < 2) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      fVar14 = (float10)*pfVar6 * (float10)*(double *)((int)this + 0xe8);
      dVar2 = (double)((float10)*(double *)((int)this + 0x240) *
                       (float10)*(double *)((int)this + 0x250) +
                      fVar14 * (float10)*(double *)((int)this + 0x238));
      local_d0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar8 = local_d0._4_4_ & 0x7ff00000;
      local_d0 = dVar2;
      if (uVar8 < 0x3df00000) {
        local_d0 = 0.0;
      }
      fVar15 = (float10)_DAT_5ce12bf0;
      fsin((float10)*(double *)((int)this + 0x268));
      *(undefined4 *)((int)this + 0x240) = (undefined4)local_d0;
      *(uint *)((int)this + 0x244) = local_d0._4_4_;
      iVar7 = 0;
      *(double *)((int)this + 0x268) =
           *(double *)((int)this + 0x268) + *(double *)((int)this + 0x260);
      if (0 < *(int *)((int)this + 0xd8)) {
        piVar12 = (int *)((int)this + 0x110);
        pdVar11 = (double *)((int)this + 0x138);
        do {
          iVar9 = ftol();
          iVar9 = *piVar12 - iVar9;
          if (iVar9 < 0) {
            iVar9 = iVar9 + *(int *)((int)this + 0x270);
          }
          iVar1 = *piVar12 + -1;
          fVar15 = (float10)*(double *)(*(int *)((int)this + 0x100) + iVar9 * 8) * (float10)*pdVar11
                   + extraout_ST0;
          *piVar12 = iVar1;
          if (iVar1 < 0) {
            *piVar12 = *(int *)((int)this + 0x270);
          }
          iVar7 = iVar7 + 1;
          pdVar11 = pdVar11 + 1;
          piVar12 = piVar12 + 1;
          fVar14 = extraout_ST1;
        } while (iVar7 < *(int *)((int)this + 0xd8));
      }
      dVar2 = (double)((float10)*(double *)((int)this + 0x278) *
                       (float10)*(double *)((int)this + 0x250) +
                      fVar15 * (float10)*(double *)((int)this + 0x238));
      local_e0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar8 = local_e0._4_4_ & 0x7ff00000;
      local_e0 = dVar2;
      if (uVar8 < 0x3df00000) {
        local_e0 = 0.0;
      }
      *(undefined4 *)((int)this + 0x278) = (undefined4)local_e0;
      *(uint *)((int)this + 0x27c) = local_e0._4_4_;
      dVar2 = (double)(fVar14 * (float10)*(double *)((int)this + 0xf0) +
                      (float10)local_e0 * (float10)*(double *)((int)this + 0xf8));
      local_b8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar8 = local_b8._4_4_ & 0x7ff00000;
      local_b8 = dVar2;
      if (uVar8 < 0x3df00000) {
        local_b8 = 0.0;
      }
      local_d0 = local_e0 * *(double *)((int)this + 0xe0) + local_d0;
      dVar2 = _DAT_5ce14458;
      if ((local_d0 <= _DAT_5ce14458) && (dVar2 = local_d0, local_d0 < _DAT_5ce14450)) {
        dVar2 = _DAT_5ce14450;
      }
      *(double *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 600) * 8) = dVar2;
      iVar7 = *(int *)((int)this + 600) + -1;
      *(int *)((int)this + 600) = iVar7;
      if (iVar7 < 0) {
        *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x270);
      }
      *pfVar6 = (float)local_b8;
      pfVar6 = pfVar6 + uVar10;
    }
  }
  else {
    for (; _DAT_5ce12bf0 = local_c0, uVar13 != 0; uVar13 = uVar13 - 1) {
      fVar14 = (float10)*pfVar6 * (float10)*(double *)((int)this + 0xe8);
      dVar2 = (double)(pfVar6[1] * (float)*(double *)((int)this + 0xe8));
      dVar3 = (double)(fVar14 * (float10)*(double *)((int)this + 0x238) +
                      (float10)*(double *)((int)this + 0x240) *
                      (float10)*(double *)((int)this + 0x250));
      local_b8._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
      uVar8 = local_b8._4_4_ & 0x7ff00000;
      local_b8 = dVar3;
      if (uVar8 < 0x3df00000) {
        local_b8 = 0.0;
      }
      dVar3 = *(double *)((int)this + 0x250) * *(double *)((int)this + 0x248) +
              dVar2 * *(double *)((int)this + 0x238);
      local_d0._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
      uVar8 = local_d0._4_4_ & 0x7ff00000;
      local_d0 = dVar3;
      if (uVar8 < 0x3df00000) {
        local_d0 = 0.0;
      }
      fVar15 = (float10)local_c0;
      fsin((float10)*(double *)((int)this + 0x268));
      *(undefined4 *)((int)this + 0x240) = (undefined4)local_b8;
      *(undefined4 *)((int)this + 0x248) = (undefined4)local_d0;
      *(uint *)((int)this + 0x244) = local_b8._4_4_;
      *(uint *)((int)this + 0x24c) = local_d0._4_4_;
      iVar7 = 0;
      *(double *)((int)this + 0x268) =
           *(double *)((int)this + 0x268) + *(double *)((int)this + 0x260);
      if (0 < *(int *)((int)this + 0xd8)) {
        piVar12 = (int *)((int)this + 0x110);
        pdVar11 = (double *)((int)this + 0x138);
        do {
          fVar14 = fVar15;
          iVar9 = ftol();
          iVar9 = *piVar12 - iVar9;
          if (iVar9 < 0) {
            iVar9 = iVar9 + *(int *)((int)this + 0x270);
          }
          fVar15 = (float10)*(double *)(*(int *)((int)this + 0x100) + iVar9 * 8) * (float10)*pdVar11
                   + extraout_ST1_00;
          dVar3 = pdVar11[8];
          dVar4 = *(double *)(*(int *)((int)this + 0x100) + iVar9 * 8);
          iVar9 = *piVar12 + -1;
          *piVar12 = iVar9;
          if (iVar9 < 0) {
            *piVar12 = *(int *)((int)this + 0x270);
          }
          iVar7 = iVar7 + 1;
          pdVar11 = pdVar11 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar7 < *(int *)((int)this + 0xd8));
        local_c0 = (double)((float10)dVar3 * (float10)dVar4 + extraout_ST0_00);
      }
      dVar3 = (double)(fVar15 * (float10)*(double *)((int)this + 0x238) +
                      (float10)*(double *)((int)this + 0x278) *
                      (float10)*(double *)((int)this + 0x250));
      local_d8._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
      uVar8 = local_d8._4_4_ & 0x7ff00000;
      local_d8 = dVar3;
      if (uVar8 < 0x3df00000) {
        local_d8 = 0.0;
      }
      *(undefined4 *)((int)this + 0x278) = (undefined4)local_d8;
      *(uint *)((int)this + 0x27c) = local_d8._4_4_;
      dVar3 = local_c0 * *(double *)((int)this + 0x238) +
              *(double *)((int)this + 0x280) * *(double *)((int)this + 0x250);
      local_e8._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
      uVar8 = local_e8._4_4_ & 0x7ff00000;
      local_e8 = dVar3;
      if (uVar8 < 0x3df00000) {
        local_e8 = 0.0;
      }
      *(undefined4 *)((int)this + 0x280) = (undefined4)local_e8;
      *(uint *)((int)this + 0x284) = local_e8._4_4_;
      dVar3 = (double)(fVar14 * (float10)*(double *)((int)this + 0xf0) +
                      (float10)local_d8 * (float10)*(double *)((int)this + 0xf8));
      local_c0._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
      uVar8 = local_c0._4_4_ & 0x7ff00000;
      local_c0 = dVar3;
      if (uVar8 < 0x3df00000) {
        local_c0 = 0.0;
      }
      fVar5 = (float)local_c0;
      dVar2 = dVar2 * *(double *)((int)this + 0xf0) + local_e8 * *(double *)((int)this + 0xf8);
      local_c0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar8 = local_c0._4_4_ & 0x7ff00000;
      local_c0 = dVar2;
      if (uVar8 < 0x3df00000) {
        local_c0 = 0.0;
      }
      dVar2 = (local_d0 + local_b8 + (local_e8 + local_d8) * *(double *)((int)this + 0xe0)) *
              _DAT_5ce12df8;
      dVar3 = _DAT_5ce14458;
      if ((dVar2 <= _DAT_5ce14458) && (dVar3 = dVar2, dVar2 < _DAT_5ce14450)) {
        dVar3 = _DAT_5ce14450;
      }
      *(double *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 600) * 8) = dVar3;
      iVar7 = *(int *)((int)this + 600) + -1;
      *(int *)((int)this + 600) = iVar7;
      if (iVar7 < 0) {
        *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x270);
      }
      *pfVar6 = fVar5;
      pfVar6[1] = (float)local_c0;
      local_c0 = _DAT_5ce12bf0;
      pfVar6 = pfVar6 + uVar10;
    }
  }
  if (DAT_5ce237e8 == 0) {
    uVar10 = FUN_5cdcdd80(param_2,local_ec,(uint)*(ushort *)(*(int *)((int)this + 200) + 2),
                          *(uint *)(*(int *)((int)this + 200) + 4),(int *)((int)this + 0x28c));
    uVar13 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar8 = DAT_5ce2a0e4 % *(uint *)((int)this + 0x290);
      DAT_5ce2a0e4 = DAT_5ce2a0e4 + *(int *)((int)this + 0x298);
      *param_2 = *(float *)(*(int *)((int)this + 0x294) + uVar8 * 4) + *param_2;
      if (1 < uVar13) {
        uVar8 = DAT_5ce2a0e8 % *(uint *)((int)this + 0x290);
        DAT_5ce2a0e8 = DAT_5ce2a0e8 + 1 + *(int *)((int)this + 0x29c);
        param_2[1] = *(float *)(*(int *)((int)this + 0x294) + uVar8 * 4) + param_2[1];
      }
      param_2 = param_2 + uVar13;
    }
  }
  *param_3 = local_ec;
  return local_c4;
}


