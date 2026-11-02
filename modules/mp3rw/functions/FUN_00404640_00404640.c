/* Module: mp3rw.dll
   Function: FUN_00404640
   Address: 00404640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404640(int param_1)

{
  if (*(int *)(param_1 + 0x104) != 0) {
    InternetCloseHandle(*(int *)(param_1 + 0x104));
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return 0;
}


