/* Module: sfxpfx2.dll
   Function: FUN_5c8ccec1
   Address: 5c8ccec1
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8ccec1(int param_1)

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
    pvVar1 = (LPCVOID)FUN_5c8cd960(&local_8);
    FUN_5c892960(pvVar1);
  }
  FUN_5c8cd92f((undefined4 *)(param_1 + 0xc));
  if (*(HANDLE *)(param_1 + 0x3c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x3c));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  FUN_5c8cd91d((undefined4 *)(param_1 + 0xc));
  return;
}


