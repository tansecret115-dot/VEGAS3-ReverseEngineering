/* Module: vegas30k.dll
   Function: FUN_0113fc10
   Address: 0113fc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113fc10(LPVOID param_1)

{
  BOOL BVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  tagWNDCLASSA *ptVar5;
  tagWNDCLASSA local_28;
  
  if (*(int *)((int)param_1 + 0x48) == 0) {
    return 0;
  }
  FUN_0113fde0(param_1);
  BVar1 = GetClassInfoA(DAT_0120e5c0,"SfTempEdit_PropPageSite",&local_28);
  if (BVar1 == 0) {
    ptVar5 = &local_28;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      ptVar5->style = 0;
      ptVar5 = (tagWNDCLASSA *)&ptVar5->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_01142010;
    local_28.hInstance = DAT_0120e5c0;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "SfTempEdit_PropPageSite";
    local_28.hbrBackground = (HBRUSH)&DAT_00000010;
    RegisterClassA(&local_28);
  }
  pHVar2 = CreateWindowExA(0x10100,"SfTempEdit_PropPageSite",(LPCSTR)0x0,0x46020000,0,0,0,0,
                           *(HWND *)((int)param_1 + 0x48),(HMENU)&DAT_00000131,DAT_0120e5c0,param_1)
  ;
  if (pHVar2 == (HWND)0x0) {
    return 0;
  }
  *(HWND *)((int)param_1 + 0x84) = pHVar2;
  pHVar2 = CreateToolbarEx(*(HWND *)((int)param_1 + 0x48),0x5001096c,0x132,0,(HINSTANCE)0x0,0,
                           (LPCTBBUTTON)0x0,0,0,0,0,0,0x14);
  if (pHVar2 == (HWND)0x0) {
    return 0;
  }
  *(HWND *)((int)param_1 + 0xb0) = pHVar2;
  SendMessageA(pHVar2,0x454,0,1);
  Ordinal_17();
  SendMessageA(pHVar2,0x432,0,-1);
  SendMessageA(pHVar2,0x414,2,0x1207120);
  SendMessageA(pHVar2,0x421,0,0);
  pHVar2 = (HWND)SendMessageA(pHVar2,0x423,0,0);
  uVar3 = GetWindowLongA(pHVar2,-0x10);
  SetWindowLongA(pHVar2,-0x10,uVar3 | 1);
  DAT_01207150 = DAT_01207150 & 0xfffffff8;
  pHVar2 = CreateWindowExA(4,"SfKrn_TabControl_Class",(LPCSTR)0x0,0x40030060,0,0,0,0,
                           *(HWND *)((int)param_1 + 0x48),(HMENU)&DAT_00000130,DAT_0120e5c0,
                           &DAT_01207148);
  if (pHVar2 == (HWND)0x0) {
    return 0;
  }
  *(HWND *)((int)param_1 + 0x9c) = pHVar2;
  return 1;
}


