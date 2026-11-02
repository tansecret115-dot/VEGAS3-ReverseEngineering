/* Module: vegas30.exe
   Function: FUN_004a0b60
   Address: 004a0b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a0d5c) */

void FUN_004a0b60(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  if ((param_2 & 0x400) != 0) {
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  if (((param_3 & 0x800) != 0) &&
     (piVar2 = (int *)FUN_005b87b0(*(undefined4 *)(param_1 + 0xbc8)), piVar2 != (int *)0x0)) {
    iVar3 = *piVar2;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        FUN_005cf450(*(undefined4 *)(piVar2[2] + iVar5 * 4));
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  if (((param_3 & 0x40200) != 0) &&
     (iVar3 = FUN_005baa80(*(undefined4 *)(param_1 + 0xbc8)), iVar3 != 0)) {
    FUN_004530a0(param_1,0x7fff);
  }
  if (((param_3 & 0x40000) != 0) || ((param_3 & 0x20) != 0)) {
    FUN_00469280(param_1);
    DAT_0064767c = DAT_0064767c | 0x400;
  }
  if ((param_3 & 0x3000) != 0) {
    FUN_005b8da0(*(undefined4 *)(param_1 + 0xbc8),param_3 >> 0xc & 1,1);
    FUN_00456c20(param_1);
    if (((byte)DAT_00647678 & 2) != 0) {
      param_3 = param_3 | 2;
    }
  }
  if ((param_3 & 0x100000) != 0) {
    FUN_005b8fb0(*(undefined4 *)(param_1 + 0xbc8));
    DAT_0064767c = DAT_0064767c | 0x400;
  }
  if ((param_2 & 2) != 0) {
    puVar6 = &DAT_0064b110;
    puVar7 = (undefined4 *)(param_1 + 0x20);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_004a4020(param_1,DAT_006476c8,DAT_006476cc);
    FUN_00453030(param_1);
  }
  if (((param_3 & 1) == 0) && ((param_3 & 0x16) == 0)) {
    if (((param_3 & 0xa0) == 0) && ((param_2 & 0x200) == 0)) {
      if (((param_3 & 0x40) != 0) || ((param_3 & 0x100) != 0)) {
        FUN_004a0920(param_1,param_2,param_3);
        DAT_0064767c = DAT_0064767c | 0x400;
      }
    }
    else {
      FUN_004530a0(param_1,0);
      DAT_0064767c = DAT_0064767c | 0x400;
    }
  }
  else {
    if (((param_2 & 0x80) != 0) &&
       (*(int *)(param_1 + 0xb90) != 0 || *(int *)(param_1 + 0xb94) != 0)) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        lVar8 = *(longlong *)(param_1 + 0x600);
      }
      else {
        lVar8 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
      }
      iVar3 = *(int *)(param_1 + 0xb94);
      uVar1 = *(uint *)(param_1 + 0xb90);
      uVar9 = __allrem(lVar8,uVar1,iVar3);
      lVar8 = lVar8 + CONCAT44((iVar3 - (int)((ulonglong)uVar9 >> 0x20)) -
                               (uint)(uVar1 < (uint)uVar9),uVar1 - (uint)uVar9);
      if (lVar8 < *(longlong *)(param_1 + 0xcc8)) {
        lVar8 = *(longlong *)(param_1 + 0xcc8);
      }
      *(longlong *)(param_1 + 0xcc8) = lVar8;
    }
    FUN_004ca990(param_1);
    if (((param_3 & 1) == 0) && ((param_3 & 0x14) == 0)) {
      uVar10 = 0x4000;
    }
    else {
      uVar10 = 0x1000;
    }
    FUN_004530a0(param_1,uVar10);
  }
  if (((param_3 & 0x10000) != 0) || ((param_2 & 0x10) != 0)) {
    FUN_004530a0(param_1,1);
    FUN_00453030(param_1);
  }
  if (((((param_3 & 4) != 0) || ((param_3 & 0x18) != 0)) || ((param_3 & 0xc000) != 0)) ||
     ((param_2 & 2) != 0)) {
    **(uint **)(param_1 + 0x5d0) = **(uint **)(param_1 + 0x5d0) | 1;
    FUN_00456c20(param_1);
    FUN_004530a0(param_1,0x1000);
    FUN_00506170(1);
    if (((param_3 & 8) != 0) || ((param_3 & 4) != 0)) {
      FUN_005b9080(*(undefined4 *)(param_1 + 0xbc8));
      FUN_005baa80(*(undefined4 *)(param_1 + 0xbc8));
      DAT_0064767c = DAT_0064767c | 0x400;
    }
  }
  if ((param_3 & 0x4000) != 0) {
    lVar4 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
    FUN_004c3f50(DAT_00647630,lVar4);
    lVar4 = Mixer_NumBusTypePorts(4);
    FUN_004c42b0(DAT_00647630,lVar4);
  }
  if (((param_2 & 8) != 0) || ((param_3 & 0x400) != 0)) {
    FUN_004530a0(param_1,0x3ff);
  }
  if (((param_2 & 0x1000) != 0) || ((param_3 & 0x200000) != 0)) {
    FUN_005410b0(*(undefined4 *)(param_1 + 0xbc8),0,1);
  }
  return;
}


