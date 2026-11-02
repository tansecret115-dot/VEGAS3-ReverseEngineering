/* Module: mpegin.dll
   Function: FUN_10006e70
   Address: 10006e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006e70(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x674) = uVar2;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      *(uint *)(param_1 + 0x274 + (uint)(byte)(&DAT_10018a28)[iVar3] * 4) = uVar2;
      pbVar1 = &DAT_10018a28 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(param_1 + 0x474 + (uint)*pbVar1 * 4) =
           *(undefined4 *)(param_1 + 0x274 + (uint)*pbVar1 * 4);
    } while (iVar3 < 0x40);
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x678) = uVar2;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      *(uint *)(param_1 + 0x374 + (uint)(byte)(&DAT_10018a28)[iVar3] * 4) = uVar2;
      pbVar1 = &DAT_10018a28 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(param_1 + 0x574 + (uint)*pbVar1 * 4) =
           *(undefined4 *)(param_1 + 0x374 + (uint)*pbVar1 * 4);
    } while (iVar3 < 0x40);
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x67c) = uVar2;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      pbVar1 = &DAT_10018a28 + iVar3;
      iVar3 = iVar3 + 1;
      *(uint *)(param_1 + 0x474 + (uint)*pbVar1 * 4) = uVar2;
    } while (iVar3 < 0x40);
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x680) = uVar2;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      pbVar1 = &DAT_10018a28 + iVar3;
      iVar3 = iVar3 + 1;
      *(uint *)(param_1 + 0x574 + (uint)*pbVar1 * 4) = uVar2;
    } while (iVar3 < 0x40);
  }
  return;
}


