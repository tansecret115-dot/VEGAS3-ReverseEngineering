/* Module: Setup.exe
   Function: FUN_00403890
   Address: 00403890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403890(HWND param_1,LPRECT param_2)

{
  HWND hWndTo;
  UINT cPoints;
  
  GetWindowRect(param_1,param_2);
  cPoints = 2;
  hWndTo = GetParent(param_1);
  MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)param_2,cPoints);
  return;
}


