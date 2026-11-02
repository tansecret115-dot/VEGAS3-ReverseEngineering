/* Module: pngu3266.dll
   Function: ~XPNPropertySheet
   Address: 60610a0b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNPropertySheet::~XPNPropertySheet(void) */

void __thiscall XPNPropertySheet::~XPNPropertySheet(XPNPropertySheet *this)

{
                    /* 0x20a0b  412  ??1XPNPropertySheet@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_6061a4d0(this + 0xd0,0,0xffffffff);
  if (*(undefined4 **)(this + 0xf0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xf0))(1);
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(undefined4 **)(this + 0xf4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xf4))(1);
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(undefined4 **)(this + 0xf8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xf8))(1);
    *(undefined4 *)(this + 0xf8) = 0;
  }
  if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xfc))(1);
    *(undefined4 *)(this + 0xfc) = 0;
  }
  if (*(undefined4 **)(this + 0x100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x100))(1);
    *(undefined4 *)(this + 0x100) = 0;
  }
  FUN_60618cd0((int *)(this + 0xe0));
  FUN_6061a4c0((undefined4 *)(this + 0xd0));
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}


