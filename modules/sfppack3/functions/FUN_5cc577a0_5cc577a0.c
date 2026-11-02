/* Module: sfppack3.dll
   Function: FUN_5cc577a0
   Address: 5cc577a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc577a0(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  HWND hWnd;
  
  if (param_2 != 0) {
    uVar1 = FUN_5cc57160((int)param_1,param_3,param_4);
    if (uVar1 == 5) {
      FUN_5cc570e0(param_1,param_1[6],1);
      (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],4,param_1[7]);
      return;
    }
  }
  if ((*param_1 & 8) == 0) {
    SetFocus((HWND)param_1[10]);
  }
  if ((param_1[3] & 0x80000) != 0) {
    hWnd = (HWND)param_1[0xc];
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[10]);
    }
    SendMessageA(hWnd,0x111,(ushort)param_1[0xb] | 0x30000,param_1[10]);
  }
  FUN_5cc57320(param_1,param_3,param_4,9);
  return;
}


