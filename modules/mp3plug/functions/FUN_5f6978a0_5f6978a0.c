/* Module: mp3plug.dll
   Function: FUN_5f6978a0
   Address: 5f6978a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f6978a0(void *this,undefined4 *param_1,DWORD *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  DWORD nNumberOfBytesToRead;
  BOOL BVar3;
  void *local_4;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return (undefined4 *)0x8004e007;
  }
  nNumberOfBytesToRead = *(DWORD *)((int)this + 0x1c0);
  local_4 = this;
  if (*(int *)((int)this + 0x160) < (int)nNumberOfBytesToRead) {
    if (*(LPCVOID *)((int)this + 0x138) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x138));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x138));
      GlobalFree(pvVar1);
      *(undefined4 *)((int)this + 0x160) = 0;
    }
    pvVar1 = GlobalAlloc(0x42,*(SIZE_T *)((int)this + 0x1c0));
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)((int)this + 0x138) = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x8007000e;
    }
    nNumberOfBytesToRead = *(DWORD *)((int)this + 0x1c0);
    *(DWORD *)((int)this + 0x160) = nNumberOfBytesToRead;
  }
  if (-1 < (int)param_1) {
    BVar3 = ReadFile(*(HANDLE *)((int)this + 0x18),*(LPVOID *)((int)this + 0x138),
                     nNumberOfBytesToRead,(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      *param_1 = *(undefined4 *)((int)this + 0x138);
      *param_2 = (DWORD)local_4;
      *(void **)((int)this + 0x188) = local_4;
      return param_1;
    }
    param_1 = (undefined4 *)0x8004e008;
  }
  return param_1;
}


