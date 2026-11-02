/* Module: sfppack2.dll
   Function: FUN_5cd17820
   Address: 5cd17820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd17820(uint *param_1,uint param_2,uint param_3)

{
  HWND hWnd;
  
  FUN_5cd172f0(param_1,param_2,param_3,8);
  if ((param_1[3] & 0x80000) != 0) {
    hWnd = (HWND)param_1[0xc];
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[10]);
    }
    SendMessageA(hWnd,0x111,(ushort)param_1[0xb] | 0x40000,param_1[10]);
  }
  return;
}


