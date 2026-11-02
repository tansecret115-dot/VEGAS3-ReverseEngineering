/* Module: rmbe3260.dll
   Function: FUN_660368c0
   Address: 660368c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660368c0(void *this,undefined1 *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  if (param_2 < uVar2) {
    local_8 = 0x8007000e;
  }
  else {
    *param_1 = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x18);
    param_1[1] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x10);
    param_1[2] = (char)((uint)*(undefined4 *)((int)this + 8) >> 8);
    param_1[3] = *(undefined1 *)((int)this + 8);
    param_1[4] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x18);
    param_1[5] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x10);
    param_1[6] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 8);
    param_1[7] = *(undefined1 *)((int)this + 0xc);
    param_1[8] = *(undefined1 *)((int)this + 0x11);
    param_1[9] = *(undefined1 *)((int)this + 0x10);
    if (*(short *)((int)this + 0x10) == 0) {
      param_1[10] = *(undefined1 *)((int)this + 0x13);
      param_1[0xb] = *(undefined1 *)((int)this + 0x12);
      uVar1 = *(ushort *)((int)this + 0x12);
      puVar4 = *(undefined4 **)((int)this + 0x14);
      puVar5 = (undefined4 *)(param_1 + 0xc);
      for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar3 = (undefined1 *)((int)(param_1 + 0xc) + (uint)*(ushort *)((int)this + 0x12));
      *puVar3 = *(undefined1 *)((int)this + 0x19);
      puVar3[1] = *(undefined1 *)((int)this + 0x18);
      uVar1 = *(ushort *)((int)this + 0x18);
      puVar4 = *(undefined4 **)((int)this + 0x1a);
      puVar5 = (undefined4 *)(puVar3 + 2);
      for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar3 = (undefined1 *)((int)(puVar3 + 2) + (uint)*(ushort *)((int)this + 0x18));
      *puVar3 = *(undefined1 *)((int)this + 0x1f);
      puVar3[1] = *(undefined1 *)((int)this + 0x1e);
      uVar1 = *(ushort *)((int)this + 0x1e);
      puVar4 = *(undefined4 **)((int)this + 0x20);
      puVar5 = (undefined4 *)(puVar3 + 2);
      for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar3 = (undefined1 *)((int)(puVar3 + 2) + (uint)*(ushort *)((int)this + 0x1e));
      *puVar3 = *(undefined1 *)((int)this + 0x25);
      puVar3[1] = *(undefined1 *)((int)this + 0x24);
      uVar1 = *(ushort *)((int)this + 0x24);
      puVar4 = *(undefined4 **)((int)this + 0x26);
      puVar5 = (undefined4 *)(puVar3 + 2);
      for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return 0;
    }
  }
  return local_8;
}


