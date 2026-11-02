/* Module: gifplug.dll
   Function: FUN_5f6e4f80
   Address: 5f6e4f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6e4f80(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  *(undefined2 *)(param_1 + 0x3e) = uVar2;
  *(undefined2 *)(param_1 + 0x40) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x44) = uVar2;
  *(undefined2 *)(param_1 + 0x46) = uVar2;
  *(undefined2 *)(param_1 + 0x48) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x4c) = uVar2;
  *(undefined2 *)(param_1 + 0x4e) = uVar2;
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x54) = uVar2;
  *(undefined2 *)(param_1 + 0x56) = uVar2;
  *(undefined2 *)(param_1 + 0x58) = uVar2;
  *(int *)(param_1 + 0x5c) = iVar1 + 0x10;
  *(undefined2 *)(param_1 + 0x5a) = 0xffff;
  *(undefined2 *)(param_1 + 0x52) = 0xffff;
  *(undefined2 *)(param_1 + 0x4a) = 0xffff;
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  return;
}


