/* Module: mcmpgdec.dll
   Function: FUN_10007e0c
   Address: 10007e0c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10007e0c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x668) = 0;
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x56c) = uVar2;
  uVar2 = FUN_10003a04(piVar1,5);
  *(uint *)(param_1 + 0x570) = uVar2;
  uVar2 = FUN_10003a04(piVar1,7);
  *(uint *)(param_1 + 0x574) = uVar2 >> 1;
  uVar2 = FUN_10003a04(piVar1,6);
  *(uint *)(param_1 + 0x578) = uVar2;
  uVar2 = FUN_10003a04(piVar1,6);
  *(uint *)(param_1 + 0x57c) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x580) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x584) = uVar2;
  return;
}


