/* Module: mp3rw.dll
   Function: FUN_004101a0
   Address: 004101a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004101a0(undefined4 *param_1)

{
  FUN_00411300(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_00401220((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_00416a20((int)param_1);
  }
  FUN_00416820((int)param_1);
  return;
}


