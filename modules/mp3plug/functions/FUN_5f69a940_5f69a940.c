/* Module: mp3plug.dll
   Function: FUN_5f69a940
   Address: 5f69a940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69a940(void *this,undefined1 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined1 *puVar3;
  int iMaxLength;
  
  if (*(LPCVOID *)((int)this + 0xc) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0xc));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0xc));
    GlobalFree(pvVar2);
  }
  pvVar2 = GlobalAlloc(0x42,*(int *)((int)this + 0x18) + 3);
  puVar3 = GlobalLock(pvVar2);
  *(undefined1 **)((int)this + 0xc) = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    iVar1 = *(int *)((int)this + 0xc);
    iMaxLength = *(int *)((int)this + 0x18) + 1;
    lstrcpynA((LPSTR)(iVar1 + 1),*(LPCSTR *)((int)this + 0x28),iMaxLength);
    *(undefined1 *)(iVar1 + iMaxLength) = 0;
  }
  FUN_5f69a510(this,param_1);
  return;
}


