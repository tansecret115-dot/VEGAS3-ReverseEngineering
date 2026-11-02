/* Module: rmto3260.dll
   Function: FUN_663055a0
   Address: 663055a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_663055a0(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}


