/* Module: pngu3266.dll
   Function: SetColor
   Address: 605f5e61
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetColor(char,char,char) */

void __thiscall CPNPen::SetColor(CPNPen *this,char param_1,char param_2,char param_3)

{
  int iVar1;
  
                    /* 0x5e61  1863  ?SetColor@CPNPen@@UAEXDDD@Z */
  XPNPen::SetColor((XPNPen *)this,param_1,param_2,param_3);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


