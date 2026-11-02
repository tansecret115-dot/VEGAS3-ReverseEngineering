/* Module: sfppack1.dll
   Function: FUN_5cdd3390
   Address: 5cdd3390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdd3390(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint *puVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_20;
  undefined8 local_18;
  
  dVar3 = *param_1 * *(double *)((int)this + 0x90);
  dVar4 = *param_2 * *(double *)((int)this + 0x90);
  dVar1 = *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xa0) +
          (dVar4 + dVar3) * _DAT_5ce12df8 * *(double *)((int)this + 0x98);
  local_20._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  uVar6 = local_20._4_4_ & 0x7ff00000;
  local_20 = dVar1;
  if (uVar6 < 0x3df00000) {
    local_20 = 0.0;
  }
  *(undefined4 *)((int)this + 0xa8) = (undefined4)local_20;
  *(uint *)((int)this + 0xac) = local_20._4_4_;
  if (*(int *)((int)this + 0x38) != 0) {
    dVar1 = (local_20 * *(double *)((int)this + 0x480) +
            *(double *)((int)this + 0x470) * *(double *)((int)this + 0x460)) -
            *(double *)((int)this + 0x478) * *(double *)((int)this + 0x468);
    local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
    uVar6 = local_18._4_4_ & 0x7ff00000;
    local_18 = dVar1;
    if (uVar6 < 0x3df00000) {
      local_18 = 0.0;
    }
    local_20 = local_20 - local_18;
    *(undefined4 *)((int)this + 0x468) = *(undefined4 *)((int)this + 0x460);
    *(undefined4 *)((int)this + 0x46c) = *(undefined4 *)((int)this + 0x464);
    *(undefined4 *)((int)this + 0x460) = (undefined4)local_18;
    *(uint *)((int)this + 0x464) = local_18._4_4_;
  }
  iVar11 = 2;
  dVar1 = _DAT_5ce12bf0;
  if (2 < *(int *)((int)this + 0x88)) {
    puVar7 = (uint *)((int)this + 0x104);
    do {
      dVar1 = dVar1 + *(double *)*puVar7;
      dVar2 = *(double *)(puVar7 + 5) * *(double *)((int)this + 0xa0) +
              *(double *)*puVar7 * *(double *)((int)this + 0x98);
      *(double *)(puVar7 + 5) = dVar2;
      *(double *)*puVar7 = (dVar2 + local_20) * *(double *)(puVar7 + 3);
      uVar6 = *puVar7;
      *puVar7 = uVar6 + 8;
      if (puVar7[1] <= uVar6 + 8) {
        *puVar7 = puVar7[-1];
      }
      iVar11 = iVar11 + 1;
      puVar7 = puVar7 + 10;
    } while (iVar11 < *(int *)((int)this + 0x88));
  }
  pdVar8 = (double *)((int)this + 200);
  iVar11 = 2;
  dVar2 = dVar1;
  do {
    dVar2 = dVar2 + **(double **)((int)pdVar8 + -0x14);
    dVar5 = *(double *)((int)this + 0xa0) * *pdVar8 +
            **(double **)((int)pdVar8 + -0x14) * *(double *)((int)this + 0x98);
    *pdVar8 = dVar5;
    if (ABS(dVar5) < _DAT_5ce14950) {
      *(undefined4 *)pdVar8 = 0;
      *(undefined4 *)((int)pdVar8 + 4) = 0;
    }
    **(double **)((int)pdVar8 + -0x14) = (local_20 + *pdVar8) * pdVar8[-1];
    uVar6 = *(int *)((int)pdVar8 + -0x14) + 8;
    *(uint *)((int)pdVar8 + -0x14) = uVar6;
    if (*(uint *)(pdVar8 + -2) <= uVar6) {
      *(undefined4 *)((int)pdVar8 + -0x14) = *(undefined4 *)(pdVar8 + -3);
    }
    dVar1 = dVar1 + **(double **)((int)pdVar8 + 0x17c);
    dVar5 = pdVar8[0x32] * *(double *)((int)this + 0xa0) +
            **(double **)((int)pdVar8 + 0x17c) * *(double *)((int)this + 0x98);
    pdVar8[0x32] = dVar5;
    if (ABS(dVar5) < _DAT_5ce14950) {
      *(undefined4 *)(pdVar8 + 0x32) = 0;
      *(undefined4 *)((int)pdVar8 + 0x194) = 0;
    }
    **(double **)((int)pdVar8 + 0x17c) = (local_20 + pdVar8[0x32]) * pdVar8[0x31];
    uVar6 = *(int *)((int)pdVar8 + 0x17c) + 8;
    *(uint *)((int)pdVar8 + 0x17c) = uVar6;
    if (*(uint *)(pdVar8 + 0x30) <= uVar6) {
      *(undefined4 *)((int)pdVar8 + 0x17c) = *(undefined4 *)(pdVar8 + 0x2f);
    }
    pdVar8 = pdVar8 + 5;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  **(double **)((int)this + 0x3e0) = dVar1;
  **(double **)((int)this + 0x3d4) = dVar2;
  uVar6 = *(int *)((int)this + 0x3d4) + 8;
  uVar10 = *(int *)((int)this + 0x3e0) + 8;
  *(uint *)((int)this + 0x3d4) = uVar6;
  *(uint *)((int)this + 0x3e0) = uVar10;
  if (*(uint *)((int)this + 0x3d0) <= uVar6) {
    *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)((int)this + 0x3d8);
  }
  if (*(uint *)((int)this + 0x3dc) <= uVar10) {
    *(undefined4 *)((int)this + 0x3e0) = *(undefined4 *)((int)this + 0x3e4);
  }
  *param_1 = dVar3 * *(double *)((int)this + 0x450) +
             **(double **)((int)this + 0x3d4) * *(double *)((int)this + 0x448) +
             ((**(double **)((int)this + 0x434) + **(double **)((int)this + 0x420)) *
              *(double *)((int)this + 0x3f0) +
             (**(double **)((int)this + 0x438) + **(double **)((int)this + 0x424)) *
             *(double *)((int)this + 0x3f8) +
             (**(double **)((int)this + 0x430) + **(double **)((int)this + 0x41c)) *
             *(double *)((int)this + 1000)) * *(double *)((int)this + 0x440);
  *param_2 = dVar4 * *(double *)((int)this + 0x450) +
             **(double **)((int)this + 0x3e0) * *(double *)((int)this + 0x448) +
             ((**(double **)((int)this + 0x434) + **(double **)((int)this + 0x420)) *
              *(double *)((int)this + 0x408) +
             (**(double **)((int)this + 0x438) + **(double **)((int)this + 0x424)) *
             *(double *)((int)this + 0x410) +
             (**(double **)((int)this + 0x430) + **(double **)((int)this + 0x41c)) *
             *(double *)((int)this + 0x400)) * *(double *)((int)this + 0x440);
  **(double **)((int)this + 0x424) = dVar3;
  **(double **)((int)this + 0x438) = dVar4;
  uVar6 = *(uint *)((int)this + 0x428);
  uVar10 = *(int *)((int)this + 0x41c) + 8;
  *(uint *)((int)this + 0x41c) = uVar10;
  if (uVar6 <= uVar10) {
    *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x418);
  }
  uVar9 = *(int *)((int)this + 0x430) + 8;
  *(uint *)((int)this + 0x430) = uVar9;
  uVar10 = *(uint *)((int)this + 0x43c);
  if (uVar10 <= uVar9) {
    *(undefined4 *)((int)this + 0x430) = *(undefined4 *)((int)this + 0x42c);
  }
  uVar9 = *(int *)((int)this + 0x420) + 8;
  *(uint *)((int)this + 0x420) = uVar9;
  if (uVar6 <= uVar9) {
    *(undefined4 *)((int)this + 0x420) = *(undefined4 *)((int)this + 0x418);
  }
  uVar9 = *(int *)((int)this + 0x434) + 8;
  *(uint *)((int)this + 0x434) = uVar9;
  if (uVar10 <= uVar9) {
    *(undefined4 *)((int)this + 0x434) = *(undefined4 *)((int)this + 0x42c);
  }
  uVar9 = *(int *)((int)this + 0x424) + 8;
  *(uint *)((int)this + 0x424) = uVar9;
  if (uVar6 <= uVar9) {
    *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 0x418);
  }
  uVar6 = *(int *)((int)this + 0x438) + 8;
  *(uint *)((int)this + 0x438) = uVar6;
  if (uVar10 <= uVar6) {
    *(undefined4 *)((int)this + 0x438) = *(undefined4 *)((int)this + 0x42c);
  }
  return;
}


