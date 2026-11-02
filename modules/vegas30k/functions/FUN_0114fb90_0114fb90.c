/* Module: vegas30k.dll
   Function: FUN_0114fb90
   Address: 0114fb90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114fb90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x1bc);
  iVar3 = 1;
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar5 = (ushort *)(*(int *)(param_1 + 0x1c0) + 6);
    do {
      iVar2 = FUN_0114fbf0((uint)*puVar5 + iVar1);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_1 + 0x60));
  }
  return iVar3;
}


