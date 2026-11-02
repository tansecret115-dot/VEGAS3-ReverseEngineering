/* Module: vegas30.exe
   Function: FUN_004e7850
   Address: 004e7850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e78d4) */

HWND FUN_004e7850(HWND param_1,HMENU param_2)

{
  tagWNDCLASSA *ptVar1;
  short sVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  tagWNDCLASSA local_28;
  
  BVar3 = GetClassInfoA(DAT_006471fc,"SfStatusBar",&local_28);
  if (BVar3 == 0) {
    ptVar1 = &local_28;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar1->style = 0;
      ptVar1 = (tagWNDCLASSA *)((int)ptVar1 + 4);
    }
    local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
    local_28.lpszClassName = "SfStatusBar";
    local_28.hbrBackground = (HBRUSH)0x10;
    local_28.hInstance = DAT_006471fc;
    local_28.style = 8;
    local_28.lpfnWndProc = (WNDPROC)&LAB_004e7920;
    sVar2 = _SfRegisterClass_4(&local_28);
    if (sVar2 == 0) {
      return (HWND)0x0;
    }
  }
  pHVar4 = CreateWindowExA(4,"SfStatusBar",(LPCSTR)0x0,0x56000000,0,0,0,0,param_1,param_2,
                           DAT_006471fc,&DAT_0064ce28);
  return pHVar4;
}


