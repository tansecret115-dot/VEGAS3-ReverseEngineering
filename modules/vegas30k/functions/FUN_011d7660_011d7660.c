/* Module: vegas30k.dll
   Function: FUN_011d7660
   Address: 011d7660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_011d7660(int param_1,uint param_2)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  *(uint *)(param_1 + 0x1c) = param_2;
  if (param_2 < 0x400) {
    return &DAT_80070057;
  }
  hMem = GlobalAlloc(2,param_2 + 0x40);
  puVar2 = GlobalLock(hMem);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined1 *)0x8007000e;
  }
  uVar3 = *(int *)(param_1 + 0x1c) + 0x40;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x24) = iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(int **)(param_1 + 0x18) = piVar5;
  *piVar5 = iVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = *(undefined4 *)(param_1 + 0x20);
  *(int *)(*(int *)(param_1 + 0x18) + 0xc) = param_1;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10) = 0;
  return (undefined1 *)0x0;
}


