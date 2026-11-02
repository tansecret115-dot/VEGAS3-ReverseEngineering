/* Module: 50comupd.exe
   Function: FUN_010020d4
   Address: 010020d4
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_010020d4(void)

{
  UINT UVar1;
  HFILE hFile;
  LONG LVar2;
  CHAR local_108 [260];
  
  LVar2 = 0;
  UVar1 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar1 != 0) {
    FUN_01005a84(local_108,"wininit.ini");
    WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,local_108);
    hFile = _lopen(local_108,0x40);
    if (hFile != -1) {
      LVar2 = _llseek(hFile,0,2);
      _lclose(hFile);
    }
  }
  return LVar2;
}


