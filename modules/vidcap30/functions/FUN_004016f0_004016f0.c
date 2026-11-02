/* Module: vidcap30.exe
   Function: FUN_004016f0
   Address: 004016f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004016f0(LPVOID param_1)

{
  tagWNDCLASSA *ptVar1;
  BOOL BVar2;
  int iVar3;
  tagWNDCLASSA local_28;
  
  if ((((byte)DAT_005ba4b4 & 0x40) != 0) && (DAT_005ba548 != 0)) {
    BVar2 = GetClassInfoA(DAT_005ba298,"VIDCAP.Splash",&local_28);
    if (BVar2 == 0) {
      ptVar1 = &local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar1->style = 0;
        ptVar1 = (tagWNDCLASSA *)((int)ptVar1 + 4);
      }
      local_28.lpfnWndProc = (WNDPROC)&LAB_004017c0;
      local_28.hInstance = DAT_005ba298;
      local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
      local_28.hbrBackground = (HBRUSH)0x10;
      local_28.lpszClassName = "VIDCAP.Splash";
      RegisterClassA(&local_28);
    }
    DAT_005ba4b8 = CreateWindowExA(0x188,"VIDCAP.Splash",(LPCSTR)0x0,0x90880000,0,0,0,0,(HWND)0x0,
                                   (HMENU)0x0,DAT_005ba298,param_1);
    UpdateWindow(DAT_005ba4b8);
  }
  return;
}


