/* Module: pngu3266.dll
   Function: GetTabTextLength
   Address: 6060a9da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNTabControl::GetTabTextLength(unsigned long)const  */

long __thiscall XPNTabControl::GetTabTextLength(XPNTabControl *this,ulong param_1)

{
  _TabInfo *p_Var1;
  long lVar2;
  
                    /* 0x1a9da  1382  ?GetTabTextLength@XPNTabControl@@UBEJK@Z */
  p_Var1 = GetTabInfo(this,param_1);
  if ((p_Var1 == (_TabInfo *)0x0) || (*(int **)p_Var1 == (int *)0x0)) {
    lVar2 = -1;
  }
  else {
    lVar2 = *(long *)(**(int **)p_Var1 + -8);
  }
  return lVar2;
}


