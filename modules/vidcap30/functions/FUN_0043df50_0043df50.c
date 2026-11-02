/* Module: vidcap30.exe
   Function: FUN_0043df50
   Address: 0043df50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043df50(void)

{
  if ((DAT_005ba4c0 != 0) && (*(int *)(DAT_005ba4c0 + 0x6c) != 0)) {
    return *(int *)(DAT_005ba4c0 + 0x6c) + 0xd8;
  }
  return 0;
}


