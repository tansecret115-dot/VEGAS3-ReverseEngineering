/* Module: vidcap30.exe
   Function: FUN_004101b0
   Address: 004101b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00410234) */

HWND FUN_004101b0(HWND param_1,HMENU param_2)

{
  tagWNDCLASSA *ptVar1;
  short sVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  tagWNDCLASSA local_28;
  
  BVar3 = GetClassInfoA(DAT_005ba298,"SfStatusBar",&local_28);
  if (BVar3 == 0) {
    ptVar1 = &local_28;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar1->style = 0;
      ptVar1 = (tagWNDCLASSA *)((int)ptVar1 + 4);
    }
    local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
    local_28.lpszClassName = "SfStatusBar";
    local_28.hbrBackground = (HBRUSH)0x10;
    local_28.hInstance = DAT_005ba298;
    local_28.style = 8;
    local_28.lpfnWndProc = (WNDPROC)&LAB_00410280;
    sVar2 = _SfRegisterClass_4(&local_28);
    if (sVar2 == 0) {
      return (HWND)0x0;
    }
  }
  pHVar4 = CreateWindowExA(4,"SfStatusBar",(LPCSTR)0x0,0x56000000,0,0,0,0,param_1,param_2,
                           DAT_005ba298,&DAT_005bbe30);
  return pHVar4;
}


