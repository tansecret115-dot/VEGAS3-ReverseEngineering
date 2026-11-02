/* Module: vegas30.exe
   Function: FUN_00595450
   Address: 00595450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595450(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00595b30(param_1,*(undefined4 *)(param_1 + 400));
  *(int *)(param_1 + 0xa0) = iVar1;
  puVar5 = (undefined4 *)(iVar1 + 0x58);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x3c) = 0;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0xa8);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x48) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x38) = 0;
  uVar4 = *(uint *)(*(int *)(param_1 + 0xa0) + 0xf8);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0xa0) + 0x100);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


