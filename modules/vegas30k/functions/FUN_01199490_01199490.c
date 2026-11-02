/* Module: vegas30k.dll
   Function: FUN_01199490
   Address: 01199490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01199490(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x4c0) != 0) {
    FUN_01199570();
  }
  hMem = GlobalAlloc(2,*(int *)(param_1 + 0x4cc) << 5);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  puVar3 = puVar1;
  for (iVar2 = (*(uint *)(param_1 + 0x4cc) & 0x7ffffff) << 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined4 **)(param_1 + 0x4c0) = puVar1;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (*(int *)(param_1 + 0x4cc) != 0) {
    do {
      *(undefined4 **)(param_1 + 0x4c4) = puVar1;
      puVar1 = puVar1 + 8;
      *(undefined4 **)(*(int *)(param_1 + 0x4c4) + 0x18) = puVar1;
      uVar4 = *(int *)(param_1 + 0x4d0) + 1;
      *(uint *)(param_1 + 0x4d0) = uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x4cc));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x18) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  return 0;
}


