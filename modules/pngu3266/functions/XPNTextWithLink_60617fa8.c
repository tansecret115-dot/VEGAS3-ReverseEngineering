/* Module: pngu3266.dll
   Function: XPNTextWithLink
   Address: 60617fa8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNTextWithLink::XPNTextWithLink(void) */

XPNTextWithLink * __thiscall XPNTextWithLink::XPNTextWithLink(XPNTextWithLink *this)

{
  undefined4 *puVar1;
  int *piVar2;
  
                    /* 0x27fa8  281  ??0XPNTextWithLink@@QAE@XZ */
  XPNCustomText::XPNCustomText((XPNCustomText *)this);
  *(undefined ***)this = &CPNCustomText::_vftable_;
  CPNColor::CPNColor((CPNColor *)(this + 0x149),'\0','\0',0xff);
  *(undefined ***)this = &_vftable_;
  CPNWindow::SetFont((CPNWindow *)this,&CPNDrawHelper::m_controlsFont,0);
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_6061a0c0(puVar1);
  }
  *(int **)(this + 0x168) = piVar2;
  (**(code **)(*piVar2 + 8))();
  *(undefined4 *)(this + 0x16c) = 0;
  CPNCursor::LoadStandardCursor(&zm_ArrowCursor,1);
  return this;
}


