/* Module: 50comupd.exe
   Function: FUN_010056e6
   Address: 010056e6
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010056e6(void)

{
  bool bVar1;
  UINT UVar2;
  CHAR local_108 [260];
  
  UVar2 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar2 == 0) {
    FUN_01003ce8((HWND)0x0,0x4f0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_01005735();
    return false;
  }
  bVar1 = FUN_01004fb9(local_108,2,2);
  return bVar1;
}


