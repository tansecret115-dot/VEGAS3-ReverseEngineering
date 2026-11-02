/* Module: vidcap30.exe
   Function: FUN_00460c10
   Address: 00460c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460c10(void *param_1)

{
  InvalidateRect(*(HWND *)((int)param_1 + 8),(RECT *)((int)param_1 + 0x14),1);
  if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x28));
  }
  free(param_1);
  return;
}


