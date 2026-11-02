/* Module: rv303260.dll
   Function: FUN_67208f80
   Address: 67208f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_67208f80(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 uStack_8;
  
  iVar1 = FUN_672081d0((LPVOID)((int)this + 0x32));
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)((int)this + 0xac);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  if (*(int *)((int)this + 0xb4) == 0x20524742) {
    return 0x67;
  }
  puVar3 = (undefined4 *)param_1[1];
  *puVar3 = 0x1a;
  *(undefined2 *)((int)puVar3 + 0x12) = *(undefined2 *)((int)this + 0xbe);
  *(undefined2 *)(puVar3 + 5) = *(undefined2 *)((int)this + 0xc0);
  *(undefined4 *)((int)puVar3 + 0x16) = *(undefined4 *)((int)this + 0xc2);
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)((int)this + 0xbc);
  if (*(short *)(puVar3 + 3) == 0) {
    *(undefined2 *)(puVar3 + 3) = *(undefined2 *)((int)this + 0xb8);
  }
  if (*(short *)((int)puVar3 + 0xe) == 0) {
    *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)this + 0xba);
  }
  puVar4 = (undefined4 *)((int)this + 0x92);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  local_30 = (uint)*(ushort *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0x14) = param_1[2];
  local_2c = (uint)*(ushort *)((int)this + 0xba);
  local_28 = *(undefined4 *)((int)this + 0xbe);
  local_24 = *(uint *)((int)this + 0xc2);
  iVar1 = FUN_67208f50(this,&local_30);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)((int)this + 0xd6) + 0x1ca) == 0) {
      pvVar2 = malloc((int)((uint)*(ushort *)((int)this + 0xba) *
                            (uint)*(ushort *)((int)this + 0xb8) * 3) / 2);
      *(void **)(*(int *)((int)this + 0xd6) + 0x1ca) = pvVar2;
      if (*(int *)(*(int *)((int)this + 0xd6) + 0x1ca) == 0) {
        return -0x7fffbffb;
      }
    }
    local_c = local_24;
    uStack_8 = 0;
    *(uint *)((int)this + 0xe2) = local_30;
    puVar3 = (undefined4 *)((int)this + 0x32);
    *(double *)((int)this + 0xf2) = (double)((float)local_24 * _DAT_67213320);
    *(uint *)((int)this + 0xe6) = local_2c;
    *(undefined4 *)((int)this + 0x18) = 1;
    local_20 = 0x16;
    local_1c = 1;
    local_18 = 0x63609696;
    FUN_672088e0(puVar3,&local_20);
    local_20 = 0x16;
    local_1c = 2;
    local_18 = 0x49629802;
    FUN_672088e0(puVar3,&local_20);
    FUN_6720b620();
    local_14 = 0x3fc;
    iVar1 = FUN_67208900(puVar3,&local_14);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x10e) = 3;
      *puVar3 = local_10;
      *(undefined4 *)((int)this + 0x10a) = 2;
      *(undefined4 *)((int)this + 0x106) = 2;
      return 0;
    }
  }
  return -0x7fffbffb;
}


