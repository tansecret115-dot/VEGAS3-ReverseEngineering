/* Module: sfppack1.dll
   Function: FUN_5cdff043
   Address: 5cdff043
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdff043(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x30));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10U));
  FUN_5ce003b0();
  return;
}


