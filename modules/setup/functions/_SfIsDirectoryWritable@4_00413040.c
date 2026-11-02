/* Module: Setup.exe
   Function: _SfIsDirectoryWritable@4
   Address: 00413040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsDirectoryWritable_4(uchar *param_1)

{
  DWORD DVar1;
  int iVar2;
  uchar local_208 [260];
  uchar local_104 [260];
  
                    /* 0x13040  197  _SfIsDirectoryWritable@4 */
  DVar1 = GetFileAttributesA((LPCSTR)param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    _mbscpy(local_208,param_1);
    _SfAddSlashToPathName_8(local_208,0x104);
    iVar2 = _SfCreateTempFileAndName_16(local_208,"",local_104,0x104);
    if (iVar2 == 0) {
      DeleteFileA((LPCSTR)local_104);
      return 1;
    }
  }
  return 0;
}


