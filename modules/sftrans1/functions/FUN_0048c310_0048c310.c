/* Module: sftrans1.dll
   Function: FUN_0048c310
   Address: 0048c310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048c310(int param_1,WPARAM param_2,uint param_3,int param_4)

{
  HWND hWnd;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    hWnd = GetParent(*(HWND *)(param_1 + 4));
    if (hWnd != (HWND)0x0) {
      GetDlgCtrlID(*(HWND *)(param_1 + 4));
      SendMessageA(hWnd,0xb3c,param_2,param_4 << 0x10 | param_3 & 0xffff);
      return 1;
    }
  }
  return 0;
}


