/* Module: mcmpgdec.dll
   Function: FUN_10008f0c
   Address: 10008f0c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008f0c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x640) = uVar2;
  uVar2 = FUN_10003a04(piVar1,8);
  *(uint *)(param_1 + 0x644) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x648) = uVar2;
  FUN_10003a04(piVar1,8);
  uVar2 = FUN_10003a04(piVar1,0x15);
  *(uint *)(param_1 + 0x64c) = uVar2 >> 1;
  uVar2 = FUN_10003a04(piVar1,0x17);
  *(uint *)(param_1 + 0x650) = uVar2 >> 1;
  uVar2 = FUN_10003a04(piVar1,0x16);
  *(uint *)(param_1 + 0x654) = uVar2;
  return;
}


