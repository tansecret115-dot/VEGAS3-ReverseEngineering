/* Module: vegas30.exe
   Function: FUN_00481b60
   Address: 00481b60
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_00481b60(HWND param_1,LPSTR param_2,DWORD param_3,LPCSTR param_4,DWORD param_5)

{
  BOOL BVar1;
  int iVar2;
  tagOFNA *ptVar3;
  tagOFNA local_150 [3];
  
  _SfGetPathNameFromFilePath_12(param_2,&local_150[0].pvReserved,0x104);
  _SfStringReplaceChars_12(param_4,9,0);
  ptVar3 = local_150;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar3->lStructSize = 0;
    ptVar3 = (tagOFNA *)&ptVar3->hwndOwner;
  }
  local_150[0].lStructSize = 0x4c;
  local_150[0].hInstance = DAT_006471fc;
  local_150[0].hwndOwner = param_1;
  local_150[0].lpstrTitle = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e49);
  local_150[0].lpstrInitialDir = (LPCSTR)&local_150[0].pvReserved;
  local_150[0].lpstrFilter = param_4;
  local_150[0].nFilterIndex = 1;
  local_150[0].lCustData = 0;
  local_150[0].Flags = param_5;
  local_150[0].lpstrFile = param_2;
  local_150[0].nMaxFile = param_3;
  local_150[0].lpstrDefExt = param_4;
  BVar1 = GetOpenFileNameA(local_150);
  if (BVar1 != 0) {
    lstrcpynA(param_2,local_150[0].lpstrFile,param_3);
    param_2[param_3 - 1] = '\0';
  }
  return BVar1;
}


