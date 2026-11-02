/* Module: oggplug.dll
   Function: FUN_004416b0
   Address: 004416b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004416b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + param_2;
  if (*(int *)(param_1 + 4) < iVar1) {
    return 0xffffffff;
  }
  *(int *)(param_1 + 8) = iVar1;
  return 0;
}


