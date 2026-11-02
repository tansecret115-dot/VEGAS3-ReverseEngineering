/* Module: sfmarket2.dll
   Function: FUN_00444f90
   Address: 00444f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00444f90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0049e798;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


