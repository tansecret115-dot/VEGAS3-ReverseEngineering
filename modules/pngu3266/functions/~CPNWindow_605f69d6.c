/* Module: pngu3266.dll
   Function: ~CPNWindow
   Address: 605f69d6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNWindow::~CPNWindow(void) */

void __thiscall CPNWindow::~CPNWindow(CPNWindow *this)

{
  undefined4 *puVar1;
  void *this_00;
  BOOL BVar2;
  int iVar3;
  
                    /* 0x69d6  372  ??1CPNWindow@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0x70) != 0) {
    RemoveSensitiveRect(this,-1);
    if (*(undefined4 **)(this + 0x70) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x70))(1);
    }
  }
  *(undefined4 *)(this + 0x70) = 0;
  if (*(XPNTimer **)(this + 0x18) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x18),0);
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(XPNTimer **)(this + 0x20) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(XPNTimer **)(this + 0x1c) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x1c),0);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  this_00 = (void *)PNGuiGetMapHandle();
  if (*(CPNWindow **)(this + 0x48) != (CPNWindow *)0x0) {
    RemoveChild(*(CPNWindow **)(this + 0x48),this);
  }
  if (*(HWND *)(this + 0xc) != (HWND)0x0) {
    BVar2 = IsWindow(*(HWND *)(this + 0xc));
    if (BVar2 != 0) {
      DestroyWindow(*(HWND *)(this + 0xc));
    }
  }
  if (*(uint *)(this + 0xc) != 0) {
    iVar3 = FUN_60619de0(this_00,*(uint *)(this + 0xc));
    if (iVar3 != 0) {
      FUN_60619e20(this_00,*(uint *)(this + 0xc));
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  DestroyChildren(this);
  if (*(undefined4 **)(this + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x44))(1);
  }
  puVar1 = *(undefined4 **)(this + 0x3c);
  *(undefined4 *)(this + 0x44) = 0;
  if (((puVar1 != (undefined4 *)0x0) && (((byte)this[0x4c] & 1) != 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)(this + 0x3c) = 0;
  if (*(undefined4 **)(this + 0x7c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x7c))(1);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  XPNWindow::~XPNWindow((XPNWindow *)this);
  return;
}


