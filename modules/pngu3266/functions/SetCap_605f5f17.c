/* Module: pngu3266.dll
   Function: SetCap
   Address: 605f5f17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetCap(long) */

void __thiscall CPNPen::SetCap(CPNPen *this,long param_1)

{
  int iVar1;
  
                    /* 0x5f17  1854  ?SetCap@CPNPen@@UAEXJ@Z */
  XPNPen::SetCap((XPNPen *)this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


