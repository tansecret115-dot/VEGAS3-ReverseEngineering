/* Module: pngu3266.dll
   Function: SetColor
   Address: 605f5e3f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetColor(class CPNColor &) */

void __thiscall CPNPen::SetColor(CPNPen *this,CPNColor *param_1)

{
  int iVar1;
  
                    /* 0x5e3f  1862  ?SetColor@CPNPen@@UAEXAAVCPNColor@@@Z */
  XPNPen::SetColor((XPNPen *)this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


