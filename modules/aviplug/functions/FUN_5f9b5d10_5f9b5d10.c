/* Module: aviplug.dll
   Function: FUN_5f9b5d10
   Address: 5f9b5d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9b5d10(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = ftol();
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  *(undefined2 *)(param_1 + 0x3e) = uVar1;
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  uVar1 = ftol();
  *(undefined2 *)(param_1 + 0x44) = uVar1;
  *(undefined2 *)(param_1 + 0x46) = uVar1;
  *(undefined2 *)(param_1 + 0x48) = uVar1;
  uVar1 = ftol();
  *(undefined2 *)(param_1 + 0x4c) = uVar1;
  *(undefined2 *)(param_1 + 0x4e) = uVar1;
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  uVar1 = ftol();
  *(undefined2 *)(param_1 + 0x54) = uVar1;
  *(undefined2 *)(param_1 + 0x56) = uVar1;
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  *(undefined2 *)(param_1 + 0x5a) = 0xffff;
  *(undefined2 *)(param_1 + 0x52) = 0xffff;
  *(undefined2 *)(param_1 + 0x4a) = 0xffff;
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  return;
}


