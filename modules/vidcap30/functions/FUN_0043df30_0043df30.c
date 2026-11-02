/* Module: vidcap30.exe
   Function: FUN_0043df30
   Address: 0043df30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043df30(void)

{
  if ((DAT_005ba4c0 != 0) && (*(int *)(DAT_005ba4c0 + 0x6c) != 0)) {
    return *(int *)(DAT_005ba4c0 + 0x6c) + 0xa48;
  }
  return 0;
}


