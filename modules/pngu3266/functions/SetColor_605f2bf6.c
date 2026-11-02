/* Module: pngu3266.dll
   Function: SetColor
   Address: 605f2bf6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBrush::SetColor(class CPNColor &) */

void __thiscall CPNBrush::SetColor(CPNBrush *this,CPNColor *param_1)

{
  int iVar1;
  
                    /* 0x2bf6  1860  ?SetColor@CPNBrush@@UAEXAAVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0x10),param_1);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


