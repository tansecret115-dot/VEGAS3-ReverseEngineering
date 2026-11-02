/* Module: rmto3260.dll
   Function: FUN_662f0ec0
   Address: 662f0ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662f0ec0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  size_t _Size;
  int iVar6;
  uint uVar7;
  void *local_14;
  void *local_8;
  
  local_8 = *(void **)((int)this + 0x14);
  _Size = *(int *)((int)this + 0x18) - (int)local_8;
  if (_Size == 0) {
    if (*(int *)((int)this + 0x24) != 0) {
      return (void *)0x0;
    }
    if (*(int *)((int)this + 0x40) != 0) {
      return (void *)0x0;
    }
  }
  iVar4 = *(int *)((int)this + 0x20);
  iVar1 = *param_1;
  iVar6 = (*(int *)(iVar4 + 4) - *(int *)(iVar4 + 0xc)) + (int)local_8;
  *(int *)((int)this + 0x14) = (int)local_8 + iVar1;
  if (*(uint *)(iVar4 + 0x10) < (uint)((int)local_8 + iVar1)) {
    local_14 = (void *)0x0;
    uVar7 = ((*(int *)((int)this + 0x4e) + -1 + *param_1) / *(int *)((int)this + 0x4e)) *
            *(int *)((int)this + 0x4e);
    if (*(int *)(iVar4 + 0x14) == 0) {
      if (uVar7 - *(int *)((int)this + 0x4e) != 0) {
        local_14 = *(void **)(iVar4 + 0xc);
        pvVar3 = operator_new(uVar7);
        iVar4 = *(int *)((int)this + 0x20);
        *(void **)(iVar4 + 0xc) = pvVar3;
        *(void **)(iVar4 + 0x10) = (void *)((int)pvVar3 + uVar7);
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
      }
    }
    else {
      *(void **)(iVar4 + 0x10) = local_8;
      puVar2 = operator_new(0x18);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        **(undefined4 **)((int)this + 0x20) = puVar2;
        *puVar2 = 0;
        puVar2[5] = 0;
      }
      *(undefined4 **)((int)this + 0x20) = puVar2;
      pvVar3 = operator_new(uVar7);
      iVar4 = *(int *)((int)this + 0x20);
      *(void **)(iVar4 + 0xc) = pvVar3;
      *(void **)(iVar4 + 0x10) = (void *)((int)pvVar3 + uVar7);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    *(int *)(*(int *)((int)this + 0x20) + 4) = iVar6;
    *(int *)(*(int *)((int)this + 0x20) + 8) = iVar6;
    if (_Size != 0) {
      memmove(*(void **)(*(int *)((int)this + 0x20) + 0xc),local_8,_Size);
    }
    if (local_14 != (void *)0x0) {
      operator_delete(local_14);
    }
    iVar4 = *(int *)((int)this + 0x20);
    local_8 = *(void **)(iVar4 + 0xc);
    *(int *)((int)this + 0x14) = *param_1 + (int)local_8;
    *(size_t *)((int)this + 0x18) = (int)local_8 + _Size;
  }
  iVar4 = (**(code **)(**(int **)((int)this + 4) + 4))
                    (*(int *)((int)this + 0x18),*(int *)(iVar4 + 0x10) - *(int *)((int)this + 0x18))
  ;
  if (iVar4 < 1) {
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x24) = 1;
    }
    else {
      iVar4 = (**(code **)(**(int **)((int)this + 4) + 0x14))();
      if (iVar4 != 0x2733) {
        uVar5 = (**(code **)(**(int **)((int)this + 4) + 0x14))();
        *(undefined4 *)((int)this + 0x40) = uVar5;
      }
    }
    if ((_Size == 0) && ((*(int *)((int)this + 0x24) != 0 || (*(int *)((int)this + 0x40) != 0)))) {
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x18);
      return (void *)0x0;
    }
  }
  else {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + iVar4;
  }
  if (*(uint *)((int)this + 0x18) < *(uint *)((int)this + 0x14)) {
    *param_1 = *(uint *)((int)this + 0x18) - (int)local_8;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x18);
  }
  *(int *)(*(int *)((int)this + 0x20) + 0x14) = *(int *)(*(int *)((int)this + 0x20) + 0x14) + 1;
  return local_8;
}


