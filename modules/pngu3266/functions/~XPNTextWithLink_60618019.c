/* Module: pngu3266.dll
   Function: ~XPNTextWithLink
   Address: 60618019
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNTextWithLink::~XPNTextWithLink(void) */

void __thiscall XPNTextWithLink::~XPNTextWithLink(XPNTextWithLink *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
                    /* 0x28019  421  ??1XPNTextWithLink@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  while( true ) {
    piVar1 = *(int **)(this + 0x168);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = piVar1[4];
    }
    if (iVar2 < 1) break;
    pvVar3 = (void *)FUN_6061a1b0(piVar1);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if (*(undefined4 **)(this + 0x168) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x168))(1);
    *(undefined4 *)(this + 0x168) = 0;
  }
  *(undefined4 *)(this + 0x16c) = 0;
  CPNColor::~CPNColor((CPNColor *)(this + 0x149));
  *(undefined ***)this = &CPNCustomText::_vftable_;
  XPNCustomText::~XPNCustomText((XPNCustomText *)this);
  return;
}


