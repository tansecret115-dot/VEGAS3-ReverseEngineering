/* Module: pngu3266.dll
   Function: IsEnabled
   Address: 6060b466
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNTabControl::IsEnabled(unsigned long)const  */

int __thiscall XPNTabControl::IsEnabled(XPNTabControl *this,ulong param_1)

{
  _TabInfo *p_Var1;
  int iVar2;
  
                    /* 0x1b466  1502  ?IsEnabled@XPNTabControl@@UBEHK@Z */
  p_Var1 = GetTabInfo(this,param_1);
  iVar2 = 0;
  if (p_Var1 != (_TabInfo *)0x0) {
    iVar2 = *(int *)(p_Var1 + 0x20);
  }
  return iVar2;
}


