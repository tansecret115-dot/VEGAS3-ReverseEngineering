/* Module: pngu3266.dll
   Function: DoModeless
   Address: 605fbebf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNDialog::DoModeless(void) */

ulong __thiscall CPNDialog::DoModeless(CPNDialog *this)

{
  int iVar1;
  LPCDLGTEMPLATEA lpTemplate;
  CPNWindow *this_00;
  DLGPROC lpDialogFunc;
  HINSTANCE hInstance;
  HWND pHVar2;
  HWND__ *hWndParent;
  CPNDialog *dwInitParam;
  
                    /* 0xbebf  972  ?DoModeless@CPNDialog@@UAEKXZ */
  hWndParent = (HWND__ *)0x0;
  if ((*(int *)(this + 0xc4) != 0) && (iVar1 = AddSingleInstanceDialog(this), iVar1 == 0)) {
    return 0;
  }
  lpTemplate = (LPCDLGTEMPLATEA)FUN_6061dbb0(*(uint *)(this + 0xb8));
  iVar1 = (**(code **)(*(int *)this + 0x14))();
  if (iVar1 != 0) {
    this_00 = (CPNWindow *)(**(code **)(*(int *)this + 0x14))();
    hWndParent = CPNWindow::GetHWND(this_00);
  }
  dwInitParam = this;
  lpDialogFunc = (DLGPROC)PNGuiGetDlgProc();
  hInstance = (HINSTANCE)FUN_6061dc60(*(undefined4 *)(this + 0xb8),2);
  pHVar2 = CreateDialogIndirectParamA
                     (hInstance,lpTemplate,hWndParent,lpDialogFunc,(LPARAM)dwInitParam);
  *(HWND *)(this + 0xc) = pHVar2;
  return 0;
}


