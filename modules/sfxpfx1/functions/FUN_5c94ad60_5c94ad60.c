/* Module: sfxpfx1.dll
   Function: FUN_5c94ad60
   Address: 5c94ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94ad60(void *this,int param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double *pdVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  double local_50;
  uint local_44;
  undefined8 local_40;
  undefined4 local_38 [13];
  
  local_5c = 0;
  local_50 = (double)CONCAT44(local_50._4_4_,(uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2));
  local_60 = *param_3;
  local_58 = (double)CONCAT44(local_58._4_4_,param_2);
  iVar13 = FUN_5c9476d0(this,local_38);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    local_5c = FUN_5c94a1c0(this);
    if (local_5c < 0) {
      return local_5c;
    }
  }
  else if (((iVar13 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          ((param_1 != 2 && (local_5c = FUN_5c9497d0(this,(int)local_38), local_5c < 0)))) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0x78) <= local_60) {
      local_60 = *(uint *)((int)this + 0x78);
    }
    iVar13 = *(int *)((int)this + 0x78) - local_60;
    *(int *)((int)this + 0x78) = iVar13;
    if (iVar13 == 0) {
      local_5c = 1;
    }
  }
  local_44 = local_60;
  if (local_50._0_4_ < 2) {
    for (; local_44 != 0; local_44 = local_44 - 1) {
      piVar1 = (int *)local_58;
      local_40 = (double)*(int *)local_58 * _DAT_5c98ba08 * *(double *)((int)this + 0x88);
      dVar2 = local_40 * *(double *)((int)this + 0x90) +
              *(double *)((int)this + 0x98) * *(double *)((int)this + 0xa0);
      local_58._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar16 = local_58._4_4_ & 0x7ff00000;
      local_58 = dVar2;
      if (uVar16 < 0x3df00000) {
        local_58 = 0.0;
      }
      *(int **)((int)this + 0xa0) = (int *)local_58;
      *(uint *)((int)this + 0xa4) = local_58._4_4_;
      if (*(int *)((int)this + 0x38) != 0) {
        FUN_5c94ba60((double *)&local_58,(double *)((int)this + 0x458));
      }
      iVar13 = 0;
      dVar2 = _DAT_5c98b970;
      if (0 < *(int *)((int)this + 0x80)) {
        puVar14 = (uint *)((int)this + 0xac);
        do {
          dVar2 = dVar2 + *(double *)*puVar14;
          dVar3 = *(double *)((int)this + 0x98) * *(double *)(puVar14 + 5) +
                  *(double *)*puVar14 * *(double *)((int)this + 0x90);
          *(double *)(puVar14 + 5) = dVar3;
          *(double *)*puVar14 = (dVar3 + local_58) * *(double *)(puVar14 + 3);
          uVar16 = *puVar14;
          *puVar14 = uVar16 + 8;
          if (puVar14[1] <= uVar16 + 8) {
            *puVar14 = puVar14[-1];
          }
          iVar13 = iVar13 + 1;
          puVar14 = puVar14 + 10;
        } while (iVar13 < *(int *)((int)this + 0x80));
      }
      **(double **)((int)this + 0x3cc) = dVar2;
      uVar16 = *(int *)((int)this + 0x3cc) + 8;
      *(uint *)((int)this + 0x3cc) = uVar16;
      if (*(uint *)((int)this + 0x3c8) <= uVar16) {
        *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)((int)this + 0x3d0);
      }
      pdVar12 = *(double **)((int)this + 0x41c);
      dVar2 = **(double **)((int)this + 0x418);
      dVar3 = *(double *)((int)this + 1000);
      dVar4 = **(double **)((int)this + 0x414);
      dVar5 = *(double *)((int)this + 0x3e0);
      dVar6 = *pdVar12;
      dVar7 = *(double *)((int)this + 0x3f0);
      dVar8 = *(double *)((int)this + 0x438);
      dVar9 = **(double **)((int)this + 0x3cc);
      dVar10 = *(double *)((int)this + 0x440);
      dVar11 = *(double *)((int)this + 0x448);
      *(undefined4 *)pdVar12 = (undefined4)local_40;
      *(undefined4 *)((int)pdVar12 + 4) = local_40._4_4_;
      uVar15 = *(int *)((int)this + 0x414) + 8;
      *(uint *)((int)this + 0x414) = uVar15;
      uVar16 = *(uint *)((int)this + 0x420);
      if (uVar16 <= uVar15) {
        *(undefined4 *)((int)this + 0x414) = *(undefined4 *)((int)this + 0x410);
      }
      uVar15 = *(int *)((int)this + 0x418) + 8;
      *(uint *)((int)this + 0x418) = uVar15;
      if (uVar16 <= uVar15) {
        *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x410);
      }
      uVar15 = *(int *)((int)this + 0x41c) + 8;
      *(uint *)((int)this + 0x41c) = uVar15;
      if (uVar16 <= uVar15) {
        *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x410);
      }
      local_40 = (local_40 * dVar11 +
                 dVar9 * dVar10 + (dVar6 * dVar7 + dVar4 * dVar5 + dVar2 * dVar3) * dVar8) *
                 _DAT_5c98ba00;
      if (_DAT_5c98b9f8 <= local_40) {
        if (local_40 <= _DAT_5c98b9f0) {
          iVar13 = ftol();
        }
        else {
          iVar13 = 0x7fffffff;
        }
      }
      else {
        iVar13 = -0x80000000;
      }
      *piVar1 = iVar13;
      local_58 = (double)CONCAT44(local_58._4_4_,piVar1 + local_50._0_4_);
    }
  }
  else if (local_60 != 0) {
    local_44 = local_50._0_4_ * 4;
    uVar16 = local_60;
    do {
      piVar1 = (int *)local_58;
      local_40 = (double)*(int *)local_58 * _DAT_5c98ba08;
      local_50 = (double)((int *)local_58)[1] * _DAT_5c98ba08;
      FUN_5c94ba90(this,(double *)&local_40,&local_50);
      local_40 = local_40 * _DAT_5c98ba00;
      if (_DAT_5c98b9f8 <= local_40) {
        if (local_40 <= _DAT_5c98b9f0) {
          iVar13 = ftol();
        }
        else {
          iVar13 = 0x7fffffff;
        }
      }
      else {
        iVar13 = -0x80000000;
      }
      local_40 = local_50 * _DAT_5c98ba00;
      *piVar1 = iVar13;
      if (_DAT_5c98b9f8 <= local_40) {
        if (local_40 <= _DAT_5c98b9f0) {
          iVar13 = ftol();
        }
        else {
          iVar13 = 0x7fffffff;
        }
      }
      else {
        iVar13 = -0x80000000;
      }
      piVar1[1] = iVar13;
      uVar16 = uVar16 - 1;
      local_58 = (double)CONCAT44(local_58._4_4_,(int)piVar1 + local_44);
    } while (uVar16 != 0);
  }
  if (DAT_5c998760 != 0) goto LAB_5c94b1ff;
  piVar1 = (int *)((int)this + 0x48c);
  uVar16 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  local_44 = local_60;
  if (*(int *)((int)this + 0x4a0) == 0) {
    iVar13 = *piVar1;
    *piVar1 = iVar13 - local_60;
    if ((int)(iVar13 - local_60) < 1) {
      uVar15 = rand();
      *piVar1 = (uVar15 & 3) * (uVar16 >> 4) + uVar16 * 4;
      uVar15 = rand();
      *(uint *)((int)this + 0x498) = (uVar15 & 0x1f) + 1;
      uVar15 = rand();
      *(uint *)((int)this + 0x49c) = (uVar15 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a0) = uVar16 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94b1cc;
    }
    uVar16 = 0;
  }
  else {
LAB_5c94b1cc:
    uVar16 = *(uint *)((int)this + 0x4a0);
    if (uVar16 <= local_60) {
      local_44 = uVar16;
    }
    *(uint *)((int)this + 0x4a0) = uVar16 - local_44;
    uVar16 = local_44;
  }
  FUN_5c94c060(param_2,uVar16,(uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x6c) + 4),(int)piVar1);
LAB_5c94b1ff:
  *param_3 = local_60;
  return local_5c;
}


