/* Module: sfppack1.dll
   Function: FUN_5ce00a33
   Address: 5ce00a33
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ce00a33(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


