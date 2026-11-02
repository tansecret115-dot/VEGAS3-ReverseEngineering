/* Module: mp3plug.dll
   Function: FUN_5f69afb0
   Address: 5f69afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69afb0(void *this,undefined1 *param_1)

{
  HGLOBAL pvVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (*(LPCVOID *)((int)this + 0xc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0xc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0xc));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,*(int *)((int)this + 0x18) + 3);
  puVar2 = GlobalLock(pvVar1);
  *(undefined1 **)((int)this + 0xc) = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    iVar3 = FUN_5f69a720(this,*(char **)((int)this + 0x28),0,0,1);
    FUN_5f69a720(this,*(char **)((int)this + 0x2c),0,0,iVar3);
  }
  FUN_5f69a510(this,param_1);
  return;
}


