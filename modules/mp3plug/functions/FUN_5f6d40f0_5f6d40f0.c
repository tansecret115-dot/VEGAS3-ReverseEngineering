/* Module: mp3plug.dll
   Function: FUN_5f6d40f0
   Address: 5f6d40f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6d40f0(int param_1)

{
  *(float *)(param_1 + 0x1c) =
       (*(float *)(param_1 + 0x20) - _DAT_5f75c6e4) /
       ((float)*(int *)(param_1 + 0x24) * _DAT_5f75c6ec * _DAT_5f75c6d0);
  return;
}


