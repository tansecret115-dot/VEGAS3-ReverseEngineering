/* Module: rmbe3260.dll
   Function: FUN_6603e0c0
   Address: 6603e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6603e0c0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(short *)(param_1 + 2) == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 10) + (uint)*(byte *)((int)param_1 + 0x2d) + 0x2e +
            *(int *)((int)param_1 + 0x32);
    if (*param_2 == 0) {
      pvVar2 = operator_new(uVar5);
      *param_2 = (int)pvVar2;
    }
    param_1[1] = uVar5;
    puVar3 = (undefined1 *)*param_2;
    *puVar3 = (char)((uint)*param_1 >> 0x18);
    puVar3[1] = (char)((uint)*param_1 >> 0x10);
    puVar3[2] = (char)((uint)*param_1 >> 8);
    puVar3[3] = *(undefined1 *)param_1;
    puVar3[4] = (char)((uint)param_1[1] >> 0x18);
    puVar3[5] = (char)((uint)param_1[1] >> 0x10);
    puVar3[6] = (char)((uint)param_1[1] >> 8);
    puVar3[7] = *(undefined1 *)(param_1 + 1);
    puVar3[8] = *(undefined1 *)((int)param_1 + 9);
    puVar3[9] = *(undefined1 *)(param_1 + 2);
    if (*(short *)(param_1 + 2) == 0) {
      puVar3[10] = *(undefined1 *)((int)param_1 + 0xb);
      puVar3[0xb] = *(undefined1 *)((int)param_1 + 10);
      puVar3[0xc] = (char)((uint)param_1[3] >> 0x18);
      puVar3[0xd] = (char)((uint)param_1[3] >> 0x10);
      puVar3[0xe] = (char)((uint)param_1[3] >> 8);
      puVar3[0xf] = *(undefined1 *)(param_1 + 3);
      puVar3[0x10] = (char)((uint)param_1[4] >> 0x18);
      puVar3[0x11] = (char)((uint)param_1[4] >> 0x10);
      puVar3[0x12] = (char)((uint)param_1[4] >> 8);
      puVar3[0x13] = *(undefined1 *)(param_1 + 4);
      puVar3[0x14] = (char)((uint)param_1[5] >> 0x18);
      puVar3[0x15] = (char)((uint)param_1[5] >> 0x10);
      puVar3[0x16] = (char)((uint)param_1[5] >> 8);
      puVar3[0x17] = *(undefined1 *)(param_1 + 5);
      puVar3[0x18] = (char)((uint)param_1[6] >> 0x18);
      puVar3[0x19] = (char)((uint)param_1[6] >> 0x10);
      puVar3[0x1a] = (char)((uint)param_1[6] >> 8);
      puVar3[0x1b] = *(undefined1 *)(param_1 + 6);
      puVar3[0x1c] = (char)((uint)param_1[7] >> 0x18);
      puVar3[0x1d] = (char)((uint)param_1[7] >> 0x10);
      puVar3[0x1e] = (char)((uint)param_1[7] >> 8);
      puVar3[0x1f] = *(undefined1 *)(param_1 + 7);
      puVar3[0x20] = (char)((uint)param_1[8] >> 0x18);
      puVar3[0x21] = (char)((uint)param_1[8] >> 0x10);
      puVar3[0x22] = (char)((uint)param_1[8] >> 8);
      puVar3[0x23] = *(undefined1 *)(param_1 + 8);
      puVar3[0x24] = (char)((uint)param_1[9] >> 0x18);
      puVar3[0x25] = (char)((uint)param_1[9] >> 0x10);
      puVar3[0x26] = (char)((uint)param_1[9] >> 8);
      puVar3[0x27] = *(undefined1 *)(param_1 + 9);
      puVar3[0x28] = *(undefined1 *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10);
      puVar4 = *(undefined4 **)((int)param_1 + 0x29);
      puVar7 = (undefined4 *)(puVar3 + 0x29);
      for (uVar5 = (uint)(bVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = bVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar3 = (undefined1 *)((int)(puVar3 + 0x29) + (uint)*(byte *)(param_1 + 10));
      *puVar3 = *(undefined1 *)((int)param_1 + 0x2d);
      bVar1 = *(byte *)((int)param_1 + 0x2d);
      puVar4 = (undefined4 *)(puVar3 + 1);
      puVar7 = *(undefined4 **)((int)param_1 + 0x2e);
      puVar8 = puVar4;
      for (uVar5 = (uint)(bVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = bVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar4 = (undefined4 *)((int)puVar4 + (uint)*(byte *)((int)param_1 + 0x2d));
      *(char *)puVar4 = (char)((uint)*(undefined4 *)((int)param_1 + 0x32) >> 0x18);
      *(char *)((int)puVar4 + 1) = (char)((uint)*(undefined4 *)((int)param_1 + 0x32) >> 0x10);
      *(char *)((int)puVar4 + 2) = (char)((uint)*(undefined4 *)((int)param_1 + 0x32) >> 8);
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)param_1 + 0x32);
      uVar5 = *(uint *)((int)param_1 + 0x32);
      puVar7 = *(undefined4 **)((int)param_1 + 0x36);
      for (uVar6 = uVar5 >> 2; puVar4 = puVar4 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    *param_3 = param_1[1];
    return 0;
  }
  return 0x80040005;
}


