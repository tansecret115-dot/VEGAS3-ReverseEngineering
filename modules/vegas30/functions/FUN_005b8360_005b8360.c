/* Module: vegas30.exe
   Function: FUN_005b8360
   Address: 005b8360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b8360(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0xb4) == 0) {
    return uVar1;
  }
  do {
    Sleep(*(DWORD *)(param_1 + 0x10));
  } while (*(int *)(param_1 + 0xb4) != 0);
  return uVar1;
}


