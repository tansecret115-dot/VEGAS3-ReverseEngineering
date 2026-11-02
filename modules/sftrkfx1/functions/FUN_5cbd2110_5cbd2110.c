/* Module: sftrkfx1.dll
   Function: FUN_5cbd2110
   Address: 5cbd2110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd2110(RECT *param_1,int param_2,int param_3,byte param_4)

{
  HWND hWnd;
  
  FUN_5cbd1900(param_1,param_2,param_3,8,param_4);
  if ((param_1->bottom & 0x40000U) != 0) {
    hWnd = (HWND)param_1[3].right;
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[3].left);
    }
    SendMessageA(hWnd,0x111,(ushort)param_1[3].top | 0x40000,param_1[3].left);
  }
  return;
}


