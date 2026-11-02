/* Module: mcmpgdec.dll
   Function: FUN_10008d0c
   Address: 10008d0c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008d0c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar1,3);
  *(uint *)(param_1 + 0x5a0) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x5a4) = uVar2;
  if (uVar2 != 0) {
    uVar2 = FUN_10003a04(piVar1,8);
    *(uint *)(param_1 + 0x5a8) = uVar2;
    uVar2 = FUN_10003a04(piVar1,8);
    *(uint *)(param_1 + 0x5ac) = uVar2;
    uVar2 = FUN_10003a04(piVar1,8);
    *(uint *)(param_1 + 0x5b0) = uVar2;
  }
  uVar2 = FUN_10003a04(piVar1,0xf);
  *(uint *)(param_1 + 0x5b4) = uVar2 >> 1;
  uVar2 = FUN_10003a04(piVar1,0xe);
  *(uint *)(param_1 + 0x5b8) = uVar2;
  return;
}


