/* Module: vegas30k.dll
   Function: FUN_0111f370
   Address: 0111f370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111f370(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


