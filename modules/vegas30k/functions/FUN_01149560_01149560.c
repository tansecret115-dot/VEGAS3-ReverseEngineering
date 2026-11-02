/* Module: vegas30k.dll
   Function: FUN_01149560
   Address: 01149560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01149560(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_011e6df8;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


