/* Module: sfmarket2.dll
   Function: FUN_00431890
   Address: 00431890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00431890(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0049cec0;
  FUN_00439aa0((int)param_1);
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


