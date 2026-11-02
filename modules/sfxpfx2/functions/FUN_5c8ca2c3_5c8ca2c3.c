/* Module: sfxpfx2.dll
   Function: FUN_5c8ca2c3
   Address: 5c8ca2c3
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8ca2c3(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x30));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10U));
  FUN_5c8cbf5d();
  return;
}


