/* Module: sftrans1.dll
   Function: FUN_004b9b90
   Address: 004b9b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b9b90(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_004b9a70(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


