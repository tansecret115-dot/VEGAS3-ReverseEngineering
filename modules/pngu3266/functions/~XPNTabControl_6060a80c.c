/* Module: pngu3266.dll
   Function: ~XPNTabControl
   Address: 6060a80c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNTabControl::~XPNTabControl(void) */

void __thiscall XPNTabControl::~XPNTabControl(XPNTabControl *this)

{
  int *piVar1;
  undefined4 *puVar2;
  XPNTabControl *local_8;
  
                    /* 0x1a80c  419  ??1XPNTabControl@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  local_8 = this;
  if (*(int *)(this + 0xd0) != 0) {
    local_8 = *(XPNTabControl **)(*(int *)(this + 0xd0) + 4);
    while (local_8 != (XPNTabControl *)0x0) {
      puVar2 = (undefined4 *)FUN_6061a2c0((int *)&local_8);
      puVar2 = (undefined4 *)*puVar2;
      piVar1 = (int *)*puVar2;
      if (piVar1 != (int *)0x0) {
        FUN_60618cd0(piVar1);
        operator_delete(piVar1);
      }
      operator_delete(puVar2);
    }
    if (*(undefined4 **)(this + 0xd0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0xd0))(1);
    }
    *(undefined4 *)(this + 0xd0) = 0;
  }
  if (*(undefined4 **)(this + 0xd4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xd4))(1);
  }
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


