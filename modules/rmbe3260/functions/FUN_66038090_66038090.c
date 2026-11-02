/* Module: rmbe3260.dll
   Function: FUN_66038090
   Address: 66038090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66038090(void *this,undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = (char)((uint)*(undefined4 *)this >> 0x18);
  param_1[1] = (char)((uint)*(undefined4 *)this >> 0x10);
  param_1[2] = (char)((uint)*(undefined4 *)this >> 8);
  param_1[3] = *(undefined1 *)this;
  param_1[4] = *(undefined1 *)((int)this + 5);
  param_1[5] = *(undefined1 *)((int)this + 4);
  param_1[6] = *(undefined1 *)((int)this + 7);
  param_1[7] = *(undefined1 *)((int)this + 6);
  param_1[8] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x18);
  param_1[9] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x10);
  param_1[10] = (char)((uint)*(undefined4 *)((int)this + 8) >> 8);
  param_1[0xb] = *(undefined1 *)((int)this + 8);
  param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x18);
  param_1[0xd] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x10);
  param_1[0xe] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 8);
  param_1[0xf] = *(undefined1 *)((int)this + 0xc);
  param_1[0x10] = *(undefined1 *)((int)this + 0x11);
  param_1[0x11] = *(undefined1 *)((int)this + 0x10);
  param_1[0x12] = *(undefined1 *)((int)this + 0x13);
  param_1[0x13] = *(undefined1 *)((int)this + 0x12);
  param_1[0x14] = *(undefined1 *)((int)this + 0x15);
  param_1[0x15] = *(undefined1 *)((int)this + 0x14);
  param_1[0x16] = *(undefined1 *)((int)this + 0x17);
  param_1[0x17] = *(undefined1 *)((int)this + 0x16);
  param_1[0x18] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x18);
  param_1[0x19] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10);
  param_1[0x1a] = (char)((uint)*(undefined4 *)((int)this + 0x18) >> 8);
  param_1[0x1b] = *(undefined1 *)((int)this + 0x18);
  param_1[0x1c] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 0x18);
  param_1[0x1d] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 0x10);
  param_1[0x1e] = (char)((uint)*(undefined4 *)((int)this + 0x1c) >> 8);
  param_1[0x1f] = *(undefined1 *)((int)this + 0x1c);
  param_1[0x20] = (char)((uint)*(undefined4 *)((int)this + 0x20) >> 0x18);
  param_1[0x21] = (char)((uint)*(undefined4 *)((int)this + 0x20) >> 0x10);
  param_1[0x22] = (char)((uint)*(undefined4 *)((int)this + 0x20) >> 8);
  param_1[0x23] = *(undefined1 *)((int)this + 0x20);
  param_1[0x24] = (char)((uint)*(undefined4 *)((int)this + 0x24) >> 0x18);
  param_1[0x25] = (char)((uint)*(undefined4 *)((int)this + 0x24) >> 0x10);
  param_1[0x26] = (char)((uint)*(undefined4 *)((int)this + 0x24) >> 8);
  param_1[0x27] = *(undefined1 *)((int)this + 0x24);
  param_1[0x28] = *(undefined1 *)((int)this + 0x29);
  param_1[0x29] = *(undefined1 *)((int)this + 0x28);
  param_1[0x2a] = *(undefined1 *)((int)this + 0x2b);
  param_1[0x2b] = *(undefined1 *)((int)this + 0x2a);
  param_1[0x2c] = (char)((uint)*(undefined4 *)((int)this + 0x2c) >> 0x18);
  param_1[0x2d] = (char)((uint)*(undefined4 *)((int)this + 0x2c) >> 0x10);
  param_1[0x2e] = (char)((uint)*(undefined4 *)((int)this + 0x2c) >> 8);
  param_1[0x2f] = *(undefined1 *)((int)this + 0x2c);
  param_1[0x30] = (char)((uint)*(undefined4 *)((int)this + 0x30) >> 0x18);
  param_1[0x31] = (char)((uint)*(undefined4 *)((int)this + 0x30) >> 0x10);
  param_1[0x32] = (char)((uint)*(undefined4 *)((int)this + 0x30) >> 8);
  param_1[0x33] = *(undefined1 *)((int)this + 0x30);
  param_1[0x34] = *(undefined1 *)((int)this + 0x35);
  param_1[0x35] = *(undefined1 *)((int)this + 0x34);
  param_1[0x36] = *(undefined1 *)((int)this + 0x37);
  param_1[0x37] = *(undefined1 *)((int)this + 0x36);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((int)this + 0x38);
  param_1[0x3c] = *(undefined1 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)((int)this + 0x3d);
  param_1[0x41] = *(undefined1 *)((int)this + 0x41);
  param_1[0x42] = *(undefined1 *)((int)this + 0x42);
  param_1[0x43] = *(undefined1 *)((int)this + 0x43);
  param_1[0x44] = *(undefined1 *)((int)this + 0x44);
  param_1[0x45] = *(undefined1 *)((int)this + 0x45);
  bVar1 = *(byte *)((int)this + 0x45);
  puVar5 = *(undefined4 **)((int)this + 0x46);
  puVar6 = (undefined4 *)(param_1 + 0x46);
  for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar2 = (undefined1 *)((int)(param_1 + 0x46) + (uint)*(byte *)((int)this + 0x45));
  *puVar2 = *(undefined1 *)((int)this + 0x4a);
  puVar3 = (undefined4 *)(puVar2 + 1);
  bVar1 = *(byte *)((int)this + 0x4a);
  puVar5 = *(undefined4 **)((int)this + 0x4b);
  puVar6 = puVar3;
  for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar2 = (undefined1 *)((int)puVar3 + (uint)*(byte *)((int)this + 0x4a));
  *puVar2 = *(undefined1 *)((int)this + 0x4f);
  puVar3 = (undefined4 *)(puVar2 + 1);
  bVar1 = *(byte *)((int)this + 0x4f);
  puVar5 = *(undefined4 **)((int)this + 0x50);
  puVar6 = puVar3;
  for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar2 = (undefined1 *)((int)puVar3 + (uint)*(byte *)((int)this + 0x4f));
  *puVar2 = *(undefined1 *)((int)this + 0x54);
  puVar3 = (undefined4 *)(puVar2 + 1);
  bVar1 = *(byte *)((int)this + 0x54);
  puVar5 = *(undefined4 **)((int)this + 0x55);
  puVar6 = puVar3;
  for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *param_2 = (undefined1 *)((int)puVar3 + ((uint)*(byte *)((int)this + 0x54) - (int)param_1));
  return;
}


