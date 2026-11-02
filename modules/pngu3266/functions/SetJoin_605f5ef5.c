/* Module: pngu3266.dll
   Function: SetJoin
   Address: 605f5ef5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetJoin(long) */

void __thiscall CPNPen::SetJoin(CPNPen *this,long param_1)

{
  int iVar1;
  
                    /* 0x5ef5  1937  ?SetJoin@CPNPen@@UAEXJ@Z */
  XPNPen::SetJoin((XPNPen *)this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


