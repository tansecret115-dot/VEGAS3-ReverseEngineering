/* Module: vidcap30.exe
   Function: FUN_00404c20
   Address: 00404c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404c20(void)

{
  if (*(int *)(DAT_005ba4c0 + 0xa0) != 0) {
    return *(undefined4 *)(*(int *)(DAT_005ba4c0 + 0xa0) + 8);
  }
  return 0;
}


