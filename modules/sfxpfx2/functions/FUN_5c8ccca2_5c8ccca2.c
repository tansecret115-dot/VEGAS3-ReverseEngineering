/* Module: sfxpfx2.dll
   Function: FUN_5c8ccca2
   Address: 5c8ccca2
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8ccca2(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


