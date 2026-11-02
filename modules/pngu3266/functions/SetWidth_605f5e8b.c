/* Module: pngu3266.dll
   Function: SetWidth
   Address: 605f5e8b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetWidth(long) */

void __thiscall CPNPen::SetWidth(CPNPen *this,long param_1)

{
  int iVar1;
  
                    /* 0x5e8b  2042  ?SetWidth@CPNPen@@UAEXJ@Z */
  XPNPen::SetWidth((XPNPen *)this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


