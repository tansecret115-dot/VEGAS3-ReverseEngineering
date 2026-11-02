/* Module: encn3260.dll
   Function: FUN_664b5ef0
   Address: 664b5ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664b5ef0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)param_1 + 0x54));
    CloseHandle(*(HANDLE *)((int)param_1 + 0x58));
    free(*(void **)((int)param_1 + 0x60));
    free(param_1);
  }
  return;
}


