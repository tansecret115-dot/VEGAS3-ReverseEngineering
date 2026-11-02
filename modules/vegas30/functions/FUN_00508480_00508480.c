/* Module: vegas30.exe
   Function: FUN_00508480
   Address: 00508480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00508480(HWND param_1,LPRECT param_2)

{
  HWND hWndTo;
  UINT cPoints;
  
  GetWindowRect(param_1,param_2);
  cPoints = 2;
  hWndTo = GetParent(param_1);
  MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)param_2,cPoints);
  return;
}


