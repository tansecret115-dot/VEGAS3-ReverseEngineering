/* Module: vidcap30.exe
   Function: FUN_00498140
   Address: 00498140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00498140(int param_1)

{
  HWND hWnd;
  HRESULT HVar1;
  LRESULT lParam;
  LRESULT LVar2;
  LRESULT LVar3;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  hWnd = *(HWND *)(param_1 + 0x18);
  EnableWindow(*(HWND *)(param_1 + 4),0);
  if (*(char *)(param_1 + 0x48) == '\0') {
    lParam = SendMessageA(hWnd,0x110a,0,0);
    if (lParam != 0) {
      SendMessageA(hWnd,0x1102,2,lParam);
      LVar2 = SendMessageA(hWnd,0x110a,1,lParam);
      if (LVar2 == 0) {
        LVar2 = SendMessageA(hWnd,0x110a,4,lParam);
        if (LVar2 != 0) {
          LVar3 = SendMessageA(hWnd,0x110a,1,LVar2);
          if (LVar3 == 0) {
            SendMessageA(hWnd,0x1102,2,LVar2);
            lParam = LVar2;
          }
        }
      }
      SendMessageA(hWnd,0x110b,9,lParam);
    }
  }
  else {
    FUN_004f8100(param_1,param_1 + 0x48,1,1);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0xc + *(int *)(param_1 + 0x44) * 4)
    ;
  }
  EnableWindow(*(HWND *)(param_1 + 4),1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < HVar1) {
    CoUninitialize();
  }
  return 0;
}


