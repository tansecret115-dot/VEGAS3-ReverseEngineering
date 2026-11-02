/* Module: pngu3266.dll
   Function: HasToolTipShown
   Address: 605f2710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNTipManager::HasToolTipShown(void)const  */

int __thiscall XPNTipManager::HasToolTipShown(XPNTipManager *this)

{
                    /* 0x2710  1452  ?HasToolTipShown@XPNTipManager@@QBEHXZ */
  return (uint)(*(int *)(this + 0x18) != 0);
}


