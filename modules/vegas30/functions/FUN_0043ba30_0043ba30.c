/* Module: vegas30.exe
   Function: FUN_0043ba30
   Address: 0043ba30
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0043ba30(HWND param_1,uint param_2,WPARAM param_3,int *param_4)

{
  int iVar1;
  int *pMem;
  LRESULT LVar2;
  HGLOBAL pvVar3;
  undefined4 *dwNewLong;
  undefined4 uVar4;
  HWND pHVar5;
  HWND hWnd;
  
  pHVar5 = param_1;
  pMem = (int *)GetWindowLongA(param_1,-0x15);
  param_1 = (HWND)0x0;
  if (param_2 < 0x400) {
    if (param_2 < 0x15) {
      if (param_2 != 0x14) {
        if (param_2 == 1) {
          pvVar3 = GlobalAlloc(0x40,4);
          dwNewLong = GlobalLock(pvVar3);
          if (dwNewLong != (undefined4 *)0x0) {
            SetWindowLongA(pHVar5,-0x15,(LONG)dwNewLong);
            iVar1 = *param_4;
            uVar4 = FUN_0043b8a0(pHVar5,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                                 *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10));
            *dwNewLong = uVar4;
            return 0;
          }
        }
        else if (param_2 == 2) {
          if (pMem != (int *)0x0) {
            pvVar3 = GlobalHandle(pMem);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(pMem);
            GlobalFree(pvVar3);
            return 0;
          }
        }
        else {
          if (param_2 != 5) goto LAB_0043bb63;
          if ((pMem != (int *)0x0) && ((HWND)*pMem != (HWND)0x0)) {
            SetWindowPos((HWND)*pMem,(HWND)0x0,0,0,(uint)param_4 & 0xffff,(uint)param_4 >> 0x10,0x44
                        );
            return 0;
          }
        }
      }
    }
    else {
      if (param_2 != 0x4e) {
        if (param_2 == 0x111) {
          pHVar5 = GetParent(pHVar5);
          LVar2 = SendMessageA(pHVar5,0x111,param_3,(LPARAM)param_4);
          return LVar2;
        }
LAB_0043bb63:
        LVar2 = DefWindowProcA(pHVar5,param_2,param_3,(LPARAM)param_4);
        return LVar2;
      }
      hWnd = GetParent(pHVar5);
      if (param_4[2] == -0x209) {
        SetWindowPos((HWND)*param_4,(HWND)0x0,0,0,0,0,0x13);
      }
      iVar1 = *param_4;
      if (*pMem == iVar1) {
        *param_4 = (int)pHVar5;
      }
      param_1 = (HWND)SendMessageA(hWnd,0x4e,param_3,(LPARAM)param_4);
      *param_4 = iVar1;
    }
  }
  else if ((pMem != (int *)0x0) && ((HWND)*pMem != (HWND)0x0)) {
    LVar2 = SendMessageA((HWND)*pMem,param_2,param_3,(LPARAM)param_4);
    return LVar2;
  }
  return (LRESULT)param_1;
}


