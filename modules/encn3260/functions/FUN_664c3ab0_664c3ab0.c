/* Module: encn3260.dll
   Function: FUN_664c3ab0
   Address: 664c3ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c3ab0(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_2 != 0xffffffff) {
    *(uint *)((int)this + 0xc) = param_2;
  }
  if (param_1 == 0) {
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
  if (*(int *)this == 0) {
    puVar1 = operator_new(param_1 * 4);
    *(undefined4 **)this = puVar1;
    for (uVar3 = param_1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)((int)this + 8) = param_1;
    *(uint *)((int)this + 4) = param_1;
    return;
  }
  if ((int)param_1 <= *(int *)((int)this + 8)) {
    iVar4 = *(int *)((int)this + 4);
    if (iVar4 < (int)param_1) {
      puVar1 = (undefined4 *)(*(int *)this + iVar4 * 4);
      for (uVar3 = param_1 - iVar4 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar1 = 0;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    *(uint *)((int)this + 4) = param_1;
    return;
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)((int)this + 4) + (*(int *)((int)this + 4) >> 0x1f & 7U)) >> 3;
    iVar5 = 4;
    if (3 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 < 0x401) {
      if (iVar4 < 4) {
        iVar4 = 4;
      }
    }
    else {
      iVar4 = 0x400;
    }
  }
  param_2 = iVar4 + *(int *)((int)this + 8);
  if ((int)param_2 <= (int)param_1) {
    param_2 = param_1;
  }
  puVar2 = operator_new(param_2 * 4);
  puVar1 = *(undefined4 **)this;
  puVar6 = puVar2;
  for (uVar3 = *(uint *)((int)this + 4) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar1 = puVar2 + *(int *)((int)this + 4);
  for (uVar3 = param_1 - *(int *)((int)this + 4) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  operator_delete(*(void **)this);
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 **)this = puVar2;
  *(uint *)((int)this + 8) = param_2;
  return;
}


