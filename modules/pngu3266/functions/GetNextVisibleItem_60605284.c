/* Module: pngu3266.dll
   Function: GetNextVisibleItem
   Address: 60605284
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::GetNextVisibleItem(unsigned long) */

ulong __thiscall CPNTreeControl::GetNextVisibleItem(CPNTreeControl *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong *local_8;
  
                    /* 0x15284  1277  ?GetNextVisibleItem@CPNTreeControl@@UAEKK@Z */
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    local_8 = (ulong *)0x0;
    iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
    if ((((iVar1 != 0) && (local_8 != (ulong *)0x0)) &&
        (uVar2 = SendMessageA(*(HWND *)(this + 0xc),0x110a,6,*(LPARAM *)local_8[4]), uVar2 != 0)) &&
       (iVar1 = FUN_60619b60(*(void **)(this + 200),uVar2,&local_8), iVar1 != 0)) {
      return *local_8;
    }
  }
  return 0;
}


