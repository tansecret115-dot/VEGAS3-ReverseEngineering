/* Module: sftrkfx1.dll
   Function: FUN_5cbc8370
   Address: 5cbc8370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc8370(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,-0x15);
  if (hMem != (HLOCAL)0x0) {
    FUN_5cbc8320((int)hMem);
    LocalFree(hMem);
  }
  return;
}


