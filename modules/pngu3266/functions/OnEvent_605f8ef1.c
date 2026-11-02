/* Module: pngu3266.dll
   Function: OnEvent
   Address: 605f8ef1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::OnEvent(class CPNEvent &) */

int __thiscall CPNWindow::OnEvent(CPNWindow *this,CPNEvent *param_1)

{
                    /* 0x8ef1  1614  ?OnEvent@CPNWindow@@UAEHAAVCPNEvent@@@Z */
  if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0xc) == 0xb5)) {
    NotifyChildren(this,param_1);
  }
  return 0;
}


