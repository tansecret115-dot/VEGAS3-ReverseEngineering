/* Module: vegas30k.dll
   Function: FUN_0107a2d0
   Address: 0107a2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107a2d0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,-0x15);
  if (hMem != (HLOCAL)0x0) {
    FUN_0107a280(hMem);
    LocalFree(hMem);
  }
  return;
}


