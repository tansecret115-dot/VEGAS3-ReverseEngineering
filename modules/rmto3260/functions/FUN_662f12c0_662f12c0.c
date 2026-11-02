/* Module: rmto3260.dll
   Function: FUN_662f12c0
   Address: 662f12c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662f12c0(void *this,int *param_1)

{
  int iVar1;
  size_t _Size;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *local_c;
  void *local_8;
  
  local_8 = *(void **)((int)this + 0x2c);
  _Size = *(int *)((int)this + 0x30) - (int)local_8;
  if (*(int *)((int)this + 0x40) != 0) {
    return (void *)0x0;
  }
  iVar5 = *(int *)((int)this + 0x38);
  iVar2 = (*(int *)(iVar5 + 4) - *(int *)(iVar5 + 0xc)) + (int)local_8;
  iVar1 = *param_1;
  *(int *)((int)this + 0x2c) = iVar1 + (int)local_8;
  if (*(uint *)(iVar5 + 0x10) < (uint)(iVar1 + (int)local_8)) {
    iVar1 = *(int *)((int)this + 0x4e);
    local_c = (void *)0x0;
    uVar6 = ((iVar1 + -1 + *param_1) / iVar1) * iVar1;
    if (*(int *)(iVar5 + 0x14) == 0) {
      if (uVar6 - iVar1 != 0) {
        local_c = *(void **)(iVar5 + 0xc);
        pvVar4 = operator_new(uVar6);
        iVar5 = *(int *)((int)this + 0x38);
        *(void **)(iVar5 + 0xc) = pvVar4;
        *(void **)(iVar5 + 0x10) = (void *)((int)pvVar4 + uVar6);
        *(undefined4 *)(iVar5 + 4) = 0;
        *(undefined4 *)(iVar5 + 8) = 0;
      }
    }
    else {
      *(void **)(iVar5 + 0x10) = local_8;
      puVar3 = operator_new(0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        **(undefined4 **)((int)this + 0x38) = puVar3;
        *puVar3 = 0;
        puVar3[5] = 0;
      }
      *(undefined4 **)((int)this + 0x38) = puVar3;
      pvVar4 = operator_new(uVar6);
      iVar5 = *(int *)((int)this + 0x38);
      *(void **)(iVar5 + 0xc) = pvVar4;
      *(void **)(iVar5 + 0x10) = (void *)((int)pvVar4 + uVar6);
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 8) = 0;
    }
    *(int *)(*(int *)((int)this + 0x38) + 4) = iVar2;
    *(int *)(*(int *)((int)this + 0x38) + 8) = iVar2;
    if (_Size != 0) {
      memmove(*(void **)(*(int *)((int)this + 0x38) + 0xc),local_8,_Size);
    }
    if (local_c != (void *)0x0) {
      operator_delete(local_c);
    }
    iVar5 = *(int *)((int)this + 0x38);
    local_8 = *(void **)(iVar5 + 0xc);
    *(int *)((int)this + 0x2c) = *param_1 + (int)local_8;
    *(size_t *)((int)this + 0x30) = (int)local_8 + _Size;
  }
  if (*(uint *)((int)this + 0x30) < *(uint *)((int)this + 0x2c)) {
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x2c);
  }
  *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  return local_8;
}


