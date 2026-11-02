/* Module: vidcap30.exe
   Function: FUN_004501a0
   Address: 004501a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004501a0(int param_1)

{
  HANDLE hObject;
  DWORD DVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  LPCVOID pMem;
  int iVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x130) + 0x1c8) != 0) {
    return 0;
  }
  hObject = CreateFileA((LPCSTR)(param_1 + 0x2c),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                        0x10000080,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    DVar1 = GetCurrentThreadId();
    FUN_0042f490(*(undefined4 *)(param_1 + 0x130),DVar1);
    pvVar2 = GlobalAlloc(0x40,0x28);
    pvVar3 = GlobalLock(pvVar2);
    if (pvVar3 != (LPVOID)0x0) {
      pMem = (LPCVOID)FUN_00445550();
      if (pMem != (LPCVOID)0x0) {
        FUN_004454b0(hObject);
        FUN_0042f4b0(*(undefined4 *)(param_1 + 0x130),1);
        iVar4 = FUN_004503d0(hObject,pMem,*(undefined4 *)(param_1 + 0x130),
                             *(undefined4 *)(param_1 + 0x134),param_1);
        CloseHandle(hObject);
        FUN_004455a0();
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        if (-1 < iVar4) {
          _mbscpy((uchar *)(*(int *)(param_1 + 0x130) + 0xbc),(uchar *)(param_1 + 0x2c));
          FUN_0042f5d0(*(undefined4 *)(param_1 + 0x130),1);
          return iVar4;
        }
        FUN_0042f5d0(*(undefined4 *)(param_1 + 0x130),1);
        return iVar4;
      }
    }
    CloseHandle(hObject);
    return -0x7ff8fff2;
  }
  return -0x7ffb1ff9;
}


