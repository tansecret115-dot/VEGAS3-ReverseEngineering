/* Module: mpgmux.dll
   Function: FUN_1000abd0
   Address: 1000abd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000abd0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar1 < uVar2) {
    return ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0xc)) - uVar2) + uVar1;
  }
  return uVar1 - uVar2;
}


