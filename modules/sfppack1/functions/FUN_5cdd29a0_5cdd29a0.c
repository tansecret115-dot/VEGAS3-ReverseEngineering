/* Module: sfppack1.dll
   Function: FUN_5cdd29a0
   Address: 5cdd29a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd29a0(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  double local_40;
  int local_34 [12];
  
  local_5c = 0;
  uVar13 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  local_60 = *param_3;
  if (*(int *)((int)this + 0x74) != 0) {
    if (param_4 != 0) {
      *param_3 = 0;
      return 1;
    }
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x74) = 0;
  }
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
  if (param_4 == 0) {
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x80);
  }
  else {
    if ((int)*(uint *)((int)this + 0x7c) <= (int)local_60) {
      local_60 = *(uint *)((int)this + 0x7c);
    }
    iVar14 = *(int *)((int)this + 0x7c) - local_60;
    *(int *)((int)this + 0x7c) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)((int)this + 0x74) = 1;
    }
  }
  uVar18 = local_60;
  pfVar12 = param_2;
  if (uVar13 < 2) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      iVar14 = 0;
      fVar11 = *pfVar12 * (float)*(double *)((int)this + 0x90);
      local_40 = (double)fVar11;
      dVar1 = local_40 * *(double *)((int)this + 0x98) +
              *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xa0);
      local_58._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
      uVar17 = local_58._4_4_ & 0x7ff00000;
      local_58 = dVar1;
      if (uVar17 < 0x3df00000) {
        local_58 = 0.0;
      }
      *(undefined4 *)((int)this + 0xa8) = (undefined4)local_58;
      *(uint *)((int)this + 0xac) = local_58._4_4_;
      if (*(int *)((int)this + 0x38) != 0) {
        dVar1 = (local_58 * *(double *)((int)this + 0x480) +
                *(double *)((int)this + 0x470) * *(double *)((int)this + 0x460)) -
                *(double *)((int)this + 0x478) * *(double *)((int)this + 0x468);
        local_48._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        uVar17 = local_48._4_4_ & 0x7ff00000;
        local_48 = dVar1;
        if (uVar17 < 0x3df00000) {
          local_48 = 0.0;
        }
        local_58 = local_58 - local_48;
        *(undefined4 *)((int)this + 0x468) = *(undefined4 *)((int)this + 0x460);
        *(undefined4 *)((int)this + 0x46c) = *(undefined4 *)((int)this + 0x464);
        *(undefined4 *)((int)this + 0x460) = (undefined4)local_48;
        *(uint *)((int)this + 0x464) = local_48._4_4_;
      }
      dVar1 = _DAT_5ce12bf0;
      if (0 < *(int *)((int)this + 0x88)) {
        puVar15 = (uint *)((int)this + 0xb4);
        do {
          dVar1 = dVar1 + *(double *)*puVar15;
          dVar2 = *(double *)(puVar15 + 5) * *(double *)((int)this + 0xa0) +
                  *(double *)*puVar15 * *(double *)((int)this + 0x98);
          *(double *)(puVar15 + 5) = dVar2;
          *(double *)*puVar15 = (dVar2 + local_58) * *(double *)(puVar15 + 3);
          uVar17 = *puVar15;
          *puVar15 = uVar17 + 8;
          if (puVar15[1] <= uVar17 + 8) {
            *puVar15 = puVar15[-1];
          }
          iVar14 = iVar14 + 1;
          puVar15 = puVar15 + 10;
        } while (iVar14 < *(int *)((int)this + 0x88));
      }
      **(double **)((int)this + 0x3d4) = dVar1;
      uVar17 = *(int *)((int)this + 0x3d4) + 8;
      *(uint *)((int)this + 0x3d4) = uVar17;
      if (*(uint *)((int)this + 0x3d0) <= uVar17) {
        *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)((int)this + 0x3d8);
      }
      dVar1 = **(double **)((int)this + 0x41c);
      dVar2 = *(double *)((int)this + 1000);
      dVar3 = **(double **)((int)this + 0x420);
      dVar4 = *(double *)((int)this + 0x3f0);
      dVar5 = **(double **)((int)this + 0x424);
      dVar6 = *(double *)((int)this + 0x3f8);
      dVar7 = *(double *)((int)this + 0x440);
      dVar8 = **(double **)((int)this + 0x3d4);
      dVar9 = *(double *)((int)this + 0x448);
      dVar10 = *(double *)((int)this + 0x450);
      **(double **)((int)this + 0x424) = local_40;
      uVar16 = *(int *)((int)this + 0x41c) + 8;
      *(uint *)((int)this + 0x41c) = uVar16;
      uVar17 = *(uint *)((int)this + 0x428);
      if (uVar17 <= uVar16) {
        *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x418);
      }
      uVar16 = *(int *)((int)this + 0x420) + 8;
      *(uint *)((int)this + 0x420) = uVar16;
      if (uVar17 <= uVar16) {
        *(undefined4 *)((int)this + 0x420) = *(undefined4 *)((int)this + 0x418);
      }
      uVar16 = *(int *)((int)this + 0x424) + 8;
      *(uint *)((int)this + 0x424) = uVar16;
      if (uVar17 <= uVar16) {
        *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 0x418);
      }
      *pfVar12 = (float)((float10)fVar11 * (float10)dVar10 +
                        (float10)dVar8 * (float10)dVar9 +
                        ((float10)dVar5 * (float10)dVar6 +
                        (float10)dVar3 * (float10)dVar4 + (float10)dVar1 * (float10)dVar2) *
                        (float10)dVar7);
      pfVar12 = pfVar12 + uVar13;
    }
  }
  else {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      local_40 = (double)*pfVar12;
      local_48 = (double)pfVar12[1];
      FUN_5cdd3390(this,&local_40,(double *)&local_48);
      *pfVar12 = (float)local_40;
      pfVar12[1] = (float)local_48;
      pfVar12 = pfVar12 + uVar13;
    }
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd2eab;
  uVar13 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x4a8) == 0) {
    iVar14 = *(int *)((int)this + 0x494) - local_60;
    *(int *)((int)this + 0x494) = iVar14;
    if (iVar14 < 1) {
      uVar18 = rand();
      *(uint *)((int)this + 0x494) = (uVar18 & 3) * (uVar13 >> 4) + uVar13 * 4;
      uVar18 = rand();
      *(uint *)((int)this + 0x4a0) = (uVar18 & 0x1f) + 1;
      uVar18 = rand();
      *(uint *)((int)this + 0x4a4) = (uVar18 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a8) = uVar13 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd2e05;
    }
    local_4c = 0;
  }
  else {
LAB_5cdd2e05:
    uVar13 = *(uint *)((int)this + 0x4a8);
    local_4c = local_60;
    if (uVar13 <= local_60) {
      local_4c = uVar13;
    }
    *(uint *)((int)this + 0x4a8) = uVar13 - local_4c;
  }
  uVar13 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  for (; local_4c != 0; local_4c = local_4c - 1) {
    uVar18 = DAT_5ce2a0e4 % *(uint *)((int)this + 0x498);
    DAT_5ce2a0e4 = DAT_5ce2a0e4 + *(int *)((int)this + 0x4a0);
    *param_2 = *(float *)(*(int *)((int)this + 0x49c) + uVar18 * 4) + *param_2;
    if (1 < uVar13) {
      uVar18 = DAT_5ce2a0e8 % *(uint *)((int)this + 0x498);
      DAT_5ce2a0e8 = DAT_5ce2a0e8 + 1 + *(int *)((int)this + 0x4a4);
      param_2[1] = *(float *)(*(int *)((int)this + 0x49c) + uVar18 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar13;
  }
LAB_5cdd2eab:
  *param_3 = local_60;
  return local_5c;
}


