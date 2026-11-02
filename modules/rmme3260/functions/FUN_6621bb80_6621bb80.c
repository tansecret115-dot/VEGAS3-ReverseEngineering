/* Module: rmme3260.dll
   Function: FUN_6621bb80
   Address: 6621bb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621bb80(void *this,undefined1 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x80070057;
  }
  puVar5 = (undefined4 *)((int)this + 8);
  uVar2 = FUN_6621bfa0((int)puVar5);
  if (param_2 < uVar2) {
    return 0x80070057;
  }
  *param_1 = (char)((uint)*puVar5 >> 0x18);
  param_1[1] = (char)((uint)*puVar5 >> 0x10);
  param_1[2] = (char)((uint)*puVar5 >> 8);
  param_1[3] = *(undefined1 *)puVar5;
  param_1[4] = *(undefined1 *)((int)this + 0xd);
  param_1[5] = *(undefined1 *)((int)this + 0xc);
  param_1[6] = *(undefined1 *)((int)this + 0xf);
  param_1[7] = *(undefined1 *)((int)this + 0xe);
  param_1[8] = *(undefined1 *)((int)this + 0x11);
  param_1[9] = *(undefined1 *)((int)this + 0x10);
  param_1[10] = (char)((uint)*(undefined4 *)((int)this + 0x12) >> 0x18);
  param_1[0xb] = (char)((uint)*(undefined4 *)((int)this + 0x12) >> 0x10);
  param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 0x12) >> 8);
  param_1[0xd] = *(undefined1 *)((int)this + 0x12);
  param_1[0xe] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 0x18);
  param_1[0xf] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 0x10);
  param_1[0x10] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 8);
  param_1[0x11] = *(undefined1 *)((int)this + 0x16);
  param_1[0x12] = (char)((uint)*(undefined4 *)((int)this + 0x1a) >> 0x18);
  param_1[0x13] = (char)((uint)*(undefined4 *)((int)this + 0x1a) >> 0x10);
  param_1[0x14] = (char)((uint)*(undefined4 *)((int)this + 0x1a) >> 8);
  param_1[0x15] = *(undefined1 *)((int)this + 0x1a);
  param_1[0x16] = *(undefined1 *)((int)this + 0x1e);
  bVar1 = *(byte *)((int)this + 0x1e);
  puVar5 = *(undefined4 **)((int)this + 0x1f);
  puVar6 = (undefined4 *)(param_1 + 0x17);
  for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar3 = (undefined1 *)((int)(param_1 + 0x17) + (uint)*(byte *)((int)this + 0x1e));
  *puVar3 = *(undefined1 *)((int)this + 0x23);
  bVar1 = *(byte *)((int)this + 0x23);
  puVar4 = (undefined4 *)(puVar3 + 1);
  puVar5 = *(undefined4 **)((int)this + 0x24);
  puVar6 = puVar4;
  for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar3 = (undefined1 *)((int)puVar4 + (uint)*(byte *)((int)this + 0x23));
  *puVar3 = *(undefined1 *)((int)this + 0x28);
  bVar1 = *(byte *)((int)this + 0x28);
  puVar4 = (undefined4 *)(puVar3 + 1);
  puVar5 = *(undefined4 **)((int)this + 0x29);
  puVar6 = puVar4;
  for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar3 = (undefined1 *)((int)puVar4 + (uint)*(byte *)((int)this + 0x28));
  *puVar3 = *(undefined1 *)((int)this + 0x2d);
  bVar1 = *(byte *)((int)this + 0x2d);
  puVar4 = (undefined4 *)(puVar3 + 1);
  puVar5 = *(undefined4 **)((int)this + 0x2e);
  puVar6 = puVar4;
  for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar3 = (undefined1 *)((int)puVar4 + (uint)*(byte *)((int)this + 0x2d));
  *puVar3 = *(undefined1 *)((int)this + 0x32);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((int)this + 0x33);
  puVar3[5] = *(undefined1 *)((int)this + 0x37);
  return 0;
}


