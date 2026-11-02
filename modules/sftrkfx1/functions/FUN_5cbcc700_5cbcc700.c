/* Module: sftrkfx1.dll
   Function: FUN_5cbcc700
   Address: 5cbcc700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbcc700(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  HWND hWnd;
  
  if (param_2 != 0) {
    uVar1 = FUN_5cbcc0c0((int)param_1,param_3,param_4);
    if (uVar1 == 5) {
      FUN_5cbcc040(param_1,param_1[6],1);
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
  FUN_5cbcc280(param_1,param_3,param_4,9);
  return;
}


