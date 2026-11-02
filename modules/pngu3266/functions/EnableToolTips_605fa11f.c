/* Module: pngu3266.dll
   Function: EnableToolTips
   Address: 605fa11f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::EnableToolTips(int) */

void __thiscall CPNWindow::EnableToolTips(CPNWindow *this,int param_1)

{
                    /* 0xa11f  1036  ?EnableToolTips@CPNWindow@@UAEXH@Z */
  if (*(int *)(this + 0x7c) != 0) {
    CPNTipManager::EnableToolTips(param_1);
  }
  return;
}


