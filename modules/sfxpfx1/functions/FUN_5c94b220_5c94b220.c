/* Module: sfxpfx1.dll
   Function: FUN_5c94b220
   Address: 5c94b220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94b220(void *this,int param_1,float *param_2,uint *param_3)

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
  float *pfVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  double local_48;
  double local_40;
  undefined4 local_38 [13];
  
  local_5c = 0;
  uVar13 = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  local_60 = *param_3;
  local_58._0_4_ = param_2;
  iVar14 = FUN_5c9476d0(this,local_38);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    local_5c = FUN_5c94a1c0(this);
    if (local_5c < 0) {
      return local_5c;
    }
  }
  else if (((iVar14 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          ((param_1 != 2 && (local_5c = FUN_5c9497d0(this,(int)local_38), local_5c < 0)))) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0x78) <= local_60) {
      local_60 = *(uint *)((int)this + 0x78);
    }
    iVar14 = *(int *)((int)this + 0x78) - local_60;
    *(int *)((int)this + 0x78) = iVar14;
    if (iVar14 == 0) {
      local_5c = 1;
    }
  }
  uVar15 = local_60;
  pfVar12 = param_2;
  if (uVar13 < 2) {
    if (local_60 != 0) {
      local_48 = (double)CONCAT44(local_48._4_4_,local_60);
      do {
        pfVar12 = (float *)local_58;
        local_40 = (double)*(float *)local_58 * *(double *)((int)this + 0x88);
        dVar2 = *(double *)((int)this + 0x98) * *(double *)((int)this + 0xa0) +
                local_40 * *(double *)((int)this + 0x90);
        local_58._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar15 = local_58._4_4_ & 0x7ff00000;
        local_58 = dVar2;
        if (uVar15 < 0x3df00000) {
          local_58 = 0.0;
        }
        *(float **)((int)this + 0xa0) = (float *)local_58;
        *(uint *)((int)this + 0xa4) = local_58._4_4_;
        if (*(int *)((int)this + 0x38) != 0) {
          dVar2 = *(double *)((int)this + 0x460);
          *(undefined4 *)((int)this + 0x460) = *(undefined4 *)((int)this + 0x458);
          *(undefined4 *)((int)this + 0x464) = *(undefined4 *)((int)this + 0x45c);
          dVar2 = (local_58 * *(double *)((int)this + 0x478) +
                  *(double *)((int)this + 0x468) * *(double *)((int)this + 0x458)) -
                  *(double *)((int)this + 0x470) * dVar2;
          *(double *)((int)this + 0x458) = dVar2;
          local_58 = local_58 - dVar2;
        }
        iVar14 = 0;
        dVar2 = _DAT_5c98b970;
        if (0 < *(int *)((int)this + 0x80)) {
          puVar16 = (uint *)((int)this + 0xac);
          do {
            dVar2 = dVar2 + *(double *)*puVar16;
            dVar3 = *(double *)(puVar16 + 5) * *(double *)((int)this + 0x98) +
                    *(double *)*puVar16 * *(double *)((int)this + 0x90);
            *(double *)(puVar16 + 5) = dVar3;
            *(double *)*puVar16 = (dVar3 + local_58) * *(double *)(puVar16 + 3);
            uVar15 = *puVar16;
            *puVar16 = uVar15 + 8;
            if (puVar16[1] <= uVar15 + 8) {
              *puVar16 = puVar16[-1];
            }
            iVar14 = iVar14 + 1;
            puVar16 = puVar16 + 10;
          } while (iVar14 < *(int *)((int)this + 0x80));
        }
        **(double **)((int)this + 0x3cc) = dVar2;
        uVar15 = *(int *)((int)this + 0x3cc) + 8;
        *(uint *)((int)this + 0x3cc) = uVar15;
        if (*(uint *)((int)this + 0x3c8) <= uVar15) {
          *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)((int)this + 0x3d0);
        }
        dVar2 = **(double **)((int)this + 0x418);
        dVar3 = *(double *)((int)this + 1000);
        dVar4 = **(double **)((int)this + 0x414);
        dVar5 = *(double *)((int)this + 0x3e0);
        dVar6 = **(double **)((int)this + 0x41c);
        dVar7 = *(double *)((int)this + 0x3f0);
        dVar8 = *(double *)((int)this + 0x438);
        dVar9 = **(double **)((int)this + 0x3cc);
        dVar10 = *(double *)((int)this + 0x440);
        dVar11 = *(double *)((int)this + 0x448);
        **(double **)((int)this + 0x41c) = local_40;
        uVar17 = *(int *)((int)this + 0x414) + 8;
        *(uint *)((int)this + 0x414) = uVar17;
        uVar15 = *(uint *)((int)this + 0x420);
        if (uVar15 <= uVar17) {
          *(undefined4 *)((int)this + 0x414) = *(undefined4 *)((int)this + 0x410);
        }
        uVar17 = *(int *)((int)this + 0x418) + 8;
        *(uint *)((int)this + 0x418) = uVar17;
        if (uVar15 <= uVar17) {
          *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x410);
        }
        uVar17 = *(int *)((int)this + 0x41c) + 8;
        *(uint *)((int)this + 0x41c) = uVar17;
        if (uVar15 <= uVar17) {
          *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x410);
        }
        *pfVar12 = (float)((float10)local_40 * (float10)dVar11 +
                          (float10)dVar9 * (float10)dVar10 +
                          ((float10)dVar6 * (float10)dVar7 +
                          (float10)dVar4 * (float10)dVar5 + (float10)dVar2 * (float10)dVar3) *
                          (float10)dVar8);
        local_58._0_4_ = pfVar12 + uVar13;
        iVar14 = local_48._0_4_ + -1;
        local_48 = (double)CONCAT44(local_48._4_4_,iVar14);
      } while (iVar14 != 0);
    }
  }
  else {
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      local_40 = (double)*pfVar12;
      local_48 = (double)pfVar12[1];
      FUN_5c94ba90(this,&local_40,&local_48);
      *pfVar12 = (float)local_40;
      pfVar12[1] = (float)local_48;
      pfVar12 = pfVar12 + uVar13;
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c94b614;
  piVar1 = (int *)((int)this + 0x48c);
  uVar13 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  local_48._0_4_ = local_60;
  if (*(int *)((int)this + 0x4a0) == 0) {
    iVar14 = *piVar1;
    *piVar1 = iVar14 - local_60;
    if ((int)(iVar14 - local_60) < 1) {
      uVar15 = rand();
      *piVar1 = (uVar15 & 3) * (uVar13 >> 4) + uVar13 * 4;
      uVar15 = rand();
      *(uint *)((int)this + 0x498) = (uVar15 & 0x1f) + 1;
      uVar15 = rand();
      *(uint *)((int)this + 0x49c) = (uVar15 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a0) = uVar13 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94b5e5;
    }
    uVar13 = 0;
  }
  else {
LAB_5c94b5e5:
    uVar13 = *(uint *)((int)this + 0x4a0);
    if (uVar13 <= local_60) {
      local_48._0_4_ = uVar13;
    }
    *(uint *)((int)this + 0x4a0) = uVar13 - local_48._0_4_;
    uVar13 = local_48._0_4_;
  }
  FUN_5c94c150(param_2,uVar13,(uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x6c) + 4),(int)piVar1);
LAB_5c94b614:
  *param_3 = local_60;
  return local_5c;
}


