/* Module: pngu3266.dll
   Function: SetDashes
   Address: 605f5ecf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPen::SetDashes(long,unsigned long *) */

void __thiscall CPNPen::SetDashes(CPNPen *this,long param_1,ulong *param_2)

{
  int iVar1;
  
                    /* 0x5ecf  1886  ?SetDashes@CPNPen@@UAEXJPAK@Z */
  XPNPen::SetDashes((XPNPen *)this,param_1,param_2);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


