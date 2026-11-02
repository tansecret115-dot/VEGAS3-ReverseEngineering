/* Module: pngu3266.dll
   Function: CalculateTotalWidth
   Address: 6060b004
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: long __thiscall XPNTabControl::CalculateTotalWidth(void)const  */

long __thiscall XPNTabControl::CalculateTotalWidth(XPNTabControl *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
                    /* 0x1b004  837  ?CalculateTotalWidth@XPNTabControl@@ABEJXZ */
  iVar3 = 0;
  iVar1 = *(int *)(this + 0xd0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
    iVar3 = 0;
  }
  else {
    local_8 = *(int *)(iVar1 + 4);
    while (local_8 != 0) {
      piVar2 = (int *)FUN_6061a2c0(&local_8);
      iVar3 = iVar3 + 2 + (*(int *)(*piVar2 + 0x10) - *(int *)(*piVar2 + 8));
    }
  }
  return iVar3;
}


