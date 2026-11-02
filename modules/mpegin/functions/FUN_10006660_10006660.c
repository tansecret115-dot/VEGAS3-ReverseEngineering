/* Module: mpegin.dll
   Function: FUN_10006660
   Address: 10006660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10006660(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0xc) = 0;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xc);
  *(uint *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xc);
  *(uint *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),4);
  *(uint *)(param_1 + 0x174) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),4);
  *(uint *)(param_1 + 0x178) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x13);
  *(uint *)(param_1 + 0x17c) = uVar2 >> 1;
  *(double *)(param_1 + 0x38) = (double)(uVar2 >> 1) * _DAT_10016128;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),10);
  *(uint *)(param_1 + 0x180) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x184) = uVar2;
  if (8 < (int)*(uint *)(param_1 + 0x178)) {
    *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 7;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(&DAT_10018ae8 + *(int *)(param_1 + 0x178) * 8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_10018aec + *(int *)(param_1 + 0x178) * 8);
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x674) = uVar2;
  if (uVar2 == 0) {
    iVar5 = 0;
    puVar4 = (uint *)(param_1 + 0x274);
    do {
      pbVar1 = &DAT_10018aa8 + iVar5;
      iVar5 = iVar5 + 1;
      *puVar4 = (uint)*pbVar1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 0x40);
  }
  else {
    iVar5 = 0;
    do {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      pbVar1 = &DAT_10018a28 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint *)(param_1 + 0x274 + (uint)*pbVar1 * 4) = uVar2;
    } while (iVar5 < 0x40);
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x678) = uVar2;
  if (uVar2 == 0) {
    puVar3 = (undefined4 *)(param_1 + 0x374);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0x10;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    iVar5 = 0;
    do {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      pbVar1 = &DAT_10018a28 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint *)(param_1 + 0x374 + (uint)*pbVar1 * 4) = uVar2;
    } while (iVar5 < 0x40);
  }
  puVar3 = (undefined4 *)(param_1 + 0x474);
  iVar5 = 0x40;
  do {
    *puVar3 = puVar3[-0x80];
    puVar3[0x40] = puVar3[-0x40];
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_10006a50(param_1);
  return;
}


