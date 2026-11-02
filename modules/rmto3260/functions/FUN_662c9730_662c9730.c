/* Module: rmto3260.dll
   Function: FUN_662c9730
   Address: 662c9730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662c9730(void *this,undefined1 *param_1,int *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *param_1 = (char)((uint)*(undefined4 *)this >> 0x18);
  param_1[1] = (char)((uint)*(undefined4 *)this >> 0x10);
  param_1[2] = (char)((uint)*(undefined4 *)this >> 8);
  param_1[3] = *(undefined1 *)this;
  param_1[4] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x18);
  param_1[5] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x10);
  param_1[6] = (char)((uint)*(undefined4 *)((int)this + 4) >> 8);
  param_1[7] = *(undefined1 *)((int)this + 4);
  param_1[8] = *(undefined1 *)((int)this + 9);
  param_1[9] = *(undefined1 *)((int)this + 8);
  puVar2 = param_1 + 10;
  if (*(short *)((int)this + 8) == 0) {
    param_1[10] = *(undefined1 *)((int)this + 0xb);
    param_1[0xb] = *(undefined1 *)((int)this + 10);
    param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x18);
    param_1[0xd] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x10);
    param_1[0xe] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 8);
    param_1[0xf] = *(undefined1 *)((int)this + 0xc);
    param_1[0x10] = (char)((uint)*(undefined4 *)((int)this + 0x10) >> 0x18);
    param_1[0x11] = (char)((uint)*(undefined4 *)((int)this + 0x10) >> 0x10);
    param_1[0x12] = (char)((uint)*(undefined4 *)((int)this + 0x10) >> 8);
    param_1[0x13] = *(undefined1 *)((int)this + 0x10);
    param_1[0x14] = (char)((uint)*(undefined4 *)((int)this + 0x14) >> 0x18);
    param_1[0x15] = (char)((uint)*(undefined4 *)((int)this + 0x14) >> 0x10);
    param_1[0x16] = (char)((uint)*(undefined4 *)((int)this + 0x14) >> 8);
    param_1[0x17] = *(undefined1 *)((int)this + 0x14);
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
    param_1[0x28] = *(undefined1 *)((int)this + 0x28);
    bVar1 = *(byte *)((int)this + 0x28);
    puVar6 = *(undefined4 **)((int)this + 0x29);
    puVar7 = (undefined4 *)(param_1 + 0x29);
    for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar2 = (undefined1 *)((int)(param_1 + 0x29) + (uint)*(byte *)((int)this + 0x28));
    *puVar2 = *(undefined1 *)((int)this + 0x2d);
    puVar3 = (undefined4 *)(puVar2 + 1);
    bVar1 = *(byte *)((int)this + 0x2d);
    puVar6 = *(undefined4 **)((int)this + 0x2e);
    puVar7 = puVar3;
    for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar2 = (undefined1 *)((int)puVar3 + (uint)*(byte *)((int)this + 0x2d));
    *puVar2 = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x18);
    puVar2[1] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x10);
    puVar2[2] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 8);
    puVar2[3] = *(undefined1 *)((int)this + 0x32);
    uVar4 = *(uint *)((int)this + 0x32);
    puVar6 = *(undefined4 **)((int)this + 0x36);
    puVar7 = (undefined4 *)(puVar2 + 4);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar2 = (undefined1 *)((int)(puVar2 + 4) + *(int *)((int)this + 0x32));
  }
  *param_2 = (int)puVar2 - (int)param_1;
  return;
}


