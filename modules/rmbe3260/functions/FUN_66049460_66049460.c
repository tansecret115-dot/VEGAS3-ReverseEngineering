/* Module: rmbe3260.dll
   Function: FUN_66049460
   Address: 66049460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66049460(void *this,ushort *param_1,undefined4 param_2,short param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  void *extraout_ECX_09;
  uint uVar8;
  undefined2 extraout_var;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  uint local_8;
  
  bVar10 = param_3 == 0;
  pvVar7 = (void *)(uint)bVar10;
  *(undefined2 *)((int)this + 0x36) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0x1f400000;
  *(undefined4 *)((int)this + 0x30) = 0x45fa0000;
  *(undefined2 *)((int)this + 0x34) = 0x10;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x49) = 0;
  *(undefined2 *)((int)this + 0x3e) = 1;
  uVar2 = *param_1;
  if (bVar10) {
    iVar3 = FUN_66055b90((void *)0x1,uVar2);
    uVar2 = (ushort)iVar3;
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
  }
  if (uVar2 != 4) {
    return 0x80040005;
  }
  *(undefined2 *)((int)this + 0x38) = 4;
  uVar2 = param_1[1];
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055b90(pvVar7,uVar2);
    uVar2 = (ushort)iVar3;
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),bVar10);
  }
  if (uVar2 != 0) {
    return 0x80040006;
  }
  *(undefined2 *)((int)this + 0x3a) = 0;
  uVar2 = param_1[2];
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055b90(pvVar7,uVar2);
    uVar2 = (ushort)iVar3;
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),bVar10);
  }
  *(ushort *)((int)this + 0x3c) = uVar2;
  uVar2 = param_1[3];
  *(ushort *)((int)this + 0x3e) = uVar2;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055b90(pvVar7,uVar2);
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_02 >> 8),bVar10);
    *(short *)((int)this + 0x3e) = (short)iVar3;
  }
  uVar8 = *(uint *)(param_1 + 4);
  *(uint *)((int)this + 8) = uVar8;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055be0(uVar8);
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_03 >> 8),bVar10);
    *(int *)((int)this + 8) = iVar3;
  }
  uVar8 = *(uint *)(param_1 + 6);
  *(uint *)((int)this + 0x10) = uVar8;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055be0(uVar8);
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_04 >> 8),bVar10);
    *(int *)((int)this + 0x10) = iVar3;
  }
  uVar8 = *(uint *)(param_1 + 8);
  *(uint *)((int)this + 0xc) = uVar8;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055be0(uVar8);
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_05 >> 8),bVar10);
    *(int *)((int)this + 0xc) = iVar3;
  }
  uVar8 = *(uint *)(param_1 + 10);
  *(uint *)((int)this + 0x40) = uVar8;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055be0(uVar8);
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_06 >> 8),bVar10);
    *(int *)((int)this + 0x40) = iVar3;
  }
  uVar2 = param_1[0xc];
  *(ushort *)((int)this + 0x4e) = uVar2;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055b90(pvVar7,uVar2);
    pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_07 >> 8),bVar10);
    *(short *)((int)this + 0x4e) = (short)iVar3;
  }
  if (*(short *)((int)this + 0x4e) == 0) {
    *(undefined2 *)((int)this + 0x4e) = 1;
  }
  uVar2 = param_1[0xd];
  *(ushort *)((int)this + 0x50) = uVar2;
  if ((char)pvVar7 != '\0') {
    iVar3 = FUN_66055b90(pvVar7,uVar2);
    pvVar7 = (void *)(uint)bVar10;
    *(short *)((int)this + 0x50) = (short)iVar3;
  }
  iVar3 = (uint)*(ushort *)((int)this + 0x4e) * (uint)*(ushort *)((int)this + 0x50);
  *(int *)((int)this + 0x90) = iVar3;
  *(int *)((int)this + 0x8c) = iVar3;
  uVar8 = *(uint *)(param_1 + 0xe);
  bVar11 = (char)pvVar7 != '\0';
  *(uint *)((int)this + 0x61) = uVar8;
  if (bVar11) {
    iVar3 = FUN_66055be0(uVar8);
    *(int *)((int)this + 0x61) = iVar3;
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + 0x2c) = uVar8;
  if (bVar11 && bVar10) {
    iVar3 = FUN_66055be0(uVar8);
    *(int *)((int)this + 0x2c) = iVar3;
  }
  fVar12 = FUN_66048510(*(uint *)((int)this + 0x2c));
  *(float *)((int)this + 0x30) = (float)fVar12;
  pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX_08 >> 8),bVar10);
  uVar2 = param_1[0x12];
  *(ushort *)((int)this + 0x34) = uVar2;
  if (bVar10) {
    iVar3 = FUN_66055b90(pvVar7,uVar2);
    *(short *)((int)this + 0x34) = (short)iVar3;
    pvVar7 = extraout_ECX_09;
  }
  uVar2 = param_1[0x13];
  *(ushort *)((int)this + 0x36) = uVar2;
  if (bVar10) {
    iVar3 = FUN_66055b90((void *)CONCAT31((int3)((uint)pvVar7 >> 8),bVar10),uVar2);
    *(short *)((int)this + 0x36) = (short)iVar3;
  }
  bVar1 = (byte)param_1[0x14];
  local_8 = (uint)bVar1;
  if (4 < bVar1) {
    local_8 = 4;
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x29);
  puVar9 = (undefined4 *)((int)this + 0x49);
  for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(undefined1 *)((int)this + local_8 + 0x49) = 0;
  iVar3 = bVar1 + 0x2a;
  bVar1 = *(byte *)((int)param_1 + bVar1 + 0x29);
  local_8 = (uint)bVar1;
  if (4 < bVar1) {
    local_8 = 4;
  }
  puVar4 = (undefined4 *)((int)param_1 + iVar3);
  puVar9 = (undefined4 *)((int)this + 0x44);
  for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar3 = iVar3 + (uint)bVar1;
  *(undefined1 *)((int)this + local_8 + 0x44) = 0;
  *(undefined1 *)((int)this + 0x65) = *(undefined1 *)((int)param_1 + iVar3);
  *(undefined1 *)((int)this + 0x77) = 0;
  *(undefined1 *)((int)this + 0x77) = *(undefined1 *)((int)param_1 + iVar3 + 1);
  *(undefined1 *)((int)this + 0x66) = *(undefined1 *)((int)param_1 + iVar3 + 2);
  if (*(void **)((int)this + 0x67) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x67));
    *(undefined4 *)((int)this + 0x67) = 0;
  }
  if (*(void **)((int)this + 0x6b) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x6b));
    *(undefined4 *)((int)this + 0x6b) = 0;
  }
  if (*(void **)((int)this + 0x6f) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x6f));
    *(undefined4 *)((int)this + 0x6f) = 0;
  }
  if (*(void **)((int)this + 0x73) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x73));
    *(undefined4 *)((int)this + 0x73) = 0;
  }
  uVar8 = CONCAT22((short)((uint)param_1 >> 0x10),(ushort)*(byte *)((int)param_1 + iVar3 + 3));
  puVar4 = FUN_66047800((undefined4 *)((int)param_1 + iVar3 + 4),uVar8);
  *(undefined4 **)((int)this + 0x67) = puVar4;
  uVar8 = iVar3 + 4 + uVar8;
  pbVar5 = (byte *)((int)param_1 + (uVar8 & 0xffff));
  uVar8 = uVar8 + 1;
  uVar2 = (ushort)*pbVar5;
  _param_3 = (uint)uVar2;
  puVar4 = FUN_66047800((undefined4 *)((int)param_1 + (uVar8 & 0xffff)),
                        CONCAT22((short)((uint)pbVar5 >> 0x10),uVar2));
  *(undefined4 **)((int)this + 0x6b) = puVar4;
  uVar8 = uVar8 + _param_3;
  pbVar5 = (byte *)((int)param_1 + (uVar8 & 0xffff));
  uVar8 = uVar8 + 1;
  uVar2 = (ushort)*pbVar5;
  _param_3 = (uint)uVar2;
  puVar4 = FUN_66047800((undefined4 *)((int)param_1 + (uVar8 & 0xffff)),
                        CONCAT22((short)((uint)pbVar5 >> 0x10),uVar2));
  *(undefined4 **)((int)this + 0x6f) = puVar4;
  uVar8 = uVar8 + _param_3;
  puVar4 = FUN_66047800((undefined4 *)((int)param_1 + (uVar8 + 1 & 0xffff)),
                        CONCAT22(extraout_var,(ushort)*(byte *)((int)param_1 + (uVar8 & 0xffff))));
  *(undefined4 **)((int)this + 0x73) = puVar4;
  uVar6 = (**(code **)(*(int *)this + 0x114))();
  *(undefined4 *)((int)this + 0x28) = uVar6;
  uVar6 = (**(code **)(*(int *)this + 0x78))((int)this + 0x49);
  return uVar6;
}


