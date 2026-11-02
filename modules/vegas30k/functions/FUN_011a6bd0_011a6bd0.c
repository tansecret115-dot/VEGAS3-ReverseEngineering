/* Module: vegas30k.dll
   Function: FUN_011a6bd0
   Address: 011a6bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a6bd0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_011a6c70();
  }
  hMem = GlobalAlloc(2,*(int *)(param_1 + 0x60) << 5);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  puVar3 = puVar1;
  for (iVar2 = (*(uint *)(param_1 + 0x60) & 0x7ffffff) << 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined4 **)(param_1 + 0x54) = puVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      *(undefined4 **)(param_1 + 0x58) = puVar1;
      puVar1 = puVar1 + 8;
      *(undefined4 **)(*(int *)(param_1 + 0x58) + 0x18) = puVar1;
      uVar4 = *(int *)(param_1 + 100) + 1;
      *(uint *)(param_1 + 100) = uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x60));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 100) = 0;
  return 0;
}


