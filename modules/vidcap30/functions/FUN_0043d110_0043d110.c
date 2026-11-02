/* Module: vidcap30.exe
   Function: FUN_0043d110
   Address: 0043d110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043d110(LPVOID param_1)

{
  tagWNDCLASSA *ptVar1;
  BOOL BVar2;
  HWND pHVar3;
  int iVar4;
  tagWNDCLASSA local_28;
  
  BVar2 = GetClassInfoA(DAT_005ba298,"VidCap.VideoWindow",&local_28);
  if (BVar2 == 0) {
    ptVar1 = &local_28;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      ptVar1->style = 0;
      ptVar1 = (tagWNDCLASSA *)((int)ptVar1 + 4);
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0043e4d0;
    local_28.hInstance = DAT_005ba298;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "VidCap.VideoWindow";
    local_28.hbrBackground = (HBRUSH)0x10;
    _SfRegisterClass_4(&local_28);
  }
  pHVar3 = CreateWindowExA(0x10000,"VidCap.VideoWindow",(LPCSTR)0x0,0x52010000,0,0,0,0,
                           *(HWND *)((int)param_1 + 8),(HMENU)0x463,DAT_005ba298,param_1);
  *(HWND *)((int)param_1 + 0xcc) = pHVar3;
  return;
}


