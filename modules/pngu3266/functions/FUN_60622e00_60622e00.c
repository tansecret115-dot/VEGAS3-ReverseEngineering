/* Module: pngu3266.dll
   Function: FUN_60622e00
   Address: 60622e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60622e00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6062d4f0;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  FUN_606228f0(param_1);
  return;
}


