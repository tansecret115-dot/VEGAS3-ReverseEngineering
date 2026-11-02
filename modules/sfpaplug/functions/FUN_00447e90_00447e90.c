/* Module: sfpaplug.dll
   Function: FUN_00447e90
   Address: 00447e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00447e90(LPVOID param_1)

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
  FUN_00448060((int)param_1);
  BVar1 = GetClassInfoA(DAT_0045c378,"SfTempEdit_PropPageSite",&local_28);
  if (BVar1 == 0) {
    ptVar5 = &local_28;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      ptVar5->style = 0;
      ptVar5 = (tagWNDCLASSA *)&ptVar5->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0044a290;
    local_28.hInstance = DAT_0045c378;
    local_28.hCursor = (HCURSOR)FUN_00443390(0x7f00);
    local_28.lpszClassName = "SfTempEdit_PropPageSite";
    local_28.hbrBackground = (HBRUSH)0x10;
    RegisterClassA(&local_28);
  }
  pHVar2 = CreateWindowExA(0x10100,"SfTempEdit_PropPageSite",(LPCSTR)0x0,0x46020000,0,0,0,0,
                           *(HWND *)((int)param_1 + 0x48),(HMENU)0x131,DAT_0045c378,param_1);
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
  SendMessageA(pHVar2,0x414,2,0x45bea0);
  SendMessageA(pHVar2,0x421,0,0);
  pHVar2 = (HWND)SendMessageA(pHVar2,0x423,0,0);
  uVar3 = GetWindowLongA(pHVar2,-0x10);
  SetWindowLongA(pHVar2,-0x10,uVar3 | 1);
  DAT_0045bed0 = DAT_0045bed0 & 0xfffffff8;
  pHVar2 = CreateWindowExA(4,"SfKrn_TabControl_Class",(LPCSTR)0x0,0x40030060,0,0,0,0,
                           *(HWND *)((int)param_1 + 0x48),(HMENU)0x130,DAT_0045c378,&DAT_0045bec8);
  if (pHVar2 == (HWND)0x0) {
    return 0;
  }
  *(HWND *)((int)param_1 + 0x9c) = pHVar2;
  return 1;
}


