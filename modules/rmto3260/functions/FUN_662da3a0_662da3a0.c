/* Module: rmto3260.dll
   Function: FUN_662da3a0
   Address: 662da3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_662da3a0(void *this,undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
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
  param_1[0x2c] = *(undefined1 *)((int)this + 0x2d);
  param_1[0x2d] = *(undefined1 *)((int)this + 0x2c);
  param_1[0x2e] = (char)((uint)*(undefined4 *)((int)this + 0x2e) >> 0x18);
  param_1[0x2f] = (char)((uint)*(undefined4 *)((int)this + 0x2e) >> 0x10);
  param_1[0x30] = (char)((uint)*(undefined4 *)((int)this + 0x2e) >> 8);
  param_1[0x31] = *(undefined1 *)((int)this + 0x2e);
  param_1[0x32] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x18);
  param_1[0x33] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x10);
  param_1[0x34] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 8);
  param_1[0x35] = *(undefined1 *)((int)this + 0x32);
  param_1[0x36] = (char)((uint)*(undefined4 *)((int)this + 0x36) >> 0x18);
  param_1[0x37] = (char)((uint)*(undefined4 *)((int)this + 0x36) >> 0x10);
  param_1[0x38] = (char)((uint)*(undefined4 *)((int)this + 0x36) >> 8);
  param_1[0x39] = *(undefined1 *)((int)this + 0x36);
  param_1[0x3a] = *(undefined1 *)((int)this + 0x3b);
  param_1[0x3b] = *(undefined1 *)((int)this + 0x3a);
  param_1[0x3c] = *(undefined1 *)((int)this + 0x3d);
  param_1[0x3d] = *(undefined1 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)((int)this + 0x3e);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)((int)this + 0x42);
  param_1[0x46] = *(undefined1 *)((int)this + 0x46);
  param_1[0x47] = *(undefined1 *)((int)this + 0x47);
  param_1[0x48] = *(undefined1 *)((int)this + 0x48);
  param_1[0x49] = *(undefined1 *)((int)this + 0x49);
  puVar4 = param_1 + 0x4a;
  if ((*(char *)((int)this + 0x49) != '\0') &&
     (iVar1 = 0, puVar5 = puVar4,
     0 < (int)((int)((ulonglong)*(ushort *)((int)this + 0x2a) /
                    (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x2c)) *
              (uint)*(ushort *)((int)this + 0x28)))) {
    do {
      *puVar5 = *(undefined1 *)(*(int *)((int)this + 0x4a) + 1 + iVar1 * 2);
      puVar4 = puVar5 + 2;
      puVar5[1] = *(undefined1 *)(*(int *)((int)this + 0x4a) + iVar1 * 2);
      iVar1 = iVar1 + 1;
      puVar5 = puVar4;
    } while (iVar1 < (int)((int)((ulonglong)*(ushort *)((int)this + 0x2a) /
                                (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x2c)) *
                          (uint)*(ushort *)((int)this + 0x28)));
  }
  *puVar4 = (char)((uint)*(undefined4 *)((int)this + 0x4e) >> 0x18);
  puVar4[1] = (char)((uint)*(undefined4 *)((int)this + 0x4e) >> 0x10);
  puVar4[2] = (char)((uint)*(undefined4 *)((int)this + 0x4e) >> 8);
  puVar4[3] = *(undefined1 *)((int)this + 0x4e);
  uVar3 = *(uint *)((int)this + 0x4e);
  puVar6 = *(undefined4 **)((int)this + 0x52);
  puVar7 = (undefined4 *)(puVar4 + 4);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar4 = (undefined1 *)((int)(puVar4 + 4) + *(int *)((int)this + 0x4e));
  *param_2 = (int)puVar4 - (int)param_1;
  return puVar4;
}


