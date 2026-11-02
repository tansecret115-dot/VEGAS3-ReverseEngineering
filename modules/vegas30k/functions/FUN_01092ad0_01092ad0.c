/* Module: vegas30k.dll
   Function: FUN_01092ad0
   Address: 01092ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01092ad0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  LocalFree(hMem);
  SetWindowLongA(param_1,0,0);
  return;
}


