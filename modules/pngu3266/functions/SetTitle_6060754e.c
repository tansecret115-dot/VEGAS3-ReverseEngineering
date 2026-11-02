/* Module: pngu3266.dll
   Function: SetTitle
   Address: 6060754e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTextWithLink::SetTitle(char const *) */

void __thiscall XPNTextWithLink::SetTitle(XPNTextWithLink *this,char *param_1)

{
                    /* 0x1754e  2032  ?SetTitle@XPNTextWithLink@@UAEXPBD@Z */
  (**(code **)(*(int *)this + 0x11c))(param_1);
  return;
}


