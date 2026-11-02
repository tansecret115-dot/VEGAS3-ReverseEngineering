/* Module: aviplug.dll
   Function: FUN_5f95ca00
   Address: 5f95ca00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f95ca00(void *this,int param_1)

{
  SIZE_T dwBytes;
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 uVar2;
  
  if (*(HGLOBAL *)((int)this + 200) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)((int)this + 200));
    GlobalFree(*(HGLOBAL *)((int)this + 200));
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x24) = 0;
  }
  if (param_1 != 0) {
    dwBytes = ICSendMessage(param_1,0x5000,0,0);
    if (dwBytes != 0) {
      hMem = GlobalAlloc(0x42,dwBytes);
      if (hMem != (HGLOBAL)0x0) {
        *(HGLOBAL *)((int)this + 200) = hMem;
        pvVar1 = GlobalLock(hMem);
        *(LPVOID *)(*(int *)((int)this + 0x98) + 0x20) = pvVar1;
        *(SIZE_T *)(*(int *)((int)this + 0x98) + 0x24) = dwBytes;
        uVar2 = ICSendMessage(param_1,0x5000,*(undefined4 *)(*(int *)((int)this + 0x98) + 0x20),
                              dwBytes);
        return uVar2;
      }
      return 0xfffffffd;
    }
  }
  return 0;
}


