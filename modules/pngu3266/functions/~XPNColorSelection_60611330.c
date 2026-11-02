/* Module: pngu3266.dll
   Function: ~XPNColorSelection
   Address: 60611330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNColorSelection::~XPNColorSelection(void) */

void __thiscall XPNColorSelection::~XPNColorSelection(XPNColorSelection *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x21330  384  ??1XPNColorSelection@@UAE@XZ */
  iVar3 = 0;
  *(undefined ***)this = &_vftable_;
  iVar1 = *(int *)(this + 0xe4);
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(this + 0xe0) + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_6061a4d0(this + 0xe0,0,0xffffffff);
  FUN_6061a4c0((undefined4 *)(this + 0xe0));
  CPNMenuButton::~CPNMenuButton((CPNMenuButton *)this);
  return;
}


