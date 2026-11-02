/* Module: vegas30.exe
   Function: FUN_005b98e0
   Address: 005b98e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b98e0(undefined4 *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  *param_1 = DAT_0064861c;
  param_1[1] = DAT_00648614;
  param_1[2] = DAT_00648618;
  dVar2 = _DAT_00648628;
  uVar4 = DAT_00648624;
  uVar1 = CONCAT44(DAT_006477ec,DAT_006477e8);
  puVar9 = param_1 + 4;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  dVar3 = _DAT_00610fd8;
  param_1[4] = 0x40;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = uVar4;
  if (dVar2 <= dVar3) {
    dVar2 = _DAT_006106d0;
  }
  *(double *)(param_1 + 10) = dVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[6] = DAT_00648620;
  uVar4 = DAT_00648634;
  param_1[0xc] = DAT_00648630;
  param_1[0xd] = uVar4;
  param_1[0x14] = 1;
  param_1[0x15] = 1;
  param_1[0x16] = param_1[1];
  param_1[0x17] = param_1[2];
  param_1[0x1d] = 1;
  uVar4 = DAT_006477ec;
  param_1[0x1e] = DAT_006477e8;
  param_1[0x1f] = uVar4;
  uVar7 = param_1[0x20];
  param_1[0x20] = uVar7 & 0xfffffffe;
  uVar7 = uVar7 & 0xfffffffc;
  uVar5 = (DAT_00648638 & 1) << 1 | uVar7;
  param_1[0x20] = uVar5;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),(char)uVar5);
  uVar8 = (DAT_0064863c & 1) << 2;
  param_1[0x20] = uVar8 | uVar7 & 0xfffffffb;
  uVar5 = (DAT_00648640 & 1) << 3;
  param_1[0x20] = uVar5 | uVar8 | uVar7 & 0xfffffff3;
  param_1[0x20] = (DAT_00648644 & 1) << 4 | uVar5 | uVar8 | uVar7 & 0xffffffe3;
  param_1[0x21] = param_1[0x21] & 0xfffffffe;
  uVar4 = DAT_00648664;
  param_1[0x22] = DAT_00648664;
  param_1[0x23] = DAT_00648668;
  param_1[0x24] = uVar4;
  param_1[0x25] = 0;
  param_1[0x29] = DAT_0064850c;
  param_1[0x28] = DAT_00648510;
  param_1[0x27] = DAT_00648514;
  param_1[0x2a] = DAT_00648518;
  param_1[0x2d] = DAT_0064855c;
  param_1[0x2c] = DAT_00648560;
  param_1[0x2b] = DAT_00648564;
  param_1[0x2e] = DAT_00648568;
  param_1[0x2f] = DAT_0064866c;
  uVar4 = DAT_00648674;
  param_1[0x30] = DAT_00648670;
  param_1[0x31] = uVar4;
  param_1[0x32] = DAT_00648678;
  uVar4 = DAT_00649e00;
  param_1[0x26] = 0;
  param_1[0x33] = uVar4;
  return;
}


