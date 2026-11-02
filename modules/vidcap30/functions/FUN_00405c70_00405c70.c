/* Module: vidcap30.exe
   Function: FUN_00405c70
   Address: 00405c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405c70(undefined4 *param_1)

{
  HWND pHVar1;
  HWND hWnd;
  HGDIOBJ wParam;
  undefined4 uVar2;
  int iVar3;
  LPARAM lParam;
  
  pHVar1 = (HWND)*param_1;
  DAT_005ba4bc = pHVar1;
  SystemParametersInfoA(0x2000,0,&DAT_005ba4b0,0);
  SystemParametersInfoA(0x2001,0,(PVOID)0x0,0);
  if (((byte)DAT_005ba4b4 & 0x10) == 0) {
    DAT_005ba504 = (HMENU)_SfLoadMenu_8(DAT_005ba2a0,0x50);
    _SfMenuReplaceTokens_4(DAT_005ba504);
    FUN_00405c30(DAT_005ba504);
    FUN_0041e030(7);
    SetMenu(pHVar1,DAT_005ba504);
  }
  hWnd = CreateWindowExA(0,"tooltips_class32","",0x80000001,-0x80000000,-0x80000000,-0x80000000,
                         -0x80000000,(HWND)*param_1,(HMENU)0x0,DAT_005ba298,(LPVOID)0x0);
  param_1[0x26] = hWnd;
  if (hWnd != (HWND)0x0) {
    ShowWindow(hWnd,8);
    lParam = 0;
    wParam = GetStockObject(0x11);
    SendMessageA((HWND)param_1[0x26],0x30,(WPARAM)wParam,lParam);
  }
  uVar2 = FUN_004101b0(pHVar1,100);
  param_1[0x27] = uVar2;
  FUN_004343d0();
  if (param_1[0x1b] == 0) {
    return 0;
  }
  pHVar1 = *(HWND *)(param_1[0x1b] + 8);
  param_1[6] = pHVar1;
  ShowWindow(pHVar1,5);
  iVar3 = FUN_0040eda0(param_1,0x61);
  param_1[0xe] = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0xd] = *(undefined4 *)(iVar3 + 8);
  _SfList_CreateExZ_32(&DAT_005bba98,4,0xffffffff,0xffffffff,0x80000000,0,0,0);
  uVar2 = _SfLoadIcon_8(DAT_005ba2a0,0x1f0);
  param_1[0x41] = uVar2;
  FUN_00453420(param_1);
  return 1;
}


