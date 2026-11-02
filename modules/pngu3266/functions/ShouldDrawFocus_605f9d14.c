/* Module: pngu3266.dll
   Function: ShouldDrawFocus
   Address: 605f9d14
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNWindow::ShouldDrawFocus(void) */

int __thiscall CPNWindow::ShouldDrawFocus(CPNWindow *this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
                    /* 0x9d14  2058  ?ShouldDrawFocus@CPNWindow@@MAEHXZ */
  uVar3 = zm_ulFocusDrawingFlags;
  if (*(ulong *)(this + 0x38) != 0xffffffff) {
    uVar3 = *(ulong *)(this + 0x38);
  }
  iVar2 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x94))();
  if ((iVar1 != 0) && ((uVar3 == 2 || ((uVar3 == 3 && (((byte)this[9] & 4) != 0)))))) {
    iVar2 = 1;
  }
  return iVar2;
}


