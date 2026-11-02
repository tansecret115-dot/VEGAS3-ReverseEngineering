/* Module: vegas30.exe
   Function: FUN_00516b70
   Address: 00516b70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00516b70(HINSTANCE param_1,LPCSTR param_2)

{
  short sVar1;
  BOOL BVar2;
  int iVar3;
  tagWNDCLASSA *ptVar4;
  tagWNDCLASSA local_28;
  
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 == 0) {
    ptVar4 = &local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar4->style = 0;
      ptVar4 = (tagWNDCLASSA *)&ptVar4->lpfnWndProc;
    }
    local_28.lpszClassName = param_2;
    local_28.lpfnWndProc = (WNDPROC)&LAB_005150b0;
    local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
    local_28.hIcon = (HICON)0x0;
    local_28.lpszMenuName = (LPCSTR)0x0;
    local_28.hbrBackground = (HBRUSH)0x0;
    local_28.hInstance = param_1;
    local_28.cbClsExtra = 0;
    local_28.cbWndExtra = 4;
    local_28.style = 0xb;
    sVar1 = _SfRegisterClass_4(&local_28);
    return sVar1 != 0;
  }
  return false;
}


