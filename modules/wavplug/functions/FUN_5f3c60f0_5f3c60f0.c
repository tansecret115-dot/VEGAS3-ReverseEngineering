/* Module: wavplug.dll
   Function: FUN_5f3c60f0
   Address: 5f3c60f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3c60f0(uchar *param_1,uchar *param_2,DWORD param_3)

{
  UINT uMode;
  HANDLE hFile;
  DWORD DVar1;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_1);
  _mbscat(local_104,param_2);
  uMode = SetErrorMode(1);
  hFile = CreateFileA((LPCSTR)local_104,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  SetErrorMode(uMode);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ec4;
  }
  if (param_3 == 0) {
    DVar1 = 0;
  }
  else {
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
  }
  CloseHandle(hFile);
  return (-(uint)(DVar1 != param_3) & 0x80000006) + 0x4e131;
}


