/* Module: rmbe3260.dll
   Function: FUN_66034c00
   Address: 66034c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66034c00(void *this,undefined1 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_10;
  int local_8;
  
  puVar1 = (uint *)((int)this + 0x46);
  uVar5 = FUN_66035520((int)puVar1);
  *puVar1 = uVar5;
  puVar6 = operator_new(uVar5);
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = (char)(*puVar1 >> 0x18);
    puVar6[1] = (char)(*puVar1 >> 0x10);
    puVar6[2] = (char)(*puVar1 >> 8);
    puVar6[3] = *(undefined1 *)puVar1;
    puVar6[4] = *(undefined1 *)((int)this + 0x4b);
    puVar6[5] = *(undefined1 *)((int)this + 0x4a);
    if (*(short *)((int)this + 0x4a) == 0) {
      puVar6[6] = *(undefined1 *)((int)this + 0x4d);
      puVar6[7] = *(undefined1 *)((int)this + 0x4c);
      puVar7 = puVar6 + 8;
      local_8 = 0;
      puVar8 = puVar7;
      if (*(short *)((int)this + 0x4c) != 0) {
        do {
          *puVar8 = *(undefined1 *)(local_8 * 2 + 1 + *(int *)((int)this + 0x4e));
          puVar7 = puVar8 + 2;
          puVar8[1] = *(undefined1 *)(local_8 * 2 + *(int *)((int)this + 0x4e));
          local_8 = local_8 + 1;
          puVar8 = puVar7;
        } while (local_8 < (int)(uint)*(ushort *)((int)this + 0x4c));
      }
      iVar10 = 0;
      if (*(short *)((int)this + 0x4c) != 0) {
        do {
          *puVar7 = (char)((uint)*(undefined4 *)(*(int *)((int)this + 0x52) + iVar10 * 4) >> 0x18);
          puVar7[1] = (char)((uint)*(undefined4 *)(*(int *)((int)this + 0x52) + iVar10 * 4) >> 0x10)
          ;
          puVar7[2] = (char)((uint)*(undefined4 *)(*(int *)((int)this + 0x52) + iVar10 * 4) >> 8);
          puVar7[3] = *(undefined1 *)(*(int *)((int)this + 0x52) + iVar10 * 4);
          puVar7 = puVar7 + 4;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)(uint)*(ushort *)((int)this + 0x4c));
      }
      *puVar7 = *(undefined1 *)((int)this + 0x57);
      puVar7[1] = *(undefined1 *)((int)this + 0x56);
      iVar10 = 0;
      puVar7 = puVar7 + 2;
      puVar8 = puVar7;
      if (*(short *)((int)this + 0x56) != 0) {
        do {
          *puVar8 = *(undefined1 *)(*(int *)((int)this + 0x58) + 1 + iVar10 * 2);
          puVar7 = puVar8 + 2;
          iVar2 = iVar10 * 2;
          iVar10 = iVar10 + 1;
          puVar8[1] = *(undefined1 *)(*(int *)((int)this + 0x58) + iVar2);
          puVar8 = puVar7;
        } while (iVar10 < (int)(uint)*(ushort *)((int)this + 0x56));
      }
      *puVar7 = *(undefined1 *)((int)this + 0x5d);
      puVar7[1] = *(undefined1 *)((int)this + 0x5c);
      local_8 = 0;
      if (*(short *)((int)this + 0x5c) != 0) {
        local_10 = 0;
        puVar8 = puVar7 + 2;
        do {
          puVar12 = (undefined4 *)(local_10 + *(int *)((int)this + 0x5e));
          *puVar8 = (char)((uint)*puVar12 >> 0x18);
          puVar8[1] = (char)((uint)*puVar12 >> 0x10);
          puVar8[2] = (char)((uint)*puVar12 >> 8);
          puVar8[3] = *(undefined1 *)puVar12;
          puVar8[4] = *(undefined1 *)((int)puVar12 + 5);
          puVar8[5] = *(undefined1 *)(puVar12 + 1);
          puVar7 = puVar8 + 6;
          if (*(short *)(puVar12 + 1) == 0) {
            *puVar7 = *(undefined1 *)((int)puVar12 + 6);
            bVar3 = *(byte *)((int)puVar12 + 6);
            puVar13 = *(undefined4 **)((int)puVar12 + 7);
            puVar14 = (undefined4 *)(puVar8 + 7);
            for (uVar11 = (uint)(bVar3 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            for (uVar11 = bVar3 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            puVar8 = (undefined1 *)((int)(puVar8 + 7) + (uint)*(byte *)((int)puVar12 + 6));
            *puVar8 = (char)((uint)*(undefined4 *)((int)puVar12 + 0xb) >> 0x18);
            puVar8[1] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xb) >> 0x10);
            puVar8[2] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xb) >> 8);
            puVar8[3] = *(undefined1 *)((int)puVar12 + 0xb);
            puVar8[4] = *(undefined1 *)(puVar12 + 4);
            puVar8[5] = *(undefined1 *)((int)puVar12 + 0xf);
            uVar4 = *(ushort *)((int)puVar12 + 0xf);
            puVar13 = *(undefined4 **)((int)puVar12 + 0x11);
            puVar14 = (undefined4 *)(puVar8 + 6);
            for (uVar11 = (uint)(uVar4 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            for (uVar11 = uVar4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            puVar7 = (undefined1 *)((int)(puVar8 + 6) + (uint)*(ushort *)((int)puVar12 + 0xf));
          }
          local_8 = local_8 + 1;
          local_10 = local_10 + 0x15;
          puVar8 = puVar7;
        } while (local_8 < (int)(uint)*(ushort *)((int)this + 0x5c));
      }
    }
    *(uint *)((int)this + 0x3e) = uVar5;
    *(undefined1 **)((int)this + 0x42) = puVar6;
    iVar10 = FUN_66034780((int)this + 0xc);
    *(int *)((int)this + 0x10) = iVar10;
    uVar9 = FUN_66033e60(this,param_1,param_2);
    *(undefined4 *)((int)this + 0x42) = 0;
    *(undefined4 *)((int)this + 0x3e) = 0;
    operator_delete(puVar6);
    iVar10 = FUN_66034780((int)this + 0xc);
    *(int *)((int)this + 0x10) = iVar10;
    return uVar9;
  }
  return 0x8007000e;
}


