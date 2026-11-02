/* Module: extmondrv.dll
   Function: FUN_00409a40
   Address: 00409a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00409a40(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0x8000ffff;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 0;
}


