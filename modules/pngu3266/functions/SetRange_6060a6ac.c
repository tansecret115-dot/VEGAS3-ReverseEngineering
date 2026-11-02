/* Module: pngu3266.dll
   Function: SetRange
   Address: 6060a6ac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollButton::SetRange(long,long) */

void __thiscall XPNScrollButton::SetRange(XPNScrollButton *this,long param_1,long param_2)

{
  int iVar1;
  
                    /* 0x1a6ac  1973  ?SetRange@XPNScrollButton@@QAEXJJ@Z */
  iVar1 = *(int *)(this + 0xfb);
  *(long *)(iVar1 + 0xc) = param_1;
  *(long *)(iVar1 + 0x10) = param_2;
  return;
}


