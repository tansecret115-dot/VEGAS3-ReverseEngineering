/* Module: vegas30.exe
   Function: FUN_004dbce0
   Address: 004dbce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004dbce0(int param_1)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xd50), iVar1 != 0)) &&
      ((*(byte *)(iVar1 + 0x134) & 0x20) == 0)) &&
     ((*(int *)(iVar1 + 0x158) != 0 && (*(int *)(iVar1 + 0x15c) != 0)))) {
    return 1;
  }
  return 0;
}


