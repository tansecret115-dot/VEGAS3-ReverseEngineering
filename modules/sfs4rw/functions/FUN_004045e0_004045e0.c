/* Module: sfs4rw.dll
   Function: FUN_004045e0
   Address: 004045e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004045e0(int param_1)

{
  if (*(int *)(param_1 + 0x104) != 0) {
    InternetCloseHandle(*(int *)(param_1 + 0x104));
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return 0;
}


