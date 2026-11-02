/* Module: mp3plug.dll
   Function: FUN_5f69aab0
   Address: 5f69aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69aab0(void *this,undefined1 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPSTR lpString1;
  
  if (*(LPCVOID *)((int)this + 0xc) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0xc));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0xc));
    GlobalFree(pvVar2);
  }
  pvVar2 = GlobalAlloc(0x42,*(int *)((int)this + 0x18) + 2);
  lpString1 = GlobalLock(pvVar2);
  *(LPSTR *)((int)this + 0xc) = lpString1;
  if (lpString1 != (LPSTR)0x0) {
    iVar1 = *(int *)((int)this + 0x18);
    lstrcpynA(lpString1,*(LPCSTR *)((int)this + 0x28),iVar1 + 1);
    lpString1[iVar1] = '\0';
  }
  FUN_5f69a510(this,param_1);
  return;
}


