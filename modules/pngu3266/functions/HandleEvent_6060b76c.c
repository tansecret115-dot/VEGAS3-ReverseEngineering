/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 6060b76c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::HandleEvent(class CPNEvent &) */

void __thiscall XPNTabControl::HandleEvent(XPNTabControl *this,CPNEvent *param_1)

{
                    /* 0x1b76c  1442  ?HandleEvent@XPNTabControl@@UAEXAAVCPNEvent@@@Z */
  if (((*(int *)(param_1 + 0x10) == *(int *)(this + 0xd4)) && (*(int *)(param_1 + 8) == -0x80000000)
      ) && (*(int *)(param_1 + 0xc) == 0x20)) {
    AdjustFirstVisibleTab(this,*(long *)(*(int *)(*(int *)(param_1 + 0x10) + 0xfb) + 0x14));
  }
  return;
}


