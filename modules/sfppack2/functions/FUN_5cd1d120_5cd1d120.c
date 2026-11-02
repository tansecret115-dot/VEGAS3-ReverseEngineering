/* Module: sfppack2.dll
   Function: FUN_5cd1d120
   Address: 5cd1d120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1d120(RECT *param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  FUN_5cd1c930(param_1,param_2,param_3,8);
  if ((param_1->bottom & 0x40000U) != 0) {
    hWnd = (HWND)param_1[3].right;
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[3].left);
    }
    SendMessageA(hWnd,0x111,(ushort)param_1[3].top | 0x40000,param_1[3].left);
  }
  return;
}


