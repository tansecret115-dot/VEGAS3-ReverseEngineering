/* Module: qt4plug.dll
   Function: FUN_5f55f4c0
   Address: 5f55f4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f55f4c0(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  *(int *)(param_1 + 0x5c) = iVar1 + 4;
  *(undefined2 *)(param_1 + 0x3e) = uVar2;
  *(undefined2 *)(param_1 + 0x40) = uVar2;
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  return;
}


