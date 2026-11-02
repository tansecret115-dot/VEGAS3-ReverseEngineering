/* Module: rmme3260.dll
   Function: FUN_66257270
   Address: 66257270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66257270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626ce60;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  FUN_66254cf0(param_1);
  return;
}


