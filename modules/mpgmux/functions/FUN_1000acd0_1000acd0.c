/* Module: mpgmux.dll
   Function: FUN_1000acd0
   Address: 1000acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000acd0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < uVar1) {
    return uVar1 - uVar2;
  }
  if (*(uint *)(param_1 + 0xc) < uVar1) {
    return (*(int *)(param_1 + 0x18) - uVar2) + (uVar1 - *(uint *)(param_1 + 0xc));
  }
  return *(int *)(param_1 + 0x18) - uVar2;
}


