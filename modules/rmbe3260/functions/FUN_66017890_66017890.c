/* Module: rmbe3260.dll
   Function: FUN_66017890
   Address: 66017890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66017890(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_c;
  int local_8;
  
  uVar3 = FUN_66017840(param_1);
  if (*(uint *)(param_1 + 0x34) < uVar3) {
    if (*(int *)(param_1 + 0x38) == 0) {
      return 0x8004000d;
    }
    if (*(void **)(param_1 + 0x30) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    pvVar4 = operator_new(uVar3);
    *(void **)(param_1 + 0x30) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0x8007000e;
    }
    *(uint *)(param_1 + 0x34) = uVar3;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x30);
  local_8 = 0;
  *puVar5 = *(undefined1 *)(param_1 + 0x19);
  puVar5[1] = *(undefined1 *)(param_1 + 0x18);
  puVar5[2] = *(undefined1 *)(param_1 + 0x1b);
  puVar5[3] = *(undefined1 *)(param_1 + 0x1a);
  puVar5[4] = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x18);
  puVar5[5] = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10);
  puVar5[6] = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 8);
  puVar5[7] = *(undefined1 *)(param_1 + 0x1c);
  puVar5[8] = (char)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x18);
  puVar5[9] = (char)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
  puVar5[10] = (char)((uint)*(undefined4 *)(param_1 + 0x20) >> 8);
  puVar5[0xb] = *(undefined1 *)(param_1 + 0x20);
  puVar5[0xc] = *(undefined1 *)(param_1 + 0x25);
  puVar5[0xd] = *(undefined1 *)(param_1 + 0x24);
  puVar5[0xe] = *(undefined1 *)(param_1 + 0x27);
  puVar5[0xf] = *(undefined1 *)(param_1 + 0x26);
  puVar5[0x10] = *(undefined1 *)(param_1 + 0x29);
  puVar5[0x11] = *(undefined1 *)(param_1 + 0x28);
  puVar5[0x12] = *(undefined1 *)(param_1 + 0x2b);
  puVar5[0x13] = *(undefined1 *)(param_1 + 0x2a);
  puVar5 = puVar5 + 0x14;
  if (*(short *)(param_1 + 0x1a) != 0) {
    local_c = 0;
    do {
      iVar8 = 0;
      puVar7 = (undefined4 *)(local_c + *(int *)(param_1 + 0x2c));
      *puVar5 = (char)((uint)*puVar7 >> 0x18);
      puVar5[1] = (char)((uint)*puVar7 >> 0x10);
      puVar5[2] = (char)((uint)*puVar7 >> 8);
      puVar5[3] = *(undefined1 *)puVar7;
      puVar5[4] = (char)((uint)puVar7[1] >> 0x18);
      puVar5[5] = (char)((uint)puVar7[1] >> 0x10);
      puVar5[6] = (char)((uint)puVar7[1] >> 8);
      puVar5[7] = *(undefined1 *)(puVar7 + 1);
      puVar5[8] = *(undefined1 *)((int)puVar7 + 9);
      puVar5[9] = *(undefined1 *)(puVar7 + 2);
      puVar5[10] = *(undefined1 *)((int)puVar7 + 0xb);
      puVar5[0xb] = *(undefined1 *)((int)puVar7 + 10);
      puVar5 = puVar5 + 0xc;
      puVar6 = puVar5;
      if (*(short *)((int)puVar7 + 10) != 0) {
        do {
          *puVar6 = *(undefined1 *)(puVar7[3] + 1 + iVar8 * 2);
          puVar5 = puVar6 + 2;
          iVar1 = iVar8 * 2;
          iVar8 = iVar8 + 1;
          puVar6[1] = *(undefined1 *)(puVar7[3] + iVar1);
          puVar6 = puVar5;
        } while (iVar8 < (int)(uint)*(ushort *)((int)puVar7 + 10));
      }
      *puVar5 = *(undefined1 *)((int)puVar7 + 0x11);
      puVar5[1] = *(undefined1 *)(puVar7 + 4);
      puVar5[2] = (char)((uint)*(undefined4 *)((int)puVar7 + 0x12) >> 0x18);
      puVar5[3] = (char)((uint)*(undefined4 *)((int)puVar7 + 0x12) >> 0x10);
      puVar5[4] = (char)((uint)*(undefined4 *)((int)puVar7 + 0x12) >> 8);
      puVar5[5] = *(undefined1 *)((int)puVar7 + 0x12);
      puVar5[6] = *(undefined1 *)((int)puVar7 + 0x17);
      puVar5[7] = *(undefined1 *)((int)puVar7 + 0x16);
      uVar2 = *(ushort *)((int)puVar7 + 0x16);
      puVar9 = (undefined4 *)puVar7[6];
      puVar10 = (undefined4 *)(puVar5 + 8);
      for (uVar3 = (uint)(uVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar5 = (undefined1 *)((int)(puVar5 + 8) + (uint)*(ushort *)((int)puVar7 + 0x16));
      *puVar5 = *(undefined1 *)((int)puVar7 + 0x1d);
      puVar5[1] = *(undefined1 *)(puVar7 + 7);
      uVar2 = *(ushort *)(puVar7 + 7);
      puVar9 = *(undefined4 **)((int)puVar7 + 0x1e);
      puVar10 = (undefined4 *)(puVar5 + 2);
      for (uVar3 = (uint)(uVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar5 = (undefined1 *)((int)(puVar5 + 2) + (uint)*(ushort *)(puVar7 + 7));
      local_8 = local_8 + 1;
      local_c = local_c + 0x22;
    } while (local_8 < (int)(uint)*(ushort *)(param_1 + 0x1a));
  }
  return 0;
}


