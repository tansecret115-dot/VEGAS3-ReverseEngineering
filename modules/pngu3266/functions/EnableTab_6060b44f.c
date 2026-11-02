/* Module: pngu3266.dll
   Function: EnableTab
   Address: 6060b44f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::EnableTab(unsigned long,int) */

void __thiscall XPNTabControl::EnableTab(XPNTabControl *this,ulong param_1,int param_2)

{
  _TabInfo *p_Var1;
  
                    /* 0x1b44f  1034  ?EnableTab@XPNTabControl@@UAEXKH@Z */
  p_Var1 = GetTabInfo(this,param_1);
  if (p_Var1 != (_TabInfo *)0x0) {
    *(int *)(p_Var1 + 0x20) = param_2;
  }
  return;
}


