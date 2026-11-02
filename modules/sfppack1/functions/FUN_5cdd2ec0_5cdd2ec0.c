/* Module: sfppack1.dll
   Function: FUN_5cdd2ec0
   Address: 5cdd2ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd2ec0(void *this,int param_1,double *param_2,uint *param_3)

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
  uint local_60;
  int local_5c;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34 [12];
  
  uVar13 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  local_60 = *param_3;
  local_5c = 0;
  iVar14 = FUN_5cdce840(this,local_34);
  if ((param_1 == 0) && (*(int *)((int)this + 0x54) != 0)) {
    local_5c = FUN_5cdd1930(this);
    if (local_5c < 0) {
      return local_5c;
    }
  }
  else if (((iVar14 != 0) || (*(int *)((int)this + 0x6c) == 0)) &&
          ((param_1 != 2 && (local_5c = FUN_5cdd0ed0(this,local_34), local_5c < 0)))) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x54) = 1;
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
  pdVar12 = param_2;
  uVar18 = local_60;
  if (uVar13 < 2) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      iVar14 = 0;
      local_40 = *pdVar12 * *(double *)((int)this + 0x90);
      dVar2 = local_40 * *(double *)((int)this + 0x98) +
              *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xa0);
      local_50._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      uVar15 = local_50._4_4_ & 0x7ff00000;
      local_50 = dVar2;
      if (uVar15 < 0x3df00000) {
        local_50 = 0.0;
      }
      *(undefined4 *)((int)this + 0xa8) = (undefined4)local_50;
      *(uint *)((int)this + 0xac) = local_50._4_4_;
      if (*(int *)((int)this + 0x38) != 0) {
        dVar2 = (local_50 * *(double *)((int)this + 0x480) +
                *(double *)((int)this + 0x470) * *(double *)((int)this + 0x460)) -
                *(double *)((int)this + 0x478) * *(double *)((int)this + 0x468);
        local_48._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar15 = local_48._4_4_ & 0x7ff00000;
        local_48 = dVar2;
        if (uVar15 < 0x3df00000) {
          local_48 = 0.0;
        }
        local_50 = local_50 - local_48;
        *(undefined4 *)((int)this + 0x468) = *(undefined4 *)((int)this + 0x460);
        *(undefined4 *)((int)this + 0x46c) = *(undefined4 *)((int)this + 0x464);
        *(undefined4 *)((int)this + 0x460) = (undefined4)local_48;
        *(uint *)((int)this + 0x464) = local_48._4_4_;
      }
      dVar2 = _DAT_5ce12bf0;
      if (0 < *(int *)((int)this + 0x88)) {
        puVar16 = (uint *)((int)this + 0xb4);
        do {
          dVar2 = dVar2 + *(double *)*puVar16;
          dVar3 = *(double *)(puVar16 + 5) * *(double *)((int)this + 0xa0) +
                  *(double *)*puVar16 * *(double *)((int)this + 0x98);
          *(double *)(puVar16 + 5) = dVar3;
          *(double *)*puVar16 = (dVar3 + local_50) * *(double *)(puVar16 + 3);
          uVar15 = *puVar16;
          *puVar16 = uVar15 + 8;
          if (puVar16[1] <= uVar15 + 8) {
            *puVar16 = puVar16[-1];
          }
          iVar14 = iVar14 + 1;
          puVar16 = puVar16 + 10;
        } while (iVar14 < *(int *)((int)this + 0x88));
      }
      **(double **)((int)this + 0x3d4) = dVar2;
      uVar15 = *(int *)((int)this + 0x3d4) + 8;
      *(uint *)((int)this + 0x3d4) = uVar15;
      if (*(uint *)((int)this + 0x3d0) <= uVar15) {
        *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)((int)this + 0x3d8);
      }
      dVar2 = **(double **)((int)this + 0x41c);
      dVar3 = *(double *)((int)this + 1000);
      dVar4 = **(double **)((int)this + 0x420);
      dVar5 = *(double *)((int)this + 0x3f0);
      dVar6 = **(double **)((int)this + 0x424);
      dVar7 = *(double *)((int)this + 0x3f8);
      dVar8 = *(double *)((int)this + 0x440);
      dVar9 = **(double **)((int)this + 0x3d4);
      dVar10 = *(double *)((int)this + 0x448);
      dVar11 = *(double *)((int)this + 0x450);
      **(double **)((int)this + 0x424) = local_40;
      uVar17 = *(int *)((int)this + 0x41c) + 8;
      *(uint *)((int)this + 0x41c) = uVar17;
      uVar15 = *(uint *)((int)this + 0x428);
      if (uVar15 <= uVar17) {
        *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x418);
      }
      uVar17 = *(int *)((int)this + 0x420) + 8;
      *(uint *)((int)this + 0x420) = uVar17;
      if (uVar15 <= uVar17) {
        *(undefined4 *)((int)this + 0x420) = *(undefined4 *)((int)this + 0x418);
      }
      uVar17 = *(int *)((int)this + 0x424) + 8;
      *(uint *)((int)this + 0x424) = uVar17;
      if (uVar15 <= uVar17) {
        *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 0x418);
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
      FUN_5cdd3390(this,(double *)&local_40,(double *)&local_48);
      *(undefined4 *)pdVar12 = (undefined4)local_40;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)local_48;
      *(undefined4 *)((int)pdVar12 + 4) = local_40._4_4_;
      *(uint *)((int)pdVar12 + 0xc) = local_48._4_4_;
      pdVar12 = pdVar12 + uVar13;
    }
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd3300;
  piVar1 = (int *)((int)this + 0x494);
  local_54 = local_60;
  uVar13 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x4a8) == 0) {
    iVar14 = *piVar1;
    *piVar1 = iVar14 - local_60;
    if ((int)(iVar14 - local_60) < 1) {
      uVar18 = rand();
      *piVar1 = (uVar18 & 3) * (uVar13 >> 4) + uVar13 * 4;
      uVar18 = rand();
      *(uint *)((int)this + 0x4a0) = (uVar18 & 0x1f) + 1;
      uVar18 = rand();
      *(uint *)((int)this + 0x4a4) = (uVar18 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a8) = uVar13 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd32cd;
    }
    local_54 = 0;
  }
  else {
LAB_5cdd32cd:
    uVar13 = *(uint *)((int)this + 0x4a8);
    if (uVar13 <= local_60) {
      local_54 = uVar13;
    }
    *(uint *)((int)this + 0x4a8) = uVar13 - local_54;
  }
  FUN_5cdd3aa0(param_2,local_54,(uint)*(ushort *)(*(int *)((int)this + 0x68) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x68) + 4),(int)piVar1);
LAB_5cdd3300:
  *param_3 = local_60;
  return local_5c;
}


