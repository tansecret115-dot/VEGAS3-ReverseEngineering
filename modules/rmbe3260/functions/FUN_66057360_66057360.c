/* Module: rmbe3260.dll
   Function: FUN_66057360
   Address: 66057360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66057360(void *this,char *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  FUN_66057010(param_1);
  uVar3 = (**(code **)((int)this + 8))(param_1);
  iVar4 = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0x10) = iVar4;
  uVar2 = iVar4 * 3;
  if ((uint)(*(int *)((int)this + 0xc) * 2) < uVar2) {
    puVar5 = operator_new(iVar4 * 0xc);
    puVar6 = puVar5;
    for (uVar7 = (uint)(iVar4 * 0xc) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar7 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        iVar4 = *(int *)(*(int *)((int)this + 0x18) + uVar7 * 4);
        while (iVar4 != 0) {
          iVar1 = *(int *)(iVar4 + 0xc);
          *(undefined4 *)(iVar4 + 0xc) = puVar5[*(uint *)(iVar4 + 4) % uVar2];
          puVar5[*(uint *)(iVar4 + 4) % uVar2] = iVar4;
          iVar4 = iVar1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((int)this + 0xc));
    }
    operator_delete(*(void **)((int)this + 0x18));
    *(undefined4 **)((int)this + 0x18) = puVar5;
    *(uint *)((int)this + 0xc) = uVar2;
  }
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
  }
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar6[3] = *(undefined4 *)(*(int *)((int)this + 0x18) + (uVar3 % *(uint *)((int)this + 0xc)) * 4)
  ;
  *puVar6 = param_2;
  puVar6[1] = uVar3;
  puVar6[4] = this;
  *(undefined4 **)(*(int *)((int)this + 0x18) + (uVar3 % *(uint *)((int)this + 0xc)) * 4) = puVar6;
  return puVar6;
}


