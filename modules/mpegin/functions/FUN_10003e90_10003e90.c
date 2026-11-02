/* Module: mpegin.dll
   Function: FUN_10003e90
   Address: 10003e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10003e90(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 0x80000) == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xcbc) != (param_2 >> 0x11 & 3)) {
    return 1;
  }
  if (0xe000 < (param_2 & 0xf000)) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xcc8) == (param_2 >> 10 & 3)) {
    uVar1 = param_2 >> 6 & 3;
    if (((2 < *(int *)(param_1 + 0x9c)) || (uVar1 != 3)) &&
       ((*(int *)(param_1 + 0x9c) != 3 || (2 < uVar1)))) {
      *(uint *)(param_1 + 0x9c) = uVar1;
      *(uint *)(param_1 + 0xcc0) = param_2 >> 0x10 & 1;
      *(uint *)(param_1 + 0xcc4) = param_2 >> 0xc & 0xf;
      *(uint *)(param_1 + 0xccc) = param_2 >> 9 & 1;
      *(uint *)(param_1 + 0xcd0) = param_2 >> 8 & 1;
      *(uint *)(param_1 + 0xcd4) = param_2 >> 4 & 3;
      *(uint *)(param_1 + 0xcd8) = param_2 >> 3 & 1;
      *(uint *)(param_1 + 0xce0) = param_2 & 3;
      *(uint *)(param_1 + 0xcdc) = param_2 >> 2 & 1;
      return 0;
    }
    return 1;
  }
  return 1;
}


