/* Module: vegas30.exe
   Function: FUN_00481a60
   Address: 00481a60
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_00481a60(HWND param_1,LPSTR param_2,DWORD param_3,LPCSTR param_4,DWORD param_5)

{
  BOOL BVar1;
  int iVar2;
  tagOFNA *ptVar3;
  tagOFNA local_190;
  CHAR local_104 [260];
  
  SfPrintF(&local_190.pvReserved,"*%s\t*%s\t",param_4,param_4);
  _SfStringReplaceChars_12(&local_190.pvReserved,9,0);
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  ptVar3 = &local_190;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar3->lStructSize = 0;
    ptVar3 = (tagOFNA *)&ptVar3->hwndOwner;
  }
  local_190.lStructSize = 0x4c;
  local_190.hInstance = DAT_006471fc;
  local_190.hwndOwner = param_1;
  local_190.lpstrTitle = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e49);
  local_190.lpstrInitialDir = local_104;
  local_190.nFilterIndex = 1;
  local_190.lpstrFilter = (LPCSTR)&local_190.pvReserved;
  local_190.lCustData = 0;
  local_190.Flags = param_5;
  local_190.lpstrFile = param_2;
  local_190.nMaxFile = param_3;
  local_190.lpstrDefExt = param_4;
  BVar1 = GetSaveFileNameA(&local_190);
  if (BVar1 != 0) {
    lstrcpynA(param_2,local_190.lpstrFile,param_3);
    param_2[param_3 - 1] = '\0';
  }
  return BVar1;
}


