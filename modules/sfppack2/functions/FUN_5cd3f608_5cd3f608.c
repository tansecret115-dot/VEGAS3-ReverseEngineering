/* Module: sfppack2.dll
   Function: FUN_5cd3f608
   Address: 5cd3f608
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd3f608(int param_1)

{
  LPCVOID pvVar1;
  int local_8;
  
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    local_8 = param_1;
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  local_8 = *(int *)(param_1 + 0xc);
  while (local_8 != 0) {
    pvVar1 = (LPCVOID)FUN_5cd41995(&local_8);
    FUN_5ccd2000(pvVar1);
  }
  FUN_5cd41964((undefined4 *)(param_1 + 0xc));
  if (*(HANDLE *)(param_1 + 0x3c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x3c));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  FUN_5cd41952((undefined4 *)(param_1 + 0xc));
  return;
}


