/* Module: vidcap30.exe
   Function: FUN_00451620
   Address: 00451620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00451620(int param_1)

{
  int iVar1;
  HANDLE hObject;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  LPCVOID pMem;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x130);
  hObject = CreateFileA((LPCSTR)(param_1 + 0x2c),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,
                        0x10000080,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0x8004e006;
  }
  pvVar2 = GlobalAlloc(0x40,0x28);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    pMem = (LPCVOID)FUN_00445550();
    if (pMem != (LPCVOID)0x0) {
      FUN_004454b0(hObject);
      _mbscpy((uchar *)(iVar1 + 0xbc),(uchar *)(param_1 + 0x2c));
      uVar4 = FUN_00451780(hObject,pMem,iVar1,*(undefined4 *)(param_1 + 0x134),param_1);
      CloseHandle(hObject);
      FUN_004455a0();
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      return uVar4;
    }
  }
  return 0x8007000e;
}


