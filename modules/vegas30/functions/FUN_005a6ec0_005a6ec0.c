/* Module: vegas30.exe
   Function: FUN_005a6ec0
   Address: 005a6ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005a6ec0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x90) != 1) {
    return 0x8000ffff;
  }
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  iVar1 = *(int *)(param_1 + 0x90) + -1;
  *(int *)(param_1 + 0x90) = iVar1;
  return -(uint)(iVar1 != 0) & 0x8000ffff;
}


