/* Module: hhupd.exe
   Function: FUN_0100562b
   Address: 0100562b
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0100562b(void)

{
  bool bVar1;
  UINT UVar2;
  CHAR local_108 [260];
  
  UVar2 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar2 == 0) {
    FUN_01003c23((HWND)0x0,0x4f0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056b9();
    return false;
  }
  bVar1 = FUN_01004f10(local_108,2,2);
  return bVar1;
}


