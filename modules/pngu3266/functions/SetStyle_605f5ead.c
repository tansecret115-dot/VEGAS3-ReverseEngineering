/* Module: pngu3266.dll
   Function: SetStyle
   Address: 605f5ead
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetStyle(long) */

void __thiscall CPNPen::SetStyle(CPNPen *this,long param_1)

{
  int iVar1;
  
                    /* 0x5ead  2010  ?SetStyle@CPNPen@@UAEXJ@Z */
  XPNPen::SetStyle((XPNPen *)this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


