/* Module: sftrans1.dll
   Function: FUN_0052c770
   Address: 0052c770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c770(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    FUN_004dd670(*(undefined4 *)((int)hMem + 0x308));
    *(undefined4 *)((int)hMem + 0x308) = 0;
    LocalFree(hMem);
  }
  return;
}


