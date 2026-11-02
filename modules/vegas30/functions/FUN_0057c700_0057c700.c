/* Module: vegas30.exe
   Function: FUN_0057c700
   Address: 0057c700
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057c700(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00627464;
  if ((HMODULE)param_1[3] != (HMODULE)0x0) {
    param_1[4] = 0;
    FreeLibrary((HMODULE)param_1[3]);
    param_1[3] = 0;
  }
  return;
}


