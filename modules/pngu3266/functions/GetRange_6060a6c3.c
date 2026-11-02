/* Module: pngu3266.dll
   Function: GetRange
   Address: 6060a6c3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollButton::GetRange(long &,long &) */

void __thiscall XPNScrollButton::GetRange(XPNScrollButton *this,long *param_1,long *param_2)

{
  int iVar1;
  
                    /* 0x1a6c3  1311  ?GetRange@XPNScrollButton@@QAEXAAJ0@Z */
  iVar1 = *(int *)(this + 0xfb);
  *param_1 = *(long *)(iVar1 + 0xc);
  *param_2 = *(long *)(iVar1 + 0x10);
  return;
}


