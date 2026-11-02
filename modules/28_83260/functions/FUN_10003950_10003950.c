/* Module: 28_83260.dll
   Function: FUN_10003950
   Address: 10003950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10003950(void *this,undefined2 *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  
  DAT_1000c564 = (undefined4 *)(*(int *)((int)this + 0x974) + -0x14);
  if (DAT_1000c564 < &DAT_1000c3a8) {
    DAT_1000c564 = (undefined4 *)(*(int *)((int)this + 0x974) + 0xdc);
  }
  iVar3 = (int)(DAT_1000c564 + -0x40030ea) >> 2;
  if (*(int *)((int)this + 0x14d0) != 0) {
    puVar9 = (undefined4 *)((int)this + 0x125c);
    puVar10 = (undefined4 *)((int)this + 0xcc4);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x14d0) = 0;
  if (*(int *)((int)this + 0x14d4) != 0) {
    puVar9 = (undefined4 *)((int)this + 0x1288);
    puVar10 = (undefined4 *)((int)this + 0xd1c);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x14d4) = 0;
  FUN_10005940(this,(int)DAT_1000c564,(float *)&DAT_1000c910);
  FUN_100060b0(this,(float *)&DAT_1000c9c8,*(int *)((int)this + 0x14c8));
  *(undefined4 *)((int)this + 0x14c8) = 0;
  iVar7 = 0;
  do {
    iVar4 = iVar7 + 4;
    *(float *)((int)&DAT_1000c550 + iVar7) =
         *(float *)((int)&DAT_1000c910 + iVar7) - *(float *)((int)&DAT_1000c9c8 + iVar7);
    iVar7 = iVar4;
  } while (iVar4 < 0x14);
  if (*(int *)((int)this + 0x14cc) != 0) {
    puVar9 = (undefined4 *)((int)this + 0x1230);
    puVar10 = (undefined4 *)((int)this + 0xc6c);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x14cc) = 0;
  fVar11 = FUN_10006230();
  _DAT_1000807c = (float)fVar11;
  _DAT_10008080 = _DAT_100070b8 / _DAT_1000807c;
  iVar7 = 0;
  do {
    iVar4 = iVar7 + 4;
    *(float *)((int)&DAT_1000c570 + iVar7) = *(float *)((int)&DAT_1000c550 + iVar7) * _DAT_10008080;
    iVar7 = iVar4;
  } while (iVar4 < 0x14);
  if (*(int *)((int)this + 0x14dc) != 0) {
    puVar9 = (undefined4 *)((int)this + 0x14b4);
    puVar10 = (undefined4 *)((int)this + 0x1174);
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x14dc) = 0;
  FUN_100040b0((int)this + 0x1174,0x1000c570,0x1000c498);
  if (*(int *)((int)this + 0x14d8) != 0) {
    puVar9 = (undefined4 *)((int)this + 0x12b4);
    puVar10 = (undefined4 *)((int)this + 0xd74);
    for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x14d8) = 0;
  uVar5 = FUN_10004140(this,(float *)&DAT_1000c498);
  *param_1 = (short)uVar5;
  FUN_10004100(uVar5,(float *)&DAT_1000c370);
  pfVar6 = (float *)&DAT_1000c370;
  pfVar1 = (float *)((int)this + iVar3 * 4 + 0x15d0);
  pfVar8 = pfVar1;
  do {
    fVar2 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    *pfVar8 = _DAT_1000807c * fVar2;
    pfVar8 = pfVar8 + 1;
  } while ((int)pfVar6 < 0x1000c384);
  FUN_100062a0(this,pfVar1,(float *)((int)this + (iVar3 / 5) * 4 + 0x16c0));
  FUN_100060e0(this,pfVar1,(int)this + iVar3 * 4 + 0x14e0);
  DAT_1000c568 = iVar3 + 5;
  if (0x3b < DAT_1000c568) {
    DAT_1000c568 = iVar3 + -0x37;
  }
  if (*(int *)((int)this + 0x1c44) == 4) {
    *(undefined4 *)((int)this + 0x1c44) = 1;
    return;
  }
  *(int *)((int)this + 0x1c44) = *(int *)((int)this + 0x1c44) + 1;
  return;
}


