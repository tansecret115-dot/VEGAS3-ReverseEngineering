/* Module: vidcap30.exe
   Function: FUN_00434f90
   Address: 00434f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434f90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428e00(param_1 + 0xa48);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x1acc) == 0)) {
    return 0;
  }
  return 1;
}


