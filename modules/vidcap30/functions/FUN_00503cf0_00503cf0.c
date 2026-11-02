/* Module: vidcap30.exe
   Function: FUN_00503cf0
   Address: 00503cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503cf0(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_00503bd0(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


