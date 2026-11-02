/* Module: sftrans1.dll
   Function: FUN_004869f0
   Address: 004869f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004869f0(int param_1,int param_2)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((-1 < param_2) && (param_2 < **(int **)(param_1 + 0xac) + 3)) {
    iVar1 = FUN_00486940(param_2);
    hMem = GlobalAlloc(0x40,*(int *)(iVar1 + 0xc) << 2);
    puVar2 = GlobalLock(hMem);
    puVar4 = puVar2;
    for (uVar3 = *(uint *)(iVar1 + 0xc) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


