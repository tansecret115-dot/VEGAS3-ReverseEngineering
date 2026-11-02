/* Module: sfppack2.dll
   Function: FUN_5cd133e0
   Address: 5cd133e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd133e0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,-0x15);
  if (hMem != (HLOCAL)0x0) {
    FUN_5cd13390((int)hMem);
    LocalFree(hMem);
  }
  return;
}


