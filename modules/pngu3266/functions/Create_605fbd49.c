/* Module: pngu3266.dll
   Function: Create
   Address: 605fbd49
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDialog::Create(unsigned long,class CPNWindow *) */

int __thiscall CPNDialog::Create(CPNDialog *this,ulong param_1,CPNWindow *param_2)

{
  int iVar1;
  LPCDLGTEMPLATEA lpTemplate;
  CPNWindow *this_00;
  HWND__ *hWndParent;
  DLGPROC lpDialogFunc;
  HINSTANCE hInstance;
  CPNDialog *dwInitParam;
  
                    /* 0xbd49  899  ?Create@CPNDialog@@UAEHKPAVCPNWindow@@@Z */
  iVar1 = XPNDialog::Create((XPNDialog *)this,param_1,param_2);
  if ((iVar1 != 0) &&
     (lpTemplate = (LPCDLGTEMPLATEA)FUN_6061dbb0(param_1), lpTemplate != (LPCDLGTEMPLATEA)0x0)) {
    iVar1 = (**(code **)(*(int *)this + 0x14))();
    if (iVar1 == 0) {
      hWndParent = (HWND__ *)0x0;
    }
    else {
      this_00 = (CPNWindow *)(**(code **)(*(int *)this + 0x14))();
      hWndParent = CPNWindow::GetHWND(this_00);
    }
    dwInitParam = this;
    lpDialogFunc = (DLGPROC)PNGuiGetDlgProc();
    hInstance = (HINSTANCE)FUN_6061dc60(param_1,2);
    CreateDialogIndirectParamA(hInstance,lpTemplate,hWndParent,lpDialogFunc,(LPARAM)dwInitParam);
    return (uint)(*(int *)(this + 0xc) != 0);
  }
  return 0;
}


