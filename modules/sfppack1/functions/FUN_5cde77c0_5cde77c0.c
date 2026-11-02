/* Module: sfppack1.dll
   Function: FUN_5cde77c0
   Address: 5cde77c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde77c0(RECT *param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  FUN_5cde6fd0(param_1,param_2,param_3,8);
  if ((param_1->bottom & 0x40000U) != 0) {
    hWnd = (HWND)param_1[3].right;
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[3].left);
    }
    SendMessageA(hWnd,0x111,(ushort)param_1[3].top | 0x40000,param_1[3].left);
  }
  return;
}


