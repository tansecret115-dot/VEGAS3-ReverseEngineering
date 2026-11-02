/* Module: mpgmux.dll
   Function: FUN_1000ac80
   Address: 1000ac80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ac80(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar2 < uVar1) {
    uVar3 = *(int *)(param_1 + 0x18) - uVar1;
    uVar2 = (uVar3 - *(int *)(param_1 + 0xc)) + uVar2;
    if (uVar2 < param_2) {
      param_2 = uVar2;
    }
    if (uVar3 < param_2) {
      *(uint *)(param_1 + 0x10) = (*(int *)(param_1 + 0xc) - uVar3) + param_2;
      return;
    }
  }
  else if (uVar2 - uVar1 < param_2) {
    param_2 = uVar2 - uVar1;
  }
  *(uint *)(param_1 + 0x10) = uVar1 + param_2;
  return;
}


