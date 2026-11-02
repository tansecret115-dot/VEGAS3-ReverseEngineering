/* Module: mcplug.dll
   Function: FUN_00403aa0
   Address: 00403aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403aa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004766e4;
  param_1[1] = &PTR_LAB_004766d4;
  if ((HANDLE)param_1[9] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[9]);
  }
  if (param_1[8] != 0) {
    FUN_00403b10((int)param_1);
  }
  return;
}


