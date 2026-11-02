/* Module: mcplug.dll
   Function: FUN_00404170
   Address: 00404170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00404170(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0047676c;
  if (param_1[8] != 0) {
    FUN_00404a50((int)param_1);
  }
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  return;
}


