/* Module: vidcap30.exe
   Function: FUN_005825d0
   Address: 005825d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005825d0(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


