/* Module: vegas30.exe
   Function: FUN_004f0a00
   Address: 004f0a00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004f0a00(int param_1)

{
  uchar *_Dest;
  LPCSTR lpString1;
  int iVar1;
  bool bVar2;
  uchar local_208 [260];
  CHAR local_104 [260];
  
  _Dest = (uchar *)(param_1 + 0x584);
  bVar2 = false;
  if (*_Dest != '\0') {
    lpString1 = (LPCSTR)_SfGetFileNamePtrA_4(_Dest);
    iVar1 = lstrcmpiA(lpString1,"VidCap30.EXE");
    bVar2 = iVar1 == 0;
    if ((*_Dest != '\0') && (iVar1 = _SfDoesFileExist_4(_Dest), iVar1 != 0)) {
      return bVar2;
    }
  }
  GetModuleFileNameA(DAT_006471fc,local_104,0x104);
  _SfGetPathNameFromFilePath_12(local_104,local_208,0x104);
  _SfAddSlashToPathName_8(local_208,0x104);
  _mbscat(local_208,(uchar *)"VidCap30.EXE");
  iVar1 = _SfDoesFileExist_4(local_208);
  if (iVar1 == 0) {
    return bVar2;
  }
  _mbscpy(_Dest,local_208);
  return true;
}


