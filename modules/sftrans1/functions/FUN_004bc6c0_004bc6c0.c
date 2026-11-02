/* Module: sftrans1.dll
   Function: FUN_004bc6c0
   Address: 004bc6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bc6c0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  LocalFree(hMem);
  SetWindowLongA(param_1,0,0);
  return;
}


