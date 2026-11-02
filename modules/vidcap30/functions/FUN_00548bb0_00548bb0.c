/* Module: vidcap30.exe
   Function: FUN_00548bb0
   Address: 00548bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00548bb0(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x20) = 0;
  FUN_00520d80();
  FUN_00520c80();
  return 0;
}


