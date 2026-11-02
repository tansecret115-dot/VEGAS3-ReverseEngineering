/* Module: vidcap30.exe
   Function: FUN_0044c5c0
   Address: 0044c5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c5c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044c620(param_1);
  if ((-1 < param_2) && (param_2 <= iVar1)) {
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x43c) + 8) + param_2 * 4);
  }
  return 0;
}


