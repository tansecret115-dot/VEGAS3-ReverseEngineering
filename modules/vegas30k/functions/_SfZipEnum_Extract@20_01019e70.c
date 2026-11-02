/* Module: vegas30k.dll
   Function: _SfZipEnum_Extract@20
   Address: 01019e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfZipEnum_Extract_20(int param_1,int param_2,uchar *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  HANDLE hFile;
  BOOL BVar3;
  HGLOBAL pvVar4;
  LPCVOID local_12c;
  DWORD local_128;
  _FILETIME local_124;
  FILETIME local_11c;
  FILETIME local_114;
  _FILETIME local_10c;
  uchar local_104 [260];
  
                    /* 0x19e70  1308  _SfZipEnum_Extract@20 */
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (uchar *)0x0)) {
    return &DAT_80070057;
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar1 = lstrlenA(*(LPCSTR *)(param_2 + 0x24));
    if (*(char *)(iVar1 + -1 + *(int *)(param_2 + 0x24)) == '\\') {
      _mbscpy(local_104,param_3);
      iVar1 = lstrlenA((LPCSTR)local_104);
      local_104[iVar1 + -1] = '\0';
      iVar1 = _SfCreateDirectory_8(local_104,0);
      if (iVar1 != 0) {
        return (undefined1 *)0x0;
      }
    }
    return (undefined1 *)0x80004005;
  }
  if (param_4 == 0) {
    puVar2 = (undefined1 *)_SfZipEnum_ExtractToMemory_12(param_1,param_2,&local_12c);
    if (-1 < (int)puVar2) {
      _SfGetPathNameFromFilePath_12(param_3,local_104,0x104);
      iVar1 = lstrlenA((LPCSTR)local_104);
      if ((iVar1 == 0) || (iVar1 = _SfCreateDirectory_8(local_104,0), iVar1 != 0)) {
        hFile = CreateFileA((LPCSTR)param_3,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
        if (hFile == (HANDLE)0xffffffff) {
          puVar2 = &DAT_80070057;
        }
        else {
          DosDateTimeToFileTime(*(WORD *)(param_2 + 8),*(WORD *)(param_2 + 6),&local_10c);
          LocalFileTimeToFileTime(&local_10c,&local_124);
          local_114.dwHighDateTime = local_124.dwHighDateTime;
          local_11c.dwHighDateTime = local_124.dwHighDateTime;
          local_114.dwLowDateTime = local_124.dwLowDateTime;
          local_11c.dwLowDateTime = local_124.dwLowDateTime;
          SetFileTime(hFile,&local_114,&local_11c,&local_124);
          local_128 = 0;
          BVar3 = WriteFile(hFile,local_12c,*(DWORD *)(param_2 + 0x14),&local_128,(LPOVERLAPPED)0x0)
          ;
          puVar2 = (undefined1 *)((-(uint)(BVar3 != 0) & 0x7ffb1ff7) + 0x8004e009);
          CloseHandle(hFile);
        }
      }
      else {
        puVar2 = (undefined1 *)0x8004e009;
      }
      pvVar4 = GlobalHandle(local_12c);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(local_12c);
      GlobalFree(pvVar4);
      return puVar2;
    }
    return puVar2;
  }
  puVar2 = (undefined1 *)FUN_01019cf0(param_1,param_2,param_3,param_5);
  return puVar2;
}


