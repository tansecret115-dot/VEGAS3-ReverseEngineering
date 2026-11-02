/* Module: vegas30.exe
   Function: FUN_0043b960
   Address: 0043b960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b960(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  BOOL BVar1;
  int iVar2;
  tagWNDCLASSA *ptVar3;
  HWND local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagWNDCLASSA local_28;
  
  BVar1 = GetClassInfoA(DAT_006471fc,s_ACID_ToolbarWrapper_0063dcdc,&local_28);
  if (BVar1 == 0) {
    ptVar3 = &local_28;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar3->style = 0;
      ptVar3 = (tagWNDCLASSA *)&ptVar3->lpfnWndProc;
    }
    local_28.lpfnWndProc = FUN_0043ba30;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = s_ACID_ToolbarWrapper_0063dcdc;
    local_28.hbrBackground = (HBRUSH)0x10;
    RegisterClassA(&local_28);
  }
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_3c = param_1;
  CreateWindowExA(0x10000,s_ACID_ToolbarWrapper_0063dcdc,(LPCSTR)0x0,0x50000000,0,0,0,0,param_1,
                  (HMENU)0x0,DAT_006471fc,&local_3c);
  return;
}


