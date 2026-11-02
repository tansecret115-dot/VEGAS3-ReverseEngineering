/* Module: pngu3266.dll
   Function: DoModal
   Address: 605fbdbd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNDialog::DoModal(void) */

ulong __thiscall CPNDialog::DoModal(CPNDialog *this)

{
  ulong uVar1;
  int iVar2;
  LPCDLGTEMPLATEA hDialogTemplate;
  HINSTANCE hInstance;
  CPNWindow *this_00;
  CPNWindow *pCVar3;
  CPNWindow *pCVar4;
  DLGPROC lpDialogFunc;
  HWND__ *hWndParent;
  CPNDialog *dwInitParam;
  
                    /* 0xbdbd  965  ?DoModal@CPNDialog@@UAEKXZ */
  hWndParent = (HWND)0x0;
  if (XPNDialog::zmb_FakeModality == 0) {
    XPNDialog::PreDomodal((XPNDialog *)this,(CPNWindow *)0x0);
    if ((*(int *)(this + 0xc4) != 0) && (iVar2 = AddSingleInstanceDialog(this), iVar2 == 0)) {
      XPNDialog::PostDomodal((XPNDialog *)this,(CPNWindow *)0x0);
      return 0;
    }
    *(undefined4 *)(this + 200) = 1;
    hDialogTemplate = (LPCDLGTEMPLATEA)FUN_6061dbb0(*(uint *)(this + 0xb8));
    hInstance = (HINSTANCE)FUN_6061dc60(*(undefined4 *)(this + 0xb8),2);
    this_00 = (CPNWindow *)(**(code **)(*(int *)this + 0x14))();
    if (this_00 != (CPNWindow *)0x0) {
      pCVar3 = (CPNWindow *)(**(code **)(*(int *)this_00 + 0x10c))();
      while (pCVar4 = pCVar3, pCVar4 != (CPNWindow *)0x0) {
        pCVar3 = (CPNWindow *)(**(code **)(*(int *)pCVar4 + 0x10c))();
        this_00 = pCVar4;
      }
      hWndParent = CPNWindow::GetHWND(this_00);
      (**(code **)(*(int *)this_00 + 0x110))(this);
    }
    dwInitParam = this;
    lpDialogFunc = (DLGPROC)PNGuiGetDlgProc();
    uVar1 = DialogBoxIndirectParamA
                      (hInstance,hDialogTemplate,hWndParent,lpDialogFunc,(LPARAM)dwInitParam);
    *(undefined4 *)(this + 200) = 0;
    if (this_00 != (CPNWindow *)0x0) {
      (**(code **)(*(int *)this_00 + 0x110))(0);
    }
    if (*(int *)(this + 0xc4) != 0) {
      RemoveSingleInstanceDialog(this);
    }
    XPNDialog::PostDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  }
  else {
    uVar1 = (**(code **)(*(int *)this + 0x124))();
  }
  return uVar1;
}


