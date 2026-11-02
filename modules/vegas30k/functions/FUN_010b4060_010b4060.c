/* Module: vegas30k.dll
   Function: FUN_010b4060
   Address: 010b4060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b4060(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
  }
  return;
}


