/* Module: sfppack2.dll
   Function: FUN_5cd3dec3
   Address: 5cd3dec3
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd3dec3(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x30));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10U));
  FUN_5cd3f230();
  return;
}


