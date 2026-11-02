/* Module: pngu3266.dll
   Function: RemoveAllToolTips
   Address: 606049ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTipManager::RemoveAllToolTips(void) */

void __thiscall CPNTipManager::RemoveAllToolTips(CPNTipManager *this)

{
  int iVar1;
  int *piVar2;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_8;
  
                    /* 0x149ba  1756  ?RemoveAllToolTips@CPNTipManager@@UAEXXZ */
  if (((DAT_60649ddc != (HWND)0x0) && (iVar1 = *(int *)(this + 8), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x10) != 0)) {
    local_8 = *(int *)(iVar1 + 4);
    while (local_8 != 0) {
      piVar2 = (int *)FUN_6061a2c0(&local_8);
      piVar2 = (int *)*piVar2;
      memset(&local_34,0,0x2c);
      local_34 = 0x2c;
      if (*piVar2 == 0) {
        local_2c = piVar2[5];
        local_30 = 1;
      }
      else {
        local_2c = *(int *)(*(int *)(this + 0xc) + 0xc);
      }
      local_28 = piVar2[5];
      SendMessageA(DAT_60649ddc,0x405,0,(LPARAM)&local_34);
    }
    XPNTipManager::RemoveAllToolTips((XPNTipManager *)this);
  }
  return;
}


