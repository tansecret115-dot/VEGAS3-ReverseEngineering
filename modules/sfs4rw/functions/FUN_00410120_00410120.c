/* Module: sfs4rw.dll
   Function: FUN_00410120
   Address: 00410120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00410120(undefined4 *param_1)

{
  FUN_00411280(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_00401220((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_004169a0((int)param_1);
  }
  FUN_004167a0((int)param_1);
  return;
}


