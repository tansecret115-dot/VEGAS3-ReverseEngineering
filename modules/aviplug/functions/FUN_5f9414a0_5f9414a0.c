/* Module: aviplug.dll
   Function: FUN_5f9414a0
   Address: 5f9414a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9414a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x78) - *(uint *)(param_1 + 0x1a8);
  iVar2 = (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x1ac)) -
          (uint)(*(uint *)(param_1 + 0x78) < *(uint *)(param_1 + 0x1a8));
  if ((*(int *)(param_1 + 0x1b4) <= iVar2) &&
     ((*(int *)(param_1 + 0x1b4) < iVar2 || (*(uint *)(param_1 + 0x1b0) < uVar1)))) {
    *(uint *)(param_1 + 0x1b0) = uVar1;
    *(int *)(param_1 + 0x1b4) = iVar2;
  }
  return;
}


