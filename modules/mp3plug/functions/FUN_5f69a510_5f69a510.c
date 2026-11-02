/* Module: mp3plug.dll
   Function: FUN_5f69a510
   Address: 5f69a510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_5f69a510(void *this,undefined1 *param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_c;
  SIZE_T local_8;
  undefined4 *local_4;
  
  local_c = *(int *)((int)this + 0x18);
  puVar2 = local_4;
  if ((*(byte *)((int)this + 0x1c) & 0x80) != 0) {
    local_8 = (local_c + 0xcU >> 2) + 0xd + local_c;
    pvVar1 = GlobalAlloc(0x42,local_8);
    puVar2 = GlobalLock(pvVar1);
    local_4 = puVar2;
    FUN_5f6bbed0(puVar2,&local_8,*(int *)((int)this + 0xc),*(undefined4 *)((int)this + 0x18),6);
    local_c = local_8 + 4;
  }
  if ((*(uint *)((int)this + 0x1c) & 0x40) != 0) {
    local_c = local_c + 1;
  }
  if ((*(uint *)((int)this + 0x1c) & 0x20) != 0) {
    local_c = local_c + 1;
  }
  puVar3 = FUN_5f69a490(*(undefined **)((int)this + 0x14));
  puVar7 = local_4;
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  param_1[4] = (char)((uint)local_c >> 0x18);
  param_1[5] = (char)((uint)local_c >> 0x10);
  param_1[6] = (char)((uint)local_c >> 8);
  param_1[7] = (char)local_c;
  param_1[8] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 8);
  param_1[9] = *(undefined1 *)((int)this + 0x1c);
  puVar6 = (undefined4 *)(param_1 + 10);
  if ((*(byte *)((int)this + 0x1c) & 0x80) != 0) {
    *(char *)puVar6 = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x18);
    param_1[0xb] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10);
    param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 8);
    param_1[0xd] = *(undefined1 *)((int)this + 0x18);
    puVar6 = (undefined4 *)(param_1 + 0xe);
  }
  if ((*(byte *)((int)this + 0x1c) & 0x40) != 0) {
    *(undefined1 *)puVar6 = *(undefined1 *)((int)this + 0x20);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((*(byte *)((int)this + 0x1c) & 0x20) != 0) {
    *(undefined1 *)puVar6 = *(undefined1 *)((int)this + 0x24);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((*(byte *)((int)this + 0x1c) & 0x80) == 0) {
    uVar4 = *(uint *)((int)this + 0x18);
    puVar2 = *(undefined4 **)((int)this + 0xc);
    puVar7 = puVar6;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return (undefined1 *)((int)puVar6 + *(int *)((int)this + 0x18));
  }
  puVar3 = (undefined1 *)((int)puVar6 + local_8);
  for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  pvVar1 = GlobalHandle(local_4);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(puVar7);
  GlobalFree(pvVar1);
  return puVar3;
}


