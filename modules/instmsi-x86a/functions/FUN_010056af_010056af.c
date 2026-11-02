/* Module: InstMsi-x86a.exe
   Function: FUN_010056af
   Address: 010056af
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010056af(void)

{
  bool bVar1;
  UINT UVar2;
  CHAR local_108 [260];
  
  UVar2 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar2 == 0) {
    FUN_01003cb8((HWND)0x0,0x4f0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056fe();
    return false;
  }
  bVar1 = FUN_01004f82(local_108,2,2);
  return bVar1;
}


