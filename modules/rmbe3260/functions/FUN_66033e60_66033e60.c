/* Module: rmbe3260.dll
   Function: FUN_66033e60
   Address: 66033e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66033e60(void *this,undefined1 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar4 = (undefined4 *)((int)this + 0xc);
  uVar2 = FUN_66034780((int)puVar4);
  *(uint *)((int)this + 0x10) = uVar2;
  if (param_2 < uVar2) {
    return 0x80004005;
  }
  *param_1 = (char)((uint)*puVar4 >> 0x18);
  param_1[1] = (char)((uint)*puVar4 >> 0x10);
  param_1[2] = (char)((uint)*puVar4 >> 8);
  param_1[3] = *(undefined1 *)puVar4;
  param_1[4] = (char)((uint)*(undefined4 *)((int)this + 0x10) >> 0x18);
  param_1[5] = (char)((uint)*(undefined4 *)((int)this + 0x10) >> 0x10);
  param_1[6] = (char)((uint)*(undefined4 *)((int)this + 0x10) >> 8);
  param_1[7] = *(undefined1 *)((int)this + 0x10);
  param_1[8] = *(undefined1 *)((int)this + 0x15);
  param_1[9] = *(undefined1 *)((int)this + 0x14);
  if (*(short *)((int)this + 0x14) == 0) {
    param_1[10] = *(undefined1 *)((int)this + 0x17);
    param_1[0xb] = *(undefined1 *)((int)this + 0x16);
    param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x18);
    param_1[0xd] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10);
    param_1[0xe] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 8);
    param_1[0xf] = *(undefined1 *)((int)this + 0x18);
    param_1[0x10] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 0x18);
    param_1[0x11] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 0x10);
    param_1[0x12] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 8);
    param_1[0x13] = *(undefined1 *)((int)this + 0x1c);
    param_1[0x14] = (char)((uint)*(undefined4 *)((int)this + 0x20) >> 0x18);
    param_1[0x15] = (char)((uint)*(undefined4 *)((int)this + 0x20) >> 0x10);
    param_1[0x16] = (char)((uint)*(undefined4 *)((int)this + 0x20) >> 8);
    param_1[0x17] = *(undefined1 *)((int)this + 0x20);
    param_1[0x18] = (char)((uint)*(undefined4 *)((int)this + 0x24) >> 0x18);
    param_1[0x19] = (char)((uint)*(undefined4 *)((int)this + 0x24) >> 0x10);
    param_1[0x1a] = (char)((uint)*(undefined4 *)((int)this + 0x24) >> 8);
    param_1[0x1b] = *(undefined1 *)((int)this + 0x24);
    param_1[0x1c] = (char)((uint)*(undefined4 *)((int)this + 0x28) >> 0x18);
    param_1[0x1d] = (char)((uint)*(undefined4 *)((int)this + 0x28) >> 0x10);
    param_1[0x1e] = (char)((uint)*(undefined4 *)((int)this + 0x28) >> 8);
    param_1[0x1f] = *(undefined1 *)((int)this + 0x28);
    param_1[0x20] = (char)((uint)*(undefined4 *)((int)this + 0x2c) >> 0x18);
    param_1[0x21] = (char)((uint)*(undefined4 *)((int)this + 0x2c) >> 0x10);
    param_1[0x22] = (char)((uint)*(undefined4 *)((int)this + 0x2c) >> 8);
    param_1[0x23] = *(undefined1 *)((int)this + 0x2c);
    param_1[0x24] = (char)((uint)*(undefined4 *)((int)this + 0x30) >> 0x18);
    param_1[0x25] = (char)((uint)*(undefined4 *)((int)this + 0x30) >> 0x10);
    param_1[0x26] = (char)((uint)*(undefined4 *)((int)this + 0x30) >> 8);
    param_1[0x27] = *(undefined1 *)((int)this + 0x30);
    param_1[0x28] = *(undefined1 *)((int)this + 0x34);
    bVar1 = *(byte *)((int)this + 0x34);
    puVar4 = *(undefined4 **)((int)this + 0x35);
    puVar6 = (undefined4 *)(param_1 + 0x29);
    for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar3 = (undefined1 *)((int)(param_1 + 0x29) + (uint)*(byte *)((int)this + 0x34));
    *puVar3 = *(undefined1 *)((int)this + 0x39);
    bVar1 = *(byte *)((int)this + 0x39);
    puVar4 = (undefined4 *)(puVar3 + 1);
    puVar6 = *(undefined4 **)((int)this + 0x3a);
    puVar7 = puVar4;
    for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar4 = (undefined4 *)((int)puVar4 + (uint)*(byte *)((int)this + 0x39));
    *(char *)puVar4 = (char)((uint)*(undefined4 *)((int)this + 0x3e) >> 0x18);
    *(char *)((int)puVar4 + 1) = (char)((uint)*(undefined4 *)((int)this + 0x3e) >> 0x10);
    *(char *)((int)puVar4 + 2) = (char)((uint)*(undefined4 *)((int)this + 0x3e) >> 8);
    *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)this + 0x3e);
    uVar2 = *(uint *)((int)this + 0x3e);
    puVar6 = *(undefined4 **)((int)this + 0x42);
    for (uVar5 = uVar2 >> 2; puVar4 = puVar4 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar6;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return 0;
}


