/* Module: aviplug.dll
   Function: FUN_5f95cbe0
   Address: 5f95cbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f95cbe0(HWND param_1,int param_2,HWND param_3)

{
  ushort uVar1;
  WPARAM WVar2;
  HWND hWnd;
  WPARAM wParam;
  ushort *lParam;
  LRESULT LVar3;
  uchar local_84 [132];
  
  WVar2 = SendMessageA(param_3,0x147,0,0);
  if (WVar2 != 0xffffffff) {
    hWnd = GetDlgItem(param_1,0x3ea);
    wParam = SendMessageA(hWnd,0x147,0,0);
    lParam = (ushort *)SendMessageA(hWnd,0x150,wParam,0);
    if (lParam != (ushort *)0x0) {
      LVar3 = SendMessageA(param_3,0x150,WVar2,0);
      if (param_2 == 0x7d4) {
        *(LRESULT *)(lParam + 2) = LVar3;
      }
      else if (param_2 == 0x7d5) {
        lParam[7] = (ushort)LVar3;
      }
      else if (param_2 == 0x7d6) {
        lParam[1] = (ushort)LVar3;
      }
      uVar1 = (lParam[7] >> 3) * lParam[1];
      lParam[6] = uVar1;
      *(uint *)(lParam + 4) = *(int *)(lParam + 2) * (uint)uVar1;
      lParam[8] = 0;
      FUN_5f98caa0(lParam,local_84);
      SendMessageA(hWnd,0x14b,0,0);
      WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_84);
      SendMessageA(hWnd,0x14e,WVar2,0);
      SendMessageA(hWnd,0x151,WVar2,(LPARAM)lParam);
    }
  }
  return;
}


