/* Module: vegas30.exe
   Function: FUN_004aa490
   Address: 004aa490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004aa490(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a9cc0(param_2);
  return *(undefined4 *)(param_1 + 0x28 + iVar1 * 4);
}


