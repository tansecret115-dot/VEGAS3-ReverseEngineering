/* Module: vegas30.exe
   Function: FUN_00520250
   Address: 00520250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00520250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  HWND pHVar1;
  int iVar2;
  HCURSOR pHVar3;
  int iVar4;
  tagRECT local_10;
  
  iVar4 = (int)(short)((uint)param_4 >> 0x10);
  switch(param_2) {
  case 0x200:
    if ((*(int *)(param_1 + 0x98) != 0) && ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) != 0)
       ) {
      hWnd = *(HWND *)(param_1 + 8);
      pHVar1 = GetCapture();
      if (pHVar1 == hWnd) {
        GetClientRect(hWnd,&local_10);
        if (local_10.bottom - local_10.top != 0) {
          iVar2 = ftol();
          _DAT_0064a558 = (float)((local_10.bottom - iVar4) + -3) * _DAT_0061a610;
          iVar4 = ftol();
          if (iVar2 != iVar4) {
            FUN_0051e450(param_1,local_10.right - local_10.left,local_10.bottom - local_10.top,0);
            InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
            UpdateWindow(*(HWND *)(param_1 + 8));
          }
        }
        pHVar3 = (HCURSOR)_SfGetUICursor_4(0xc);
        SetCursor(pHVar3);
        return 0;
      }
      if ((*(int *)(param_1 + 0x204) + -4 <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x204) + 1)) {
        pHVar3 = (HCURSOR)_SfGetUICursor_4(0xc);
        SetCursor(pHVar3);
        return 0;
      }
    }
    break;
  case 0x201:
    if ((((*(int *)(param_1 + 0x98) != 0) &&
         ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) != 0)) &&
        (*(int *)(param_1 + 0x204) + -4 <= iVar4)) && (iVar4 <= *(int *)(param_1 + 0x204) + 1)) {
      SetCapture(*(HWND *)(param_1 + 8));
      pHVar3 = (HCURSOR)_SfGetUICursor_4(0xc);
      SetCursor(pHVar3);
      return 0;
    }
    break;
  case 0x202:
    if ((*(int *)(param_1 + 0x98) != 0) && ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) != 0)
       ) {
      ReleaseCapture();
      return 0;
    }
    break;
  case 0x20a:
    _SfWheel_PassToHover_12(*(undefined4 *)(param_1 + 8),param_3,param_4);
  }
  return 0;
}


