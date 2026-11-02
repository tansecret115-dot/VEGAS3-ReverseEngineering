/* Module: vegas30.exe
   Function: FUN_004530a0
   Address: 004530a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004530a0(int param_1,uint param_2)

{
  int iVar1;
  HWND hWnd;
  RECT *pRVar2;
  
  FUN_00456c20(param_1);
  hWnd = *(HWND *)(param_1 + 4);
  if (hWnd == (HWND)0x0) {
    return;
  }
  if ((param_2 & 0xffff) == 0x7fff) {
    pRVar2 = (RECT *)0x0;
  }
  else {
    if ((param_2 & 0x8000) == 0) {
      InvalidateRect(hWnd,(RECT *)(param_1 + 0xac0),0);
    }
    if ((param_2 & 0x7fff) == 0) goto LAB_00453210;
    if ((param_2 & 1) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x6c8),0);
      pRVar2 = (RECT *)(param_1 + 0x8c0);
      iVar1 = 6;
      do {
        if (0 < pRVar2[1].top) {
          InvalidateRect(*(HWND *)(param_1 + 4),pRVar2,0);
        }
        pRVar2 = (RECT *)&pRVar2[5].top;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if ((param_2 & 0x400) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x818),0);
    }
    if ((param_2 & 0x800) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x86c),0);
    }
    if ((param_2 & 2) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x71c),0);
    }
    if ((param_2 & 4) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x770),0);
    }
    if ((param_2 & 8) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x7c4),0);
    }
    if ((param_2 & 0x4000) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x5e0),0);
    }
    if ((param_2 & 0x2000) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x658),0);
    }
    if ((param_2 & 0x1000) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x36c),0);
    }
    if ((param_2 & 0x400) == 0) goto LAB_00453210;
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x3d4),0);
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x3e4),0);
    hWnd = *(HWND *)(param_1 + 4);
    pRVar2 = (RECT *)(param_1 + 0x3f4);
  }
  InvalidateRect(hWnd,pRVar2,0);
LAB_00453210:
  if (((param_2 & 0x1000) != 0) && (*(HWND *)(param_1 + 0x388) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x388),(RECT *)0x0,0);
  }
  if ((param_2 & 0x100000) != 0) {
    UpdateWindow(*(HWND *)(param_1 + 4));
    if (*(HWND *)(param_1 + 0x388) != (HWND)0x0) {
      UpdateWindow(*(HWND *)(param_1 + 0x388));
    }
  }
  return;
}


