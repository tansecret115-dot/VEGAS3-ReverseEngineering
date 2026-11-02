/* Module: vidcap30.exe
   Function: FUN_00555030
   Address: 00555030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00555030(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0059fd80;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


