/* Module: vidcap30.exe
   Function: FUN_00416dc0
   Address: 00416dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416dc0(void)

{
  if (((*(int *)(DAT_005bb808 + 0x6c) == 0) && (*(int *)(DAT_005bb808 + 0x48) == 0)) &&
     (*(int *)(DAT_005bb808 + 0x60) == 0)) {
    return 0;
  }
  return 1;
}


