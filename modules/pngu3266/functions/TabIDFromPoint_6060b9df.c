/* Module: pngu3266.dll
   Function: TabIDFromPoint
   Address: 6060b9df
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNTabControl::TabIDFromPoint(class CPNxPoint const &)const  */

long __thiscall XPNTabControl::TabIDFromPoint(XPNTabControl *this,CPNxPoint *param_1)

{
  int iVar1;
  int iVar2;
  _TabInfo *p_Var3;
  int *piVar4;
  int local_8;
  
                    /* 0x1b9df  2084  ?TabIDFromPoint@XPNTabControl@@UBEJABVCPNxPoint@@@Z */
  iVar2 = 0;
  if (*(int *)(this + 200) != 0) {
    p_Var3 = GetTabInfo(this,*(ulong *)(this + 0xc4));
    iVar2 = *(int *)(p_Var3 + 8) + -2;
  }
  local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
  if (local_8 != 0) {
    do {
      piVar4 = (int *)FUN_6061a2c0(&local_8);
      iVar1 = *piVar4;
      if ((((*(int *)(iVar1 + 8) + -iVar2 <= *(int *)param_1) &&
           (*(int *)param_1 <= *(int *)(iVar1 + 0x10) + -iVar2)) &&
          (*(int *)(iVar1 + 0xc) <= *(int *)(param_1 + 4))) &&
         (*(int *)(param_1 + 4) <= *(int *)(iVar1 + 0x14))) {
        return *(long *)(iVar1 + 4);
      }
    } while (local_8 != 0);
  }
  return -1;
}


