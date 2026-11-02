/* Module: rmme3260.dll
   Function: FUN_6624b390
   Address: 6624b390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6624b390(void *param_1)

{
  if (param_1 != (void *)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)param_1 + 0x54));
    CloseHandle(*(HANDLE *)((int)param_1 + 0x58));
    free(*(void **)((int)param_1 + 0x60));
    free(param_1);
  }
  return;
}


