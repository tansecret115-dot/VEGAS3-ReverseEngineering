/* Module: pngu3266.dll
   Function: DisplayMenu
   Address: 6060d002
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNBtnObserver::DisplayMenu(void) */

void __thiscall CPNBtnObserver::DisplayMenu(CPNBtnObserver *this)

{
  DWORD DVar1;
  
                    /* 0x1d002  960  ?DisplayMenu@CPNBtnObserver@@QAEXXZ */
  (**(code **)(**(int **)(this + 8) + 0x130))(1);
  XPNButton::DisplayPopupMenu(*(XPNButton **)(this + 8));
  (**(code **)(**(int **)(this + 8) + 0x130))(0);
  DVar1 = GetTickCount();
  *(DWORD *)(this + 0xc) = DVar1;
  return;
}


