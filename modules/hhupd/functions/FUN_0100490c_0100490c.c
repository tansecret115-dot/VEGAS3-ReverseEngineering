/* Module: hhupd.exe
   Function: FUN_0100490c
   Address: 0100490c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100490c(void)

{
  undefined4 *puVar1;
  undefined4 *hMem;
  CHAR local_104 [260];
  
  hMem = DAT_0100ae80;
  while (hMem != (undefined4 *)0x0) {
    if ((DAT_0100aaa4 == 0) && (DAT_0100b6d0 == 0)) {
      SetFileAttributesA((LPCSTR)*hMem,0x80);
      DeleteFileA((LPCSTR)*hMem);
    }
    puVar1 = (undefined4 *)hMem[1];
    LocalFree((HLOCAL)*hMem);
    LocalFree(hMem);
    hMem = puVar1;
  }
  if (((DAT_0100aaa0 != 0) && (DAT_0100aaa4 == 0)) && (DAT_0100b6d0 == 0)) {
    lstrcpyA(local_104,&DAT_0100ae84);
    if ((DAT_0100b6d4 & 0x20) != 0) {
      FUN_01005a29(local_104);
    }
    SetCurrentDirectoryA("..");
    FUN_01001f66(local_104);
  }
  if ((DAT_0100bc04 != 1) && (DAT_0100aaa0 != 0)) {
    FUN_01001c31();
  }
  DAT_0100aaa0 = 0;
  return;
}


