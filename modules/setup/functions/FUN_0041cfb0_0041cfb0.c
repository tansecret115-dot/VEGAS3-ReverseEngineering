/* Module: Setup.exe
   Function: FUN_0041cfb0
   Address: 0041cfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041cfb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0043974c;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


