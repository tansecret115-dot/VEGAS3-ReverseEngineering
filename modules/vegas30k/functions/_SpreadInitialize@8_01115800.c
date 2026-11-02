/* Module: vegas30k.dll
   Function: _SpreadInitialize@8
   Address: 01115800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ATOM _SpreadInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  BOOL BVar2;
  int iVar3;
  tagWNDCLASSA *ptVar4;
  tagWNDCLASSA local_28;
  
                    /* 0x115800  1336  _SpreadInitialize@8 */
  _DAT_012af7b4 = _SfGetUICursor_4(9);
  _DAT_012af7b0 = _SfLoadCursor_8(0,0x7f00);
  _DAT_012af7b8 = _SfLoadCursor_8(0,0x7f00);
  _DAT_012af7bc = _SfLoadCursor_8(0,0x7f00);
  DAT_012af788 = _SfGetUICursor_4(0x12);
  DAT_012af78c = _SfGetUICursor_4(0x13);
  _DAT_012af790 = _SfGetUICursor_4(0x14);
  _DAT_012af794 = _SfGetUICursor_4(0x15);
  _DAT_012af798 = _SfGetUICursor_4(0x16);
  _DAT_012af79c = _SfGetUICursor_4(0x17);
  _DAT_012af7a0 = _SfGetUICursor_4(0x18);
  _DAT_012af7a4 = _SfGetUICursor_4(0x19);
  DAT_012af7ac = _SfGetUICursor_4(0x1a);
  DAT_012af7a8 = _SfLoadCursor_8(0,0x7f88);
  BVar2 = GetClassInfoA(param_1,"SfSpreadEdit",&local_28);
  if (BVar2 == 0) {
    BVar2 = GetClassInfoA((HINSTANCE)0x0,"EDIT",&local_28);
    if (BVar2 == 0) {
      return 0;
    }
    local_28.style = local_28.style | 0x4000;
    DAT_012af720 = local_28.lpfnWndProc;
    local_28.lpfnWndProc = (WNDPROC)&LAB_011155b0;
    local_28.hInstance = param_1;
    local_28.lpszClassName = "SfSpreadEdit";
    AVar1 = RegisterClassA(&local_28);
    if (AVar1 == 0) {
      return 0;
    }
  }
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 == 0) {
    ptVar4 = &local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar4->style = 0;
      ptVar4 = (tagWNDCLASSA *)&ptVar4->lpfnWndProc;
    }
    local_28.lpszClassName = param_2;
    local_28.lpfnWndProc = FUN_01113ad0;
    local_28.style = 0x4008;
    local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
    local_28.hbrBackground = (HBRUSH)&DAT_00000006;
    local_28.hInstance = param_1;
    AVar1 = RegisterClassA(&local_28);
    return AVar1;
  }
  return 1;
}


