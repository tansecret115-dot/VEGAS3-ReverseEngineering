/* Module: vegas30k.dll
   Function: FUN_010725b0
   Address: 010725b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010725b0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,-0x15);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
  }
  return;
}


