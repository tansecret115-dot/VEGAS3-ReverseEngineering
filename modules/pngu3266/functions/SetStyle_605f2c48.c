/* Module: pngu3266.dll
   Function: SetStyle
   Address: 605f2c48
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBrush::SetStyle(long) */

void __thiscall CPNBrush::SetStyle(CPNBrush *this,long param_1)

{
  int iVar1;
  
                    /* 0x2c48  2009  ?SetStyle@CPNBrush@@UAEXJ@Z */
  *(long *)(this + 0xc) = param_1;
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


