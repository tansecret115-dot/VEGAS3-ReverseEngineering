/* Module: pngu3266.dll
   Function: SetTabRects
   Address: 6060af78
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: virtual void __thiscall XPNTabControl::SetTabRects(class CPNxRect &) */

void __thiscall XPNTabControl::SetTabRects(XPNTabControl *this,CPNxRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_c;
  int local_8;
  
                    /* 0x1af78  2016  ?SetTabRects@XPNTabControl@@EAEXAAVCPNxRect@@@Z */
  iVar2 = *(int *)(this + 0xd0);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    local_8 = *(int *)(iVar2 + 4);
    local_c = 0;
    iVar2 = 2;
    while (local_8 != 0) {
      piVar6 = (int *)FUN_6061a2c0(&local_8);
      iVar3 = *piVar6;
      if (*(int *)(iVar3 + 4) == *(int *)(this + 0xc0)) {
        local_c = iVar3;
      }
      iVar1 = *(int *)(iVar3 + 0x18) + 0x17 + iVar2;
      iVar4 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(this + 0xe0);
      *(int *)(iVar3 + 8) = iVar2;
      *(int *)(iVar3 + 0x10) = iVar1;
      *(int *)(iVar3 + 0x14) = iVar4;
      *(int *)(iVar3 + 0xc) = iVar4 - iVar5;
      iVar2 = iVar1 + 2;
    }
    if (local_c != 0) {
      *(int *)(local_c + 8) = *(int *)(local_c + 8) + -2;
      *(int *)(local_c + 0x10) = *(int *)(local_c + 0x10) + 2;
    }
  }
  return;
}


