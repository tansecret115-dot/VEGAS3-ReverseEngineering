/* Module: hhupd.exe
   Function: FUN_010020cc
   Address: 010020cc
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_010020cc(void)

{
  UINT UVar1;
  HFILE hFile;
  LONG LVar2;
  CHAR local_108 [260];
  
  LVar2 = 0;
  UVar1 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar1 != 0) {
    FUN_010059ea(local_108,"wininit.ini");
    hFile = _lopen(local_108,0x40);
    if (hFile != -1) {
      LVar2 = _llseek(hFile,0,2);
      _lclose(hFile);
    }
  }
  return LVar2;
}


