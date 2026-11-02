/* Module: pngu3266.dll
   Function: FUN_6061f100
   Address: 6061f100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061f100(void *this,ushort *param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *local_8;
  
  if ((param_1 == (ushort *)0x0) || (param_2 == 0)) {
    return 0x80070057;
  }
  if (*(int *)((int)this + 100) != 0) {
    return 0x80040009;
  }
  local_8 = param_1;
  if ((char)*param_1 == '!') {
    local_8 = param_1 + 1;
    if (*(char *)((int)param_1 + 1) != -7) {
      return 0x80040009;
    }
    *(undefined4 *)((int)this + 0x38) = 1;
    do {
      uVar3 = (uint)(byte)*local_8;
      local_8 = (ushort *)((int)local_8 + 1);
      if (3 < uVar3) {
        FUN_6061f0c0((byte *)local_8,(uint *)((int)this + 0x24));
      }
      local_8 = (ushort *)((int)local_8 + uVar3);
    } while (uVar3 != 0);
  }
  if ((byte)*local_8 != 0x2c) {
    do {
      if ((ushort *)(param_2 + (int)param_1) <= local_8) break;
      local_8 = local_8 + 1;
      FUN_6061f5e0((uint *)&local_8,0);
    } while ((byte)*local_8 != 0x2c);
  }
  if ((ushort *)(param_2 + (int)param_1) <= local_8) {
    return 0x80004005;
  }
  local_8 = (ushort *)((int)local_8 + 1);
  FUN_6061f050(local_8,this);
  local_8 = (ushort *)((int)local_8 + 9);
  if (*(int *)((int)this + 0x10) == 1) {
    if (*(void **)((int)this + 0x3c) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x3c));
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    uVar3 = *(int *)((int)this + 0x20) * 3;
    puVar2 = operator_new(uVar3);
    *(undefined4 **)((int)this + 0x3c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar6 = local_8;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = *(undefined4 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar2 = (char)*puVar6;
      puVar6 = (ushort *)((int)puVar6 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    local_8 = (ushort *)((int)local_8 + uVar3);
  }
  if (*(void **)((int)this + 0x4c) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  uVar3 = *(int *)((int)this + 8) * *(int *)((int)this + 0xc);
  *(uint *)((int)this + 0x50) = uVar3;
  puVar2 = operator_new(uVar3);
  *(undefined4 **)((int)this + 0x4c) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    if (*(void **)((int)this + 0x3c) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x3c));
      *(undefined4 *)((int)this + 0x3c) = 0;
      return 0x8007000e;
    }
  }
  else {
    uVar3 = *(uint *)((int)this + 0x50);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    pvVar1 = *(void **)((int)this + 0x68);
    if (pvVar1 != (void *)0x0) {
      FUN_6061f6a0((int)pvVar1);
      operator_delete(pvVar1);
      *(undefined4 *)((int)this + 0x68) = 0;
    }
    puVar2 = operator_new(0x10050);
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_6061f610(puVar2);
    }
    *(int *)((int)this + 0x68) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((int)this + 100) = 1;
      return 0;
    }
    if (*(void **)((int)this + 0x3c) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x3c));
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    if (*(void **)((int)this + 0x4c) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x4c));
      *(undefined4 *)((int)this + 0x4c) = 0;
    }
  }
  return 0x8007000e;
}


