/* Module: vegas30.exe
   Function: FUN_00609510
   Address: 00609510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00609510(uchar *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  HANDLE hFindFile;
  int iVar2;
  uchar *_Source;
  uchar local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  _mbscpy(local_244,param_1);
  if (*param_2 != '.') {
    _mbscat(local_244,param_2);
  }
  iVar1 = lstrlenA((LPCSTR)local_244);
  if (local_244[iVar1 + -1] == '\\') {
    _Source = "*.*";
  }
  else {
    _Source = "\\*.*";
  }
  _mbscat(local_244,_Source);
  hFindFile = FindFirstFileA((LPCSTR)local_244,&local_140);
  if (hFindFile != (HANDLE)0xffffffff) {
    if (param_3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
      iVar2 = FindNextFileA(hFindFile,&local_140);
      while (iVar2 != 0) {
        iVar1 = iVar1 + 1;
        iVar2 = FindNextFileA(hFindFile,&local_140);
      }
    }
    FindClose(hFindFile);
    return (-(uint)(iVar1 != param_3) & 0x80000007) + 0x4e131;
  }
  return -0x7ffb1ec4;
}


