/* Module: pngu3266.dll
   Function: SetTabText
   Address: 6060aae7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::SetTabText(unsigned long,char const *) */

void __thiscall XPNTabControl::SetTabText(XPNTabControl *this,ulong param_1,char *param_2)

{
  _TabInfo *p_Var1;
  
                    /* 0x1aae7  2017  ?SetTabText@XPNTabControl@@UAEXKPBD@Z */
  p_Var1 = GetTabInfo(this,param_1);
  FUN_60618ed0(*(void **)p_Var1,param_2);
  return;
}


