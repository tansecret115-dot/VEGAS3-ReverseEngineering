/* Module: wmfdist2.exe
   Function: FUN_01005893
   Address: 01005893
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01005893(void)

{
  bool bVar1;
  UINT UVar2;
  CHAR local_108 [260];
  
  UVar2 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar2 == 0) {
    FUN_01003e44((HWND)0x0,0x4f0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010058e2();
    return false;
  }
  bVar1 = FUN_01005166(local_108,2,2);
  return bVar1;
}


