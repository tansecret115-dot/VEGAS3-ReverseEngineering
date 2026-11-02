/* Module: rmme3260.dll
   Function: FUN_6621d5b0
   Address: 6621d5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621d5b0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_14;
  uint local_10;
  int local_8;
  
  iVar8 = 0;
  local_14 = 0xffffffff;
  local_8 = -1;
  bVar1 = false;
  local_10 = 100;
  iVar9 = -1;
  if (0 < *(int *)((int)this + 0xe4)) {
    iVar5 = *(int *)((int)this + 0xec);
    iVar10 = 0;
    do {
      pvVar7 = (void *)(iVar10 + iVar5);
      if (*(int *)(iVar10 + 0x1e + iVar5) == 0) {
        uVar4 = FUN_6621ea10(pvVar7,(undefined4 *)((int)pvVar7 + 0x14),
                             (undefined4 *)((int)pvVar7 + 0x22));
        *(undefined4 *)(iVar10 + 0x1e + *(int *)((int)this + 0xec)) = uVar4;
        iVar5 = *(int *)((int)this + 0xec);
        pvVar7 = (void *)(iVar10 + iVar5);
        if (*(int *)(iVar10 + 0x1e + iVar5) != 0) goto LAB_6621d618;
      }
      else {
LAB_6621d618:
        bVar1 = true;
        if (*(int *)((int)this + 0xf0) == 0) {
          uVar2 = *(uint *)((int)pvVar7 + 0x14);
          uVar3 = local_10;
          if (*(uint *)((int)pvVar7 + 0x14) <= local_14) goto LAB_6621d645;
        }
        else {
          uVar2 = local_14;
          uVar3 = *(uint *)((int)pvVar7 + 0x2e);
          if (*(uint *)((int)pvVar7 + 0x2e) < local_10) {
LAB_6621d645:
            local_10 = uVar3;
            local_14 = uVar2;
            local_8 = iVar8;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x3a;
      iVar9 = local_8;
    } while (iVar8 < *(int *)((int)this + 0xe4));
  }
  if (*(int *)((int)this + 0xf0) != 0) {
    if (-1 < iVar9) goto LAB_6621d6ef;
    if (bVar1) {
      iVar9 = 0;
      if (0 < *(int *)((int)this + 0xe4)) {
        iVar8 = 0;
        do {
          iVar5 = iVar8 + *(int *)((int)this + 0xec);
          if (*(int *)(iVar8 + 0x1e + *(int *)((int)this + 0xec)) != 0) {
            *(int *)(iVar5 + 0x2a) = *(int *)(iVar5 + 0x2a) - *(int *)(iVar5 + 0x26);
            iVar5 = iVar8 + *(int *)((int)this + 0xec);
            *(uint *)(iVar5 + 0x2e) =
                 (uint)(*(int *)(iVar8 + 0x2a + *(int *)((int)this + 0xec)) * 100) /
                 *(uint *)(iVar5 + 0x26);
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 0x3a;
        } while (iVar9 < *(int *)((int)this + 0xe4));
      }
      uVar4 = (**(code **)(*(int *)this + 0x10))(param_1,param_2);
      return uVar4;
    }
  }
  if (iVar9 < 0) {
    return 0;
  }
LAB_6621d6ef:
  iVar9 = iVar9 * 0x3a;
  iVar8 = iVar9 + *(int *)((int)this + 0xec);
  *(int *)(iVar8 + 0x2a) =
       *(int *)(iVar8 + 0x2a) + *(int *)(iVar9 + 0x22 + *(int *)((int)this + 0xec)) * 8;
  iVar8 = iVar9 + *(int *)((int)this + 0xec);
  *(uint *)(iVar8 + 0x2e) =
       (uint)(*(int *)(iVar9 + 0x2a + *(int *)((int)this + 0xec)) * 100) / *(uint *)(iVar8 + 0x26);
  iVar8 = iVar9 + 0x14 + *(int *)((int)this + 0xec);
  *param_1 = *(undefined4 *)(iVar9 + 0x14 + *(int *)((int)this + 0xec));
  param_1[1] = *(undefined4 *)(iVar8 + 4);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar8 + 8);
  *param_2 = *(undefined4 *)(iVar9 + 0x22 + *(int *)((int)this + 0xec));
  uVar4 = *(undefined4 *)(iVar9 + 0x1e + *(int *)((int)this + 0xec));
  pvVar7 = (void *)(iVar9 + *(int *)((int)this + 0xec));
  uVar6 = FUN_6621ea10(pvVar7,(undefined4 *)((int)pvVar7 + 0x14),(undefined4 *)((int)pvVar7 + 0x22))
  ;
  *(undefined4 *)(iVar9 + 0x1e + *(int *)((int)this + 0xec)) = uVar6;
  return uVar4;
}


