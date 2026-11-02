/* Module: rmme3260.dll
   Function: FUN_662191a0
   Address: 662191a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662191a0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,uint param_5,undefined4 *param_6)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  byte *in_stack_ffffffd4;
  uint local_8;
  
  uStack_34 = 0x662191bb;
  FUN_66250110(&stack0xffffffd4,(int *)&param_1);
  iVar4 = FUN_662193b0(this,in_stack_ffffffd4);
  if (iVar4 == 0) {
    uVar3 = *(ushort *)((int)this + 0x5c);
    uVar9 = (uint)(ushort)(uVar3 + 1) * 0x15;
    pvVar5 = operator_new(uVar9);
    if (uVar3 != 0) {
      iVar4 = 0;
      local_8 = (uint)uVar3;
      do {
        puVar10 = (undefined4 *)(*(int *)((int)this + 0x5e) + iVar4);
        puVar6 = (undefined4 *)((int)pvVar5 + iVar4);
        for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar4 = iVar4 + 0x15;
        local_8 = local_8 - 1;
        *(undefined1 *)puVar6 = *(undefined1 *)puVar10;
      } while (local_8 != 0);
    }
    piVar1 = (int *)((int)pvVar5 + (uVar9 - 0x15));
    *(undefined2 *)(piVar1 + 1) = 0;
    uVar9 = param_1[-2];
    *(char *)((int)piVar1 + 6) = (char)uVar9;
    puVar6 = operator_new(uVar9 & 0xff);
    uVar9 = param_5;
    *(undefined4 **)((int)piVar1 + 7) = puVar6;
    bVar2 = *(byte *)((int)piVar1 + 6);
    puVar10 = param_1;
    for (uVar8 = (uint)(bVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar8 = bVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined4 *)((int)piVar1 + 0xb) = param_4;
    *(short *)((int)piVar1 + 0xf) = (short)param_5;
    uVar8 = param_5 & 0xffff;
    puVar6 = operator_new(uVar8);
    *(undefined4 **)((int)piVar1 + 0x11) = puVar6;
    puVar10 = param_6;
    for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar4 = FUN_66218f10((int)piVar1);
    *piVar1 = iVar4;
    *(ushort *)((int)this + 0x5c) = uVar3 + 1;
    if (*(void **)((int)this + 0x5e) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x5e));
    }
    *(void **)((int)this + 0x5e) = pvVar5;
    FUN_66250210((int *)&param_1);
    return 0;
  }
  FUN_66250110(auStack_38,(int *)&param_1);
  iVar4 = FUN_662195d0(this);
  FUN_66250210((int *)&param_1);
  return iVar4;
}


