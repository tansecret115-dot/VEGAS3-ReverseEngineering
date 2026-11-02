/* Module: vegas30.exe
   Function: FUN_004f2520
   Address: 004f2520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004f2520(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  HWND pHVar1;
  HWND hWndInsertAfter;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  tagRECT local_10;
  
  dwNewLong = *(undefined4 **)(param_2 + 0x1c);
  SetWindowLongA(param_1,8,(LONG)dwNewLong);
  _SfSetEditCtrlFont_8(param_1,0);
  dwNewLong[5] = 1;
  if (dwNewLong[4] != 0) {
    uVar4 = 0x8001;
    uVar3 = 0;
    uVar2 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar2,uVar3,uVar4);
    dwNewLong[4] = 0;
  }
  if (*(int *)(param_2 + 0xc) == 0x317) {
    pHVar1 = GetDlgItem(param_1,0x3ed);
    if (pHVar1 != (HWND)0x0) {
      hWndInsertAfter = GetWindow(pHVar1,3);
      GetWindowRect(pHVar1,&local_10);
      MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
      DestroyWindow(pHVar1);
      FUN_004f19f0(*dwNewLong);
      pHVar1 = (HWND)_SfCheckList_Create_24(param_1,&local_10,0x3ed,*dwNewLong,&DAT_00642d38,0x1f);
      if (pHVar1 != (HWND)0x0) {
        SetWindowPos(pHVar1,hWndInsertAfter,0,0,0,0,0x13);
      }
      FUN_004f22c0(param_1,*dwNewLong);
      dwNewLong[5] = 0;
      return dwNewLong;
    }
  }
  else if (*(int *)(param_2 + 0xc) == 0x65) {
    pHVar1 = GetDlgItem(param_1,0x3ed);
    if (pHVar1 != (HWND)0x0) {
      GetWindowRect(pHVar1,&local_10);
      MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
      DestroyWindow(pHVar1);
      _SfViewField_CreateSpread_28
                (param_1,&local_10,0x3ed,*dwNewLong,&DAT_0063f2b0,dwNewLong[0x13],dwNewLong[0x14]);
    }
    pHVar1 = GetDlgItem(param_1,0x3ee);
    if (pHVar1 != (HWND)0x0) {
      SetWindowTextA(pHVar1,"");
    }
  }
  dwNewLong[5] = 0;
  return dwNewLong;
}


