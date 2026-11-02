/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 60604774
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTipManager::HandleEvent(class CPNEvent &) */

void __thiscall CPNTipManager::HandleEvent(CPNTipManager *this,CPNEvent *param_1)

{
  int *piVar1;
  
                    /* 0x14774  1439  ?HandleEvent@CPNTipManager@@UAEXAAVCPNEvent@@@Z */
  if ((((*(int *)(*(int *)(this + 8) + 0x10) != 0) && (*(int *)(param_1 + 0x24) == 0x4e)) &&
      (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
     ((((HWND)*piVar1 == DAT_60649ddc && (DAT_60649ddc != (HWND)0x0)) && (piVar1[2] == -0x209)))) {
    SetWindowPos(DAT_60649ddc,(HWND)0x0,0,0,0,0,0x13);
  }
  return;
}


