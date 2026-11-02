/* Module: pngu3266.dll
   Function: GetTabInfo
   Address: 6060b054
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: struct _TabInfo * __thiscall XPNTabControl::GetTabInfo(unsigned long)const  */

_TabInfo * __thiscall XPNTabControl::GetTabInfo(XPNTabControl *this,ulong param_1)

{
  int iVar1;
  int *piVar2;
  _TabInfo *p_Var3;
  int local_8;
  
                    /* 0x1b054  1379  ?GetTabInfo@XPNTabControl@@ABEPAU_TabInfo@@K@Z */
  iVar1 = *(int *)(this + 0xd0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
LAB_6060b095:
    p_Var3 = (_TabInfo *)0x0;
  }
  else {
    local_8 = *(int *)(iVar1 + 4);
    do {
      if (local_8 == 0) goto LAB_6060b095;
      piVar2 = (int *)FUN_6061a2c0(&local_8);
      p_Var3 = (_TabInfo *)*piVar2;
    } while (*(ulong *)(p_Var3 + 4) != param_1);
  }
  return p_Var3;
}


