/* Module: vegas30.exe
   Function: FUN_005494d0
   Address: 005494d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005494d0(void)

{
  ATOM AVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  tagWNDCLASSA *ptVar5;
  tagWNDCLASSA local_28;
  
  uVar4 = 1;
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.MediaPoolParent",&local_28);
  if (BVar2 == 0) {
    ptVar5 = &local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar5->style = 0;
      ptVar5 = (tagWNDCLASSA *)&ptVar5->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0054e710;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "Vegas.MediaPoolParent";
    local_28.hbrBackground = (HBRUSH)0x10;
    AVar1 = RegisterClassA(&local_28);
    if (AVar1 == 0) {
      uVar4 = 0;
    }
  }
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.MediaPoolStatus",&local_28);
  if (BVar2 == 0) {
    ptVar5 = &local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar5->style = 0;
      ptVar5 = (tagWNDCLASSA *)&ptVar5->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0054a3a0;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "Vegas.MediaPoolStatus";
    local_28.hbrBackground = (HBRUSH)0x10;
    AVar1 = RegisterClassA(&local_28);
    if (AVar1 == 0) {
      return 0;
    }
  }
  return uVar4;
}


