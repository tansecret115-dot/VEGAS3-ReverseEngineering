/* Module: vegas30.exe
   Function: FUN_0043d850
   Address: 0043d850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043d850(HWND param_1,LPCSTR param_2,DWORD param_3)

{
  BOOL BVar1;
  uchar *_Dest;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  tagOFNA *ptVar5;
  tagOFNA local_254 [3];
  uchar local_104 [260];
  
  iVar4 = 0;
  _mbscpy((uchar *)&local_254[0].pvReserved,(uchar *)"Wav Files\t*.wav\t\t");
  _SfStringReplaceChars_12(&local_254[0].pvReserved,9,0);
  ptVar5 = local_254;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar5->lStructSize = 0;
    ptVar5 = (tagOFNA *)&ptVar5->hwndOwner;
  }
  local_254[0].hInstance = DAT_006471fc;
  local_254[0].lpstrFilter = (LPCSTR)&local_254[0].pvReserved;
  local_254[0].lStructSize = 0x4c;
  local_254[0].hwndOwner = param_1;
  local_254[0].lpstrTitle = (LPCSTR)0x0;
  local_254[0].nFilterIndex = 0;
  local_254[0].lCustData = 0;
  local_254[0].Flags = 0x80804;
  local_254[0].lpstrFile = param_2;
  local_254[0].nMaxFile = param_3;
  _mbscpy(local_104,&DAT_006486bc);
  local_254[0].lpstrInitialDir = (LPCSTR)local_104;
  BVar1 = GetSaveFileNameA(local_254);
  if (BVar1 != 0) {
    iVar3 = _SfDoesFileExist_4(param_2);
    if (iVar3 != 0) {
      iVar3 = SfMsgBox(param_1,0x44,"This file already exist, overwrite it?");
      if (iVar3 == 6) {
        DeleteFileA(param_2);
      }
      else {
        iVar4 = 1;
      }
    }
    _Dest = (uchar *)_SfGetFileNameExtensionPtrA_4(param_2);
    iVar3 = lstrcmpiA((LPCSTR)_Dest,".wav");
    if (iVar3 != 0) {
      _mbscpy(_Dest,".wav");
    }
    SfOpenFile_GetPathName(local_254[0].lpstrFile,local_254[0]._56_4_ & 0xffff,&DAT_006486bc,0x104);
    return iVar4;
  }
  DVar2 = CommDlgExtendedError();
  return (DVar2 != 0) + 0x8004e00c;
}


