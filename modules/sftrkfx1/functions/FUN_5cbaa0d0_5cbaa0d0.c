/* Module: sftrkfx1.dll
   Function: FUN_5cbaa0d0
   Address: 5cbaa0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa0d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(iVar2 + 0x30);
    puVar4 = (undefined4 *)(param_1 + 0x30);
    for (iVar1 = (*(uint *)(iVar2 + 0x28) & 0x7ffffff) << 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x28);
    FUN_5cbaa050(param_1);
  }
  return;
}


