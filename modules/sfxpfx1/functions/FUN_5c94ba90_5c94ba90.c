/* Module: sfxpfx1.dll
   Function: FUN_5c94ba90
   Address: 5c94ba90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5c94ba90(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_18;
  
  dVar4 = *param_1 * *(double *)((int)this + 0x88);
  dVar5 = *param_2 * *(double *)((int)this + 0x88);
  dVar1 = *(double *)((int)this + 0xa0) * *(double *)((int)this + 0x98) +
          (dVar5 + dVar4) * _DAT_5c98b960 * *(double *)((int)this + 0x90);
  local_18._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  uVar7 = local_18._4_4_ & 0x7ff00000;
  local_18 = dVar1;
  if (uVar7 < 0x3df00000) {
    local_18 = 0.0;
  }
  *(undefined4 *)((int)this + 0xa0) = (undefined4)local_18;
  *(uint *)((int)this + 0xa4) = local_18._4_4_;
  if (*(int *)((int)this + 0x38) != 0) {
    dVar1 = *(double *)((int)this + 0x460);
    *(undefined4 *)((int)this + 0x460) = *(undefined4 *)((int)this + 0x458);
    *(undefined4 *)((int)this + 0x464) = *(undefined4 *)((int)this + 0x45c);
    dVar1 = (local_18 * *(double *)((int)this + 0x478) +
            *(double *)((int)this + 0x468) * *(double *)((int)this + 0x458)) -
            *(double *)((int)this + 0x470) * dVar1;
    *(double *)((int)this + 0x458) = dVar1;
    local_18 = local_18 - dVar1;
  }
  iVar9 = 2;
  dVar1 = _DAT_5c98b970;
  if (2 < *(int *)((int)this + 0x80)) {
    puVar6 = (uint *)((int)this + 0xfc);
    do {
      dVar1 = dVar1 + *(double *)*puVar6;
      dVar2 = *(double *)(puVar6 + 5) * *(double *)((int)this + 0x98) +
              *(double *)*puVar6 * *(double *)((int)this + 0x90);
      *(double *)(puVar6 + 5) = dVar2;
      *(double *)*puVar6 = (dVar2 + local_18) * *(double *)(puVar6 + 3);
      uVar7 = *puVar6;
      *puVar6 = uVar7 + 8;
      if (puVar6[1] <= uVar7 + 8) {
        *puVar6 = puVar6[-1];
      }
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + 10;
    } while (iVar9 < *(int *)((int)this + 0x80));
  }
  puVar6 = (uint *)((int)this + 0xac);
  iVar9 = 2;
  dVar2 = dVar1;
  do {
    dVar2 = dVar2 + *(double *)*puVar6;
    dVar3 = *(double *)((int)this + 0x98) * *(double *)(puVar6 + 5) +
            *(double *)*puVar6 * *(double *)((int)this + 0x90);
    *(double *)(puVar6 + 5) = dVar3;
    *(double *)*puVar6 = (dVar3 + local_18) * *(double *)(puVar6 + 3);
    uVar7 = *puVar6;
    *puVar6 = uVar7 + 8;
    if (puVar6[1] <= uVar7 + 8) {
      *puVar6 = puVar6[-1];
    }
    dVar1 = dVar1 + *(double *)puVar6[100];
    dVar3 = *(double *)(puVar6 + 0x69) * *(double *)((int)this + 0x98) +
            *(double *)puVar6[100] * *(double *)((int)this + 0x90);
    *(double *)(puVar6 + 0x69) = dVar3;
    *(double *)puVar6[100] = (dVar3 + local_18) * *(double *)(puVar6 + 0x67);
    uVar7 = puVar6[100];
    puVar6[100] = uVar7 + 8;
    if (puVar6[0x65] <= uVar7 + 8) {
      puVar6[100] = puVar6[99];
    }
    puVar6 = puVar6 + 10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  **(double **)((int)this + 0x3cc) = dVar2;
  uVar7 = *(int *)((int)this + 0x3cc) + 8;
  *(uint *)((int)this + 0x3cc) = uVar7;
  if (*(uint *)((int)this + 0x3c8) <= uVar7) {
    *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)((int)this + 0x3d0);
  }
  **(double **)((int)this + 0x3d8) = dVar1;
  uVar7 = *(int *)((int)this + 0x3d8) + 8;
  *(uint *)((int)this + 0x3d8) = uVar7;
  if (*(uint *)((int)this + 0x3d4) <= uVar7) {
    *(undefined4 *)((int)this + 0x3d8) = *(undefined4 *)((int)this + 0x3dc);
  }
  *param_1 = dVar4 * *(double *)((int)this + 0x448) +
             **(double **)((int)this + 0x3cc) * *(double *)((int)this + 0x440) +
             ((**(double **)((int)this + 0x428) + **(double **)((int)this + 0x414)) *
              *(double *)((int)this + 0x3e0) +
             (**(double **)((int)this + 0x42c) + **(double **)((int)this + 0x418)) *
             *(double *)((int)this + 1000) +
             (**(double **)((int)this + 0x430) + **(double **)((int)this + 0x41c)) *
             *(double *)((int)this + 0x3f0)) * *(double *)((int)this + 0x438);
  *param_2 = dVar5 * *(double *)((int)this + 0x448) +
             **(double **)((int)this + 0x3d8) * *(double *)((int)this + 0x440) +
             ((**(double **)((int)this + 0x428) + **(double **)((int)this + 0x414)) *
              *(double *)((int)this + 0x3f8) +
             (**(double **)((int)this + 0x42c) + **(double **)((int)this + 0x418)) *
             *(double *)((int)this + 0x400) +
             (**(double **)((int)this + 0x430) + **(double **)((int)this + 0x41c)) *
             *(double *)((int)this + 0x408)) * *(double *)((int)this + 0x438);
  **(double **)((int)this + 0x41c) = dVar4;
  **(double **)((int)this + 0x430) = dVar5;
  uVar7 = *(uint *)((int)this + 0x420);
  uVar8 = *(int *)((int)this + 0x414) + 8;
  *(uint *)((int)this + 0x414) = uVar8;
  if (uVar7 <= uVar8) {
    *(undefined4 *)((int)this + 0x414) = *(undefined4 *)((int)this + 0x410);
  }
  uVar8 = *(int *)((int)this + 0x418) + 8;
  *(uint *)((int)this + 0x418) = uVar8;
  if (uVar7 <= uVar8) {
    *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x410);
  }
  uVar8 = *(int *)((int)this + 0x41c) + 8;
  *(uint *)((int)this + 0x41c) = uVar8;
  if (uVar7 <= uVar8) {
    *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x410);
  }
  uVar7 = *(uint *)((int)this + 0x434);
  uVar8 = *(int *)((int)this + 0x428) + 8;
  *(uint *)((int)this + 0x428) = uVar8;
  if (uVar7 <= uVar8) {
    *(undefined4 *)((int)this + 0x428) = *(undefined4 *)((int)this + 0x424);
  }
  uVar8 = *(int *)((int)this + 0x42c) + 8;
  *(uint *)((int)this + 0x42c) = uVar8;
  if (uVar7 <= uVar8) {
    *(undefined4 *)((int)this + 0x42c) = *(undefined4 *)((int)this + 0x424);
  }
  uVar8 = *(int *)((int)this + 0x430) + 8;
  *(uint *)((int)this + 0x430) = uVar8;
  if (uVar7 <= uVar8) {
    *(undefined4 *)((int)this + 0x430) = *(undefined4 *)((int)this + 0x424);
  }
  return;
}


