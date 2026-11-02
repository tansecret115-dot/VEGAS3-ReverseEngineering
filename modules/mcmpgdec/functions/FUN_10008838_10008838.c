/* Module: mcmpgdec.dll
   Function: FUN_10008838
   Address: 10008838
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008838(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar1,4);
  *(uint *)(param_1 + 0x5dc) = uVar2;
  uVar2 = FUN_10003a04(piVar1,4);
  *(uint *)(param_1 + 0x5e0) = uVar2;
  uVar2 = FUN_10003a04(piVar1,4);
  *(uint *)(param_1 + 0x5e4) = uVar2;
  uVar2 = FUN_10003a04(piVar1,4);
  *(uint *)(param_1 + 0x5e8) = uVar2;
  uVar2 = FUN_10003a04(piVar1,2);
  *(uint *)(param_1 + 0x5ec) = uVar2;
  uVar2 = FUN_10003a04(piVar1,2);
  *(uint *)(param_1 + 0x5f0) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x5f4) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x5f8) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x5fc) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x658) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x600) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x65c) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x604) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x608) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x60c) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x610) = uVar2;
  if (uVar2 != 0) {
    uVar2 = FUN_10003a04(piVar1,1);
    *(uint *)(param_1 + 0x614) = uVar2;
    uVar2 = FUN_10003a04(piVar1,3);
    *(uint *)(param_1 + 0x618) = uVar2;
    uVar2 = FUN_10003a04(piVar1,1);
    *(uint *)(param_1 + 0x61c) = uVar2;
    uVar2 = FUN_10003a04(piVar1,7);
    *(uint *)(param_1 + 0x620) = uVar2;
    uVar2 = FUN_10003a04(piVar1,8);
    *(uint *)(param_1 + 0x624) = uVar2;
  }
  return;
}


