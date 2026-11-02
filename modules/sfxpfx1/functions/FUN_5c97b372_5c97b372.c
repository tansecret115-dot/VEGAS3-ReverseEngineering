/* Module: sfxpfx1.dll
   Function: FUN_5c97b372
   Address: 5c97b372
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c97b372(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


