/* Module: sfppack1.dll
   Function: FUN_5cdcbda0
   Address: 5cdcbda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdcbda0(void *this,int param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  int *piVar9;
  byte *pbVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST1;
  uint local_d4;
  double local_d0;
  undefined8 local_c8;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a4;
  double local_a0;
  int local_94 [36];
  
  local_b8 = (double)CONCAT44(local_b8._4_4_,(uint)(param_1 == 2));
  local_a4 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  local_d4 = *param_3;
  local_bc = 0;
  local_c8._0_4_ = param_2;
  iVar5 = FUN_5cdc69f0(this,local_94);
  if ((param_1 == 0) && (*(int *)((int)this + 0xb4) != 0)) {
    local_bc = FUN_5cdcbbd0(this);
    if (local_bc < 0) {
      return local_bc;
    }
  }
  else if (((iVar5 != 0) || (*(int *)((int)this + 0xcc) == 0)) &&
          (((int)local_b8 == 0 && (local_bc = FUN_5cdcba70(this,local_94), local_bc < 0)))) {
    return local_bc;
  }
  *(undefined4 *)((int)this + 0xb4) = 1;
  if ((int)local_b8 != 0) {
    if (*(uint *)((int)this + 0x108) <= local_d4) {
      local_d4 = *(uint *)((int)this + 0x108);
    }
    iVar5 = *(int *)((int)this + 0x108) - local_d4;
    *(int *)((int)this + 0x108) = iVar5;
    if (iVar5 == 0) {
      local_bc = 1;
    }
  }
  pbVar10 = param_2;
  uVar6 = local_d4;
  if (local_a4 < 2) {
    if (local_d4 != 0) {
      local_d0 = (double)CONCAT44(local_d0._4_4_,local_d4);
      do {
        fVar11 = (float10)(int)(char)(*pbVar10 ^ 0x80) * (float10)_DAT_5ce13240 *
                 (float10)*(double *)((int)this + 0xe8);
        dVar2 = (double)((float10)*(double *)((int)this + 0x240) *
                         (float10)*(double *)((int)this + 0x250) +
                        fVar11 * (float10)*(double *)((int)this + 0x238));
        local_b0._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar6 = local_b0._4_4_ & 0x7ff00000;
        local_b0 = dVar2;
        if (uVar6 < 0x3df00000) {
          local_b0 = 0.0;
        }
        fVar12 = (float10)_DAT_5ce12bf0;
        fVar13 = (float10)fsin((float10)*(double *)((int)this + 0x268));
        *(undefined4 *)((int)this + 0x240) = (undefined4)local_b0;
        *(uint *)((int)this + 0x244) = local_b0._4_4_;
        local_b8._0_4_ = 0;
        local_a0 = (double)(fVar13 + (float10)_DAT_5ce12e70);
        *(double *)((int)this + 0x268) =
             *(double *)((int)this + 0x268) + *(double *)((int)this + 0x260);
        if (0 < *(int *)((int)this + 0xd8)) {
          piVar9 = (int *)((int)this + 0x110);
          pdVar8 = (double *)((int)this + 0x138);
          do {
            iVar5 = ftol();
            iVar5 = *piVar9 - iVar5;
            if (iVar5 < 0) {
              iVar5 = iVar5 + *(int *)((int)this + 0x270);
            }
            iVar1 = *piVar9 + -1;
            fVar12 = (float10)*(double *)(*(int *)((int)this + 0x100) + iVar5 * 8) *
                     (float10)*pdVar8 + extraout_ST0;
            *piVar9 = iVar1;
            if (iVar1 < 0) {
              *piVar9 = *(int *)((int)this + 0x270);
            }
            local_b8._0_4_ = (int)local_b8 + 1;
            pdVar8 = pdVar8 + 1;
            piVar9 = piVar9 + 1;
            pbVar10 = (byte *)local_c8;
            fVar11 = extraout_ST1;
          } while ((int)local_b8 < *(int *)((int)this + 0xd8));
        }
        dVar2 = (double)((float10)*(double *)((int)this + 0x278) *
                         (float10)*(double *)((int)this + 0x250) +
                        fVar12 * (float10)*(double *)((int)this + 0x238));
        local_c8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar6 = local_c8._4_4_ & 0x7ff00000;
        local_c8 = dVar2;
        if (uVar6 < 0x3df00000) {
          local_c8 = 0.0;
        }
        *(byte **)((int)this + 0x278) = (byte *)local_c8;
        *(uint *)((int)this + 0x27c) = local_c8._4_4_;
        dVar2 = (double)(fVar11 * (float10)*(double *)((int)this + 0xf0) +
                        (float10)local_c8 * (float10)*(double *)((int)this + 0xf8));
        local_b8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar6 = local_b8._4_4_ & 0x7ff00000;
        local_b8 = dVar2;
        if (uVar6 < 0x3df00000) {
          local_b8 = 0.0;
        }
        dVar2 = local_c8 * *(double *)((int)this + 0xe0) + local_b0;
        dVar3 = _DAT_5ce14458;
        if ((dVar2 <= _DAT_5ce14458) && (dVar3 = dVar2, dVar2 < _DAT_5ce14450)) {
          dVar3 = _DAT_5ce14450;
        }
        *(double *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 600) * 8) = dVar3;
        iVar5 = *(int *)((int)this + 600) + -1;
        *(int *)((int)this + 600) = iVar5;
        if (iVar5 < 0) {
          *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x270);
        }
        iVar5 = ftol();
        if (iVar5 < -0x80) {
          bVar4 = 0;
        }
        else if (iVar5 < 0x80) {
          bVar4 = (byte)iVar5 ^ 0x80;
        }
        else {
          bVar4 = 0xff;
        }
        *pbVar10 = bVar4;
        pbVar10 = pbVar10 + local_a4;
        iVar5 = local_d0._0_4_ + -1;
        local_d0 = (double)CONCAT44(local_d0._4_4_,iVar5);
        local_c8._0_4_ = pbVar10;
      } while (iVar5 != 0);
    }
  }
  else {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      local_b0 = (double)(int)(char)(*pbVar10 ^ 0x80) * _DAT_5ce13240;
      local_d0 = (double)(int)(char)(pbVar10[1] ^ 0x80) * _DAT_5ce13240;
      FUN_5cdcda70(this,(double *)&local_b0,&local_d0);
      iVar5 = ftol();
      if (iVar5 < -0x80) {
        bVar4 = 0;
      }
      else if (iVar5 < 0x80) {
        bVar4 = (byte)iVar5 ^ 0x80;
      }
      else {
        bVar4 = 0xff;
      }
      *pbVar10 = bVar4;
      iVar5 = ftol();
      if (iVar5 < -0x80) {
        bVar4 = 0;
      }
      else if (iVar5 < 0x80) {
        bVar4 = (byte)iVar5 ^ 0x80;
      }
      else {
        bVar4 = 0xff;
      }
      pbVar10[1] = bVar4;
      pbVar10 = pbVar10 + local_a4;
    }
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdcc301;
  uVar6 = *(uint *)(*(int *)((int)this + 200) + 4);
  local_d0._0_4_ = local_d4;
  if (*(int *)((int)this + 0x2a0) == 0) {
    iVar5 = *(int *)((int)this + 0x28c) - local_d4;
    *(int *)((int)this + 0x28c) = iVar5;
    if (iVar5 < 1) {
      uVar7 = rand();
      *(uint *)((int)this + 0x28c) = (uVar7 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar7 = rand();
      *(uint *)((int)this + 0x298) = (uVar7 & 0x1f) + 1;
      uVar7 = rand();
      *(uint *)((int)this + 0x29c) = (uVar7 & 0x1f) + 1;
      *(uint *)((int)this + 0x2a0) = uVar6 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdcc201;
    }
    local_d0._0_4_ = 0;
  }
  else {
LAB_5cdcc201:
    uVar6 = *(uint *)((int)this + 0x2a0);
    if (uVar6 <= local_d4) {
      local_d0._0_4_ = uVar6;
    }
    *(uint *)((int)this + 0x2a0) = uVar6 - local_d0._0_4_;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 200) + 2);
  if (local_d0._0_4_ != 0) {
    do {
      DAT_5ce2a104 = DAT_5ce2a104 + *(int *)((int)this + 0x298);
      local_c8._0_4_ = (byte *)(int)(char)(*param_2 ^ 0x80);
      iVar5 = ftol();
      if (iVar5 < -0x80) {
        bVar4 = 0;
      }
      else if (iVar5 < 0x80) {
        bVar4 = (byte)iVar5 ^ 0x80;
      }
      else {
        bVar4 = 0xff;
      }
      *param_2 = bVar4;
      if (1 < uVar6) {
        DAT_5ce2a108 = DAT_5ce2a108 + 1 + *(int *)((int)this + 0x29c);
        local_c8._0_4_ = (byte *)(int)(char)(param_2[1] ^ 0x80);
        uVar7 = FUN_5cdcde00();
        param_2[1] = (byte)uVar7;
      }
      param_2 = param_2 + uVar6;
      iVar5 = local_d0._0_4_ + -1;
      local_d0 = (double)CONCAT44(local_d0._4_4_,iVar5);
    } while (iVar5 != 0);
  }
LAB_5cdcc301:
  *param_3 = local_d4;
  return local_bc;
}


