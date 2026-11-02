/* Module: mp3rw.dll
   Function: FUN_00434c30
   Address: 00434c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00434c30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0049c07c;
  FUN_0043ce40((int)param_1);
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


