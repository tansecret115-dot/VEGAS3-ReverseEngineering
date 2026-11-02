/* Module: encn3260.dll
   Function: FUN_664d9690
   Address: 664d9690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d9690(void *this,undefined1 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_34 [2];
  void *local_2c;
  int local_28 [4];
  void *local_18;
  void *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  *param_1 = 2;
  param_1[1] = 0;
  param_1[3] = 0xc9;
  *(undefined4 *)(param_1 + 0x22) = **(undefined4 **)this;
  local_c = operator_new(*(int *)((int)this + 0x14) * 0x19);
  if (local_c != (undefined4 *)0x0) {
    bVar5 = 0;
    local_28[2] = 0;
    local_34[0] = -(uint)(*(int *)((int)this + 0x14) != 0);
    local_8 = local_8 & 0xffffff00;
    local_28[3] = 0;
    local_18 = (void *)0x0;
    local_14 = (void *)0x0;
    local_10 = 0;
    local_34[1] = local_34[0];
    local_2c = (void *)((int)this + 0xc);
    local_28[0] = 0;
    local_28[1] = 0;
    if (local_34[0] != 0) {
      FUN_664bbeb0((void *)((int)this + 0xc),local_34 + 1,local_28 + 1,local_28);
    }
    piVar6 = local_34;
    piVar8 = local_28 + 2;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    while (local_28[2] != 0) {
      puVar7 = (undefined4 *)((int)local_14 + 0x2a);
      if (*(int *)((int)local_14 + 0x2a) != 0) {
        uVar1 = local_8 & 0xff;
        bVar5 = bVar5 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar5);
        FUN_664d9d70(local_14,local_10,(undefined4 *)((int)local_c + uVar1 * 0x19),param_2);
        *puVar7 = 0;
      }
      local_28[2] = local_28[3];
      if (local_28[3] != 0) {
        FUN_664bbeb0(local_18,local_28 + 3,&local_10,(int *)&local_14);
      }
    }
    uVar1 = local_8 & 0xff;
    param_1[2] = bVar5;
    *(ushort *)(param_1 + 4) = (ushort)bVar5 * 6 + 1;
    if (*(void **)(param_1 + 0x26) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x26));
    }
    uVar1 = uVar1 * 0x19;
    puVar2 = operator_new(uVar1);
    *(undefined4 **)(param_1 + 0x26) = puVar2;
    puVar7 = local_c;
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    operator_delete(local_c);
    return 0;
  }
  return 0x8007000e;
}


