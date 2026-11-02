/* Module: stl2plg.dll
   Function: FUN_004035c0
   Address: 004035c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004035c0(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint dwBytes;
  HGLOBAL pvVar2;
  LPVOID lpBuffer;
  BOOL BVar3;
  int iVar4;
  undefined1 *puVar5;
  void *local_4;
  
  local_4 = this;
  SetFilePointer(*(HANDLE *)((int)this + 0x3b8),*(LONG *)((int)this + 0x3e4),(PLONG)0x0,0);
  dwBytes = FUN_004050b0(*(HANDLE *)((int)this + 0x3b8));
  pvVar2 = GlobalAlloc(0x40,dwBytes);
  lpBuffer = GlobalLock(pvVar2);
  *param_2 = 1 << (*(byte *)((int)this + 0x3d2) & 0x1f);
  if (dwBytes != 0) {
    BVar3 = ReadFile(*(HANDLE *)((int)this + 0x3b8),lpBuffer,dwBytes,(LPDWORD)&local_4,
                     (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      if (lpBuffer != (LPVOID)0x0) {
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalFree(pvVar2);
      }
      return 0x80004005;
    }
    iVar4 = 0;
    if (0 < *param_2) {
      puVar5 = (undefined1 *)(param_1 + 1);
      do {
        puVar5[1] = *(undefined1 *)(iVar4 + (int)lpBuffer);
        *puVar5 = *(undefined1 *)(*param_2 + iVar4 + (int)lpBuffer);
        iVar1 = iVar4 + *param_2 * 2;
        iVar4 = iVar4 + 1;
        puVar5[-1] = *(undefined1 *)(iVar1 + (int)lpBuffer);
        puVar5[2] = 0xff;
        puVar5 = puVar5 + 4;
      } while (iVar4 < *param_2);
    }
  }
  if (lpBuffer != (LPVOID)0x0) {
    pvVar2 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar2);
  }
  return 0;
}


