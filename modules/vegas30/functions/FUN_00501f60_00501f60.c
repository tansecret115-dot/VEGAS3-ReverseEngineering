/* Module: vegas30.exe
   Function: FUN_00501f60
   Address: 00501f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00501f60(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffff;
  }
  return 0;
}


