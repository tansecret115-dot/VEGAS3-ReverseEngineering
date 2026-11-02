/* Module: rmto3260.dll
   Function: FUN_662fb190
   Address: 662fb190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662fb190(void *this,ushort *param_1,ushort param_2,short param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  bVar15 = param_3 == 0;
  this_00 = (void *)0x1;
  *(undefined2 *)((int)this + 0x38) = 3;
  *(undefined2 *)((int)this + 0x36) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0x1f400000;
  *(undefined4 *)((int)this + 0x30) = 0x45fa0000;
  *(undefined2 *)((int)this + 0x34) = 0x10;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x3e) = 1;
  uVar2 = *param_1;
  if (bVar15) {
    iVar3 = FUN_662f2bd0((void *)0x1,uVar2);
    uVar2 = (ushort)iVar3;
    this_00 = extraout_ECX;
  }
  if (uVar2 != 3) {
    return 0x80040005;
  }
  uVar4 = (uint)param_1[1];
  if (bVar15) {
    uVar4 = FUN_662f2bd0(this_00,param_1[1]);
    this_00 = extraout_ECX_00;
  }
  *(short *)((int)this + 0x3c) = (short)(uVar4 + 4);
  uVar2 = param_1[2];
  *(ushort *)((int)this + 0x3e) = uVar2;
  if (bVar15) {
    iVar3 = FUN_662f2bd0(this_00,uVar2);
    *(short *)((int)this + 0x3e) = (short)iVar3;
  }
  uVar4 = *(uint *)(param_1 + 3);
  *(uint *)((int)this + 8) = uVar4;
  if (bVar15) {
    iVar3 = FUN_662f2c20(uVar4);
    *(int *)((int)this + 8) = iVar3;
  }
  uVar4 = *(uint *)(param_1 + 5);
  *(uint *)((int)this + 0xc) = uVar4;
  if (bVar15) {
    iVar3 = FUN_662f2c20(uVar4);
    *(int *)((int)this + 0xc) = iVar3;
  }
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0xc);
  uVar4 = *(uint *)(param_1 + 7);
  *(uint *)((int)this + 0x10) = uVar4;
  if (bVar15) {
    iVar3 = FUN_662f2c20(uVar4);
    *(int *)((int)this + 0x10) = iVar3;
  }
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
  *(undefined1 *)((int)this + 0x77) = 0;
  uVar4 = (uint)(byte)param_1[9];
  puVar5 = FUN_662f9f60((undefined4 *)((int)param_1 + 0x13),uVar4);
  *(undefined4 **)((int)this + 0x67) = puVar5;
  pbVar6 = (byte *)((int)param_1 + uVar4 + 0x13);
  uVar2 = (ushort)*pbVar6;
  _param_3 = (uint)uVar2;
  puVar5 = FUN_662f9f60((undefined4 *)((int)param_1 + uVar4 + 0x14),
                        CONCAT22((short)((uint)pbVar6 >> 0x10),uVar2));
  *(undefined4 **)((int)this + 0x6b) = puVar5;
  iVar3 = uVar4 + 0x14 + _param_3;
  pbVar6 = (byte *)((int)param_1 + iVar3);
  iVar3 = iVar3 + 1;
  uVar2 = (ushort)*pbVar6;
  _param_3 = (uint)uVar2;
  puVar5 = FUN_662f9f60((undefined4 *)((int)param_1 + iVar3),
                        CONCAT22((short)((uint)pbVar6 >> 0x10),uVar2));
  *(undefined4 **)((int)this + 0x6f) = puVar5;
  iVar3 = iVar3 + _param_3;
  pbVar6 = (byte *)((int)param_1 + iVar3);
  iVar3 = iVar3 + 1;
  uVar2 = (ushort)*pbVar6;
  _param_3 = (uint)uVar2;
  pcVar7 = (char *)FUN_662f9f60((undefined4 *)((int)param_1 + iVar3),
                                CONCAT22((short)((uint)pbVar6 >> 0x10),uVar2));
  iVar3 = iVar3 + _param_3;
  *(char **)((int)this + 0x73) = pcVar7;
  if (pcVar7 != (char *)0x0) {
    iVar10 = 5;
    bVar15 = true;
    pcVar12 = pcVar7;
    pcVar13 = &DAT_6630ba20;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      bVar15 = *pcVar12 == *pcVar13;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar15);
    if (!bVar15) {
      iVar10 = 5;
      bVar15 = true;
      pcVar12 = &DAT_6630ba50;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar15 = *pcVar7 == *pcVar12;
        pcVar7 = pcVar7 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar15);
      if (!bVar15) goto LAB_662fb3ba;
    }
    *(undefined1 *)((int)this + 0x66) = 2;
  }
LAB_662fb3ba:
  if ((ushort)iVar3 < param_2) {
    puVar8 = (undefined1 *)((int)param_1 + iVar3);
    iVar3 = iVar3 + 1;
    *(undefined1 *)((int)this + 0x77) = *puVar8;
  }
  else {
    *(undefined1 *)((int)this + 0x77) = 0;
  }
  if ((ushort)iVar3 < param_2) {
    bVar1 = *(byte *)((int)param_1 + iVar3);
    if (4 < bVar1) {
      bVar1 = 4;
    }
    uVar4 = (uint)(char)bVar1;
    puVar5 = (undefined4 *)((int)param_1 + iVar3 + 1);
    puVar14 = (undefined4 *)((int)this + 0x44);
    for (uVar11 = uVar4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar14 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar11 = uVar4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    *(undefined1 *)((int)this + uVar4 + 0x44) = 0;
  }
  uVar9 = (**(code **)(*(int *)this + 0x114))();
  *(undefined4 *)((int)this + 0x28) = uVar9;
  return 0;
}


