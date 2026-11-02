/* Module: sftrans1.dll
   Function: FUN_0052ac40
   Address: 0052ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ac40(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_0052ab20(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


