/* Module: sfcdi.dll
   Function: FUN_5bf31130
   Address: 5bf31130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf31130(int param_1)

{
  if (*(int *)(param_1 + 0x104) != 0) {
    InternetCloseHandle(*(int *)(param_1 + 0x104));
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return 0;
}


