/* Module: pngu3266.dll
   Function: GetFirstVisibleItem
   Address: 6060523f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::GetFirstVisibleItem(void)const  */

ulong __thiscall CPNTreeControl::GetFirstVisibleItem(CPNTreeControl *this)

{
  uint uVar1;
  int iVar2;
  CPNTreeControl *local_8;
  
                    /* 0x1523f  1192  ?GetFirstVisibleItem@CPNTreeControl@@UBEKXZ */
  local_8 = this;
  uVar1 = SendMessageA(*(HWND *)(this + 0xc),0x110a,5,0);
  if (uVar1 != 0) {
    local_8 = (CPNTreeControl *)0x0;
    iVar2 = FUN_60619b60(*(void **)(this + 200),uVar1,&local_8);
    if ((iVar2 != 0) && (local_8 != (CPNTreeControl *)0x0)) {
      return *(ulong *)local_8;
    }
  }
  return 0;
}


