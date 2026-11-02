/* Module: sfxpfx1.dll
   Function: FUN_5c94b630
   Address: 5c94b630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94b630(void *this,int param_1,double *param_2,uint *param_3)

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
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint local_58;
  int local_54;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [13];
  
  uVar13 = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  local_58 = *param_3;
  local_54 = 0;
  iVar14 = FUN_5c9476d0(this,local_38);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    local_54 = FUN_5c94a1c0(this);
    if (local_54 < 0) {
      return local_54;
    }
  }
  else if (((iVar14 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          ((param_1 != 2 && (local_54 = FUN_5c9497d0(this,(int)local_38), local_54 < 0)))) {
    return local_54;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0x78) <= local_58) {
      local_58 = *(uint *)((int)this + 0x78);
    }
    iVar14 = *(int *)((int)this + 0x78) - local_58;
    *(int *)((int)this + 0x78) = iVar14;
    if (iVar14 == 0) {
      local_54 = 1;
    }
  }
  pdVar12 = param_2;
  uVar18 = local_58;
  if (uVar13 < 2) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      local_40 = *pdVar12 * *(double *)((int)this + 0x88);
      dVar2 = local_40 * *(double *)((int)this + 0x90) +
              *(double *)((int)this + 0xa0) * *(double *)((int)this + 0x98);
      local_48._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar15 = local_48._4_4_ & 0x7ff00000;
      local_48 = dVar2;
      if (uVar15 < 0x3df00000) {
        local_48 = 0.0;
      }
      *(undefined4 *)((int)this + 0xa0) = (undefined4)local_48;
      *(uint *)((int)this + 0xa4) = local_48._4_4_;
      if (*(int *)((int)this + 0x38) != 0) {
        dVar2 = *(double *)((int)this + 0x460);
        *(undefined4 *)((int)this + 0x460) = *(undefined4 *)((int)this + 0x458);
        *(undefined4 *)((int)this + 0x464) = *(undefined4 *)((int)this + 0x45c);
        dVar2 = (local_48 * *(double *)((int)this + 0x478) +
                *(double *)((int)this + 0x468) * *(double *)((int)this + 0x458)) -
                *(double *)((int)this + 0x470) * dVar2;
        *(double *)((int)this + 0x458) = dVar2;
        local_48 = local_48 - dVar2;
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
          *(double *)*puVar16 = (local_48 + dVar3) * *(double *)(puVar16 + 3);
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
      dVar2 = **(double **)((int)this + 0x414);
      dVar3 = *(double *)((int)this + 0x3e0);
      dVar4 = **(double **)((int)this + 0x418);
      dVar5 = *(double *)((int)this + 1000);
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
      *pdVar12 = local_40 * dVar11 +
                 dVar9 * dVar10 + (dVar6 * dVar7 + dVar4 * dVar5 + dVar2 * dVar3) * dVar8;
      pdVar12 = pdVar12 + uVar13;
    }
  }
  else {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      local_40 = *pdVar12;
      local_48 = pdVar12[1];
      FUN_5c94ba90(this,(double *)&local_40,(double *)&local_48);
      *(undefined4 *)pdVar12 = (undefined4)local_40;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)local_48;
      *(undefined4 *)((int)pdVar12 + 4) = local_40._4_4_;
      *(uint *)((int)pdVar12 + 0xc) = local_48._4_4_;
      pdVar12 = pdVar12 + uVar13;
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c94ba42;
  piVar1 = (int *)((int)this + 0x48c);
  local_4c = local_58;
  uVar13 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  if (*(int *)((int)this + 0x4a0) == 0) {
    iVar14 = *piVar1;
    *piVar1 = iVar14 - local_58;
    if ((int)(iVar14 - local_58) < 1) {
      uVar18 = rand();
      *piVar1 = (uVar18 & 3) * (uVar13 >> 4) + uVar13 * 4;
      uVar18 = rand();
      *(uint *)((int)this + 0x498) = (uVar18 & 0x1f) + 1;
      uVar18 = rand();
      *(uint *)((int)this + 0x49c) = (uVar18 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a0) = uVar13 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94ba0f;
    }
    local_4c = 0;
  }
  else {
LAB_5c94ba0f:
    uVar13 = *(uint *)((int)this + 0x4a0);
    if (uVar13 <= local_58) {
      local_4c = uVar13;
    }
    *(uint *)((int)this + 0x4a0) = uVar13 - local_4c;
  }
  FUN_5c94c1d0(param_2,local_4c,(uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x6c) + 4),(int)piVar1);
LAB_5c94ba42:
  *param_3 = local_58;
  return local_54;
}


