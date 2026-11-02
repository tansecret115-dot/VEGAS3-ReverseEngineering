/* Module: mcmpgdec.dll
   Function: FUN_10008c48
   Address: 10008c48
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008c48(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar1,10);
  *(uint *)(param_1 + 0x5bc) = uVar2;
  uVar2 = FUN_10003a04(piVar1,3);
  *(uint *)(param_1 + 0x5c0) = uVar2;
  uVar2 = FUN_10003a04(piVar1,0x10);
  *(uint *)(param_1 + 0x5c8) = uVar2;
  if (*(int *)(param_1 + 0x5c0) - 2U < 2) {
    uVar2 = FUN_10003a04(piVar1,1);
    *(uint *)(param_1 + 0x5cc) = uVar2;
    uVar2 = FUN_10003a04(piVar1,3);
    *(uint *)(param_1 + 0x5d0) = uVar2;
  }
  if (*(int *)(param_1 + 0x5c0) == 3) {
    uVar2 = FUN_10003a04(piVar1,1);
    *(uint *)(param_1 + 0x5d4) = uVar2;
    uVar2 = FUN_10003a04(piVar1,3);
    *(uint *)(param_1 + 0x5d8) = uVar2;
  }
  FUN_10008ed0(param_1);
  FUN_10008358(param_1);
  return;
}


