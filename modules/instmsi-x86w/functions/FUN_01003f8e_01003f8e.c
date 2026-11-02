/* Module: InstMsi-x86w.exe
   Function: FUN_01003f8e
   Address: 01003f8e
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01003f8e(LPCSTR param_1)

{
  undefined4 *hMem;
  int iVar1;
  LPSTR lpString1;
  
  hMem = LocalAlloc(0x40,8);
  if (hMem == (undefined4 *)0x0) {
    FUN_01003cb8(DAT_0100aa78,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  else {
    iVar1 = lstrlenA(param_1);
    lpString1 = LocalAlloc(0x40,iVar1 + 1);
    *hMem = lpString1;
    if (lpString1 != (LPSTR)0x0) {
      lstrcpyA(lpString1,param_1);
      hMem[1] = DAT_0100ae80;
      DAT_0100ae80 = hMem;
      return 1;
    }
    FUN_01003cb8(DAT_0100aa78,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    LocalFree(hMem);
  }
  return 0;
}


