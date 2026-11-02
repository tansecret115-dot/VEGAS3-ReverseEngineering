/* Module: pngu3266.dll
   Function: OnEvent
   Address: 605fe199
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNEdit::OnEvent(class CPNEvent &) */

int __thiscall CPNEdit::OnEvent(CPNEdit *this,CPNEvent *param_1)

{
  HDC hdc;
  int iVar1;
  CPNColor *pCVar2;
  CPNBrush *pCVar3;
  COLORREF color;
  
                    /* 0xe199  1605  ?OnEvent@CPNEdit@@UAEHAAVCPNEvent@@@Z */
  if ((*(int *)(param_1 + 8) == 0x10) &&
     (hdc = *(HDC *)(param_1 + 0x1c), *(int *)(param_1 + 0x24) == 0x133)) {
    if (*(int *)(this + 0xfe) == 0) {
      pCVar2 = CPNDrawHelper::GetWindowColor();
      color = *(COLORREF *)(pCVar2 + 8);
    }
    else {
      color = *(COLORREF *)(this + 200);
    }
    SetTextColor(hdc,*(COLORREF *)(this + 0xe7));
    SetBkColor(hdc,color);
    iVar1 = *(int *)(this + 0xfe);
    if (iVar1 == 0) {
      pCVar3 = CPNDrawHelper::GetWindowBrush();
      iVar1 = *(int *)(pCVar3 + 0x2f);
    }
    *(int *)(param_1 + 0x28) = iVar1;
    iVar1 = 1;
  }
  else {
    iVar1 = CPNWindow::OnEvent((CPNWindow *)this,param_1);
  }
  return iVar1;
}


