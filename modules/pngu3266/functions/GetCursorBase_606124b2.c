/* Module: pngu3266.dll
   Function: GetCursorBase
   Address: 606124b2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual long __thiscall XPNToolTip::GetCursorBase(void) */

long __thiscall XPNToolTip::GetCursorBase(XPNToolTip *this)

{
  XPNToolTip *local_c;
  XPNToolTip *local_8;
  
                    /* 0x224b2  1171  ?GetCursorBase@XPNToolTip@@MAEJXZ */
  local_c = this;
  local_8 = this;
  CPNSystemInfo::GetCursorSize((CPNxSize *)&local_c);
  return (long)local_8;
}


