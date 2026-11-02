/* Module: qt4plug.dll
   Function: FUN_5f53af60
   Address: 5f53af60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f53af60(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


